@class PBDataReader, PBUnknownFields;

@interface GEOTileSetVersion : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *_availableTiles;
    unsigned long long _availableTilesCount;
    unsigned long long _availableTilesSpace;
    struct GEOGenericTile { unsigned int x0; unsigned int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *_genericTiles;
    unsigned long long _genericTilesCount;
    unsigned long long _genericTilesSpace;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _identifier;
    unsigned int _supportedLanguagesVersion;
    unsigned int _timeToLiveSeconds;
    struct { unsigned char has_supportedLanguagesVersion : 1; unsigned char has_timeToLiveSeconds : 1; unsigned char read_unknownFields : 1; unsigned char read_availableTiles : 1; unsigned char read_genericTiles : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) unsigned int identifier;
@property (readonly, nonatomic) unsigned long long availableTilesCount;
@property (readonly, nonatomic) struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *availableTiles;
@property (nonatomic) BOOL hasTimeToLiveSeconds;
@property (nonatomic) unsigned int timeToLiveSeconds;
@property (readonly, nonatomic) unsigned long long genericTilesCount;
@property (readonly, nonatomic) struct GEOGenericTile { unsigned int x0; unsigned int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *genericTiles;
@property (nonatomic) BOOL hasSupportedLanguagesVersion;
@property (nonatomic) unsigned int supportedLanguagesVersion;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)clearGenericTiles;
- (id)initWithJSON:(id)a0;
- (void)addAvailableTiles:(struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })a0;
- (struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })availableTilesAtIndex:(unsigned long long)a0;
- (id)init;
- (void)setAvailableTiles:(struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)addGenericTile:(struct GEOGenericTile { unsigned int x0; unsigned int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; })a0;
- (void)dealloc;
- (void)clearAvailableTiles;
- (id)jsonRepresentation;
- (void)setGenericTiles:(struct GEOGenericTile { unsigned int x0; unsigned int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *)a0 count:(unsigned long long)a1;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (struct GEOGenericTile { unsigned int x0; unsigned int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; })genericTileAtIndex:(unsigned long long)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
