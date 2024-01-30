@class PBDataReader, GEOFormattedString, PBUnknownFields;

@interface GEOStepGroup : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _stepIds;
    GEOFormattedString *_groupInstruction;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_stepIds : 1; unsigned char read_groupInstruction : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasGroupInstruction;
@property (retain, nonatomic) GEOFormattedString *groupInstruction;
@property (readonly, nonatomic) unsigned long long stepIdsCount;
@property (readonly, nonatomic) unsigned int *stepIds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (void)addStepId:(unsigned int)a0;
- (void)clearStepIds;
- (void)setStepIds:(unsigned int *)a0 count:(unsigned long long)a1;
- (unsigned int)stepIdAtIndex:(unsigned long long)a0;

@end
