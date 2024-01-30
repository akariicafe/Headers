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

+ (BOOL)isValid:(id)a0;
+ (Class)buildType;
+ (Class)precisionType;
+ (Class)tileType;

- (id)initWithData:(id)a0;
- (void)clearTiles;
- (void)clearPurposeDenylists;
- (id)precisionAtIndex:(unsigned long long)a0;
- (void)addPrecision:(id)a0;
- (void)clearPrecisions;
- (void)addBuild:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)tileAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (id)purposeDenylistsAsString:(int)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)buildAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)buildsCount;
- (unsigned long long)tilesCount;
- (void)writeTo:(id)a0;
- (void)addTile:(id)a0;
- (void)addPurposeDenylist:(int)a0;
- (int)purposeDenylistAtIndex:(unsigned long long)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)precisionsCount;
- (void)setPurposeDenylists:(int *)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;
- (int)StringAsPurposeDenylists:(id)a0;
- (void)clearBuilds;

@end
