@interface GEOCoarseLocationRing : PBCodable <NSCopying> {
    struct GEOCoarseLocationPoint { int x0; int x1; } *_points;
    unsigned long long _pointsCount;
    unsigned long long _pointsSpace;
}

@property (readonly, nonatomic) unsigned long long pointsCount;
@property (readonly, nonatomic) struct GEOCoarseLocationPoint { int x0; int x1; } *points;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)clearPoints;
- (struct GEOCoarseLocationPoint { int x0; int x1; })pointsAtIndex:(unsigned long long)a0;
- (void)setPoints:(struct GEOCoarseLocationPoint { int x0; int x1; } *)a0 count:(unsigned long long)a1;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)addPoints:(struct GEOCoarseLocationPoint { int x0; int x1; })a0;

@end
