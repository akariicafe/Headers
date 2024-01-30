@class NSMutableArray;

@interface GEOCoarseLocationTileData : PBCodable <NSCopying> {
    NSMutableArray *_territorys;
}

@property (retain, nonatomic) NSMutableArray *territorys;

+ (Class)territoryType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addTerritory:(id)a0;
- (unsigned long long)territorysCount;
- (void)clearTerritorys;
- (id)territoryAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
