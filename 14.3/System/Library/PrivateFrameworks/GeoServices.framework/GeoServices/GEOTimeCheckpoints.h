@class PBDataReader, PBUnknownFields;

@interface GEOTimeCheckpoints : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _distToNextCheckpoints;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _timeToNextCheckpoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_distToNextCheckpoints : 1; unsigned char read_timeToNextCheckpoints : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long distToNextCheckpointsCount;
@property (readonly, nonatomic) unsigned int *distToNextCheckpoints;
@property (readonly, nonatomic) unsigned long long timeToNextCheckpointsCount;
@property (readonly, nonatomic) unsigned int *timeToNextCheckpoints;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addDistToNextCheckpoint:(unsigned int)a0;
- (void)addTimeToNextCheckpoint:(unsigned int)a0;
- (void)clearDistToNextCheckpoints;
- (unsigned int)distToNextCheckpointAtIndex:(unsigned long long)a0;
- (void)clearTimeToNextCheckpoints;
- (unsigned int)timeToNextCheckpointAtIndex:(unsigned long long)a0;
- (void)setDistToNextCheckpoints:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setTimeToNextCheckpoints:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
