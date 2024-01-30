@class GEOTileCoordinate, NSMutableArray, PBDataReader;

@interface GEOVLMetadataTile : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_builds;
    GEOTileCoordinate *_coord;
    NSMutableArray *_precisions;
    NSMutableArray *_tiles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_builds : 1; unsigned char read_coord : 1; unsigned char read_precisions : 1; unsigned char read_tiles : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCoord;
@property (retain, nonatomic) GEOTileCoordinate *coord;
@property (retain, nonatomic) NSMutableArray *builds;
@property (retain, nonatomic) NSMutableArray *precisions;
@property (retain, nonatomic) NSMutableArray *tiles;

+ (Class)precisionType;
+ (Class)buildType;
+ (Class)tileType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void)addBuild:(id)a0;
- (void)addPrecision:(id)a0;
- (unsigned long long)buildsCount;
- (void)clearBuilds;
- (id)buildAtIndex:(unsigned long long)a0;
- (unsigned long long)precisionsCount;
- (void)clearPrecisions;
- (id)precisionAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)tilesCount;
- (id)tileAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addTile:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)clearTiles;

@end
