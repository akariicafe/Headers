@class GEOTileCoordinate, PBDataReader;

@interface GEOVLDataTile : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _buildIndexs;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _precisionIndexs;
    GEOTileCoordinate *_coord;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_buildIndexs : 1; unsigned char read_precisionIndexs : 1; unsigned char read_coord : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCoord;
@property (retain, nonatomic) GEOTileCoordinate *coord;
@property (readonly, nonatomic) unsigned long long buildIndexsCount;
@property (readonly, nonatomic) unsigned int *buildIndexs;
@property (readonly, nonatomic) unsigned long long precisionIndexsCount;
@property (readonly, nonatomic) unsigned int *precisionIndexs;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void)addBuildIndex:(unsigned int)a0;
- (void)addPrecisionIndex:(unsigned int)a0;
- (void)clearBuildIndexs;
- (unsigned int)buildIndexAtIndex:(unsigned long long)a0;
- (void)clearPrecisionIndexs;
- (unsigned int)precisionIndexAtIndex:(unsigned long long)a0;
- (void)setBuildIndexs:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setPrecisionIndexs:(unsigned int *)a0 count:(unsigned long long)a1;
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
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
