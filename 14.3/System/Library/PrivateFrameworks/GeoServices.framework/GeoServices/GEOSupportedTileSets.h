@class NSMutableArray, PBUnknownFields;

@interface GEOSupportedTileSets : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_tileSets;
}

@property (retain, nonatomic) NSMutableArray *tileSets;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)tileSetType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)addTileSet:(id)a0;
- (void).cxx_destruct;
- (void)clearTileSets;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)tileSetAtIndex:(unsigned long long)a0;
- (unsigned long long)tileSetsCount;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
