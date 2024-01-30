@class GEOTileCoordinate, NSMutableArray, PBDataReader;

@interface GEOVLMetadataTile : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _purposeDenylists;
    NSMutableArray *_builds;
    GEOTileCoordinate *_coord;
    NSMutableArray *_precisions;
    NSMutableArray *_tiles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_purposeDenylists : 1; unsigned char read_builds : 1; unsigned char read_coord : 1; unsigned char read_precisions : 1; unsigned char read_tiles : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCoord;
@property (retain, nonatomic) GEOTileCoordinate *coord;
@property (retain, nonatomic) NSMutableArray *builds;
@property (retain, nonatomic) NSMutableArray *precisions;
@property (retain, nonatomic) NSMutableArray *tiles;
@property (readonly, nonatomic) unsigned long long purposeDenylistsCount;
@property (readonly, nonatomic) int *purposeDenylists;

+ (Class)tileType;
+ (Class)precisionType;
+ (Class)buildType;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addTile:(id)a0;
- (unsigned long long)tilesCount;
- (void)addPurposeDenylist:(int)a0;
- (void)clearPurposeDenylists;
- (int)purposeDenylistAtIndex:(unsigned long long)a0;
- (void)clearTiles;
- (void)setPurposeDenylists:(int *)a0 count:(unsigned long long)a1;
- (id)purposeDenylistsAsString:(int)a0;
- (int)StringAsPurposeDenylists:(id)a0;
- (void)addPrecision:(id)a0;
- (unsigned long long)buildsCount;
- (void)clearBuilds;
- (id)buildAtIndex:(unsigned long long)a0;
- (unsigned long long)precisionsCount;
- (void)clearPrecisions;
- (id)precisionAtIndex:(unsigned long long)a0;
- (id)tileAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)addBuild:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
