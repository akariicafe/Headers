@interface GEOActionComponentMapEntry : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _placeDataComponents;
    int _actionComponent;
    struct { unsigned char has_actionComponent : 1; } _flags;
}

@property (nonatomic) BOOL hasActionComponent;
@property (nonatomic) int actionComponent;
@property (readonly, nonatomic) unsigned long long placeDataComponentsCount;
@property (readonly, nonatomic) int *placeDataComponents;

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
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addPlaceDataComponents:(int)a0;
- (void)clearPlaceDataComponents;
- (int)placeDataComponentsAtIndex:(unsigned long long)a0;
- (id)actionComponentAsString:(int)a0;
- (int)StringAsActionComponent:(id)a0;
- (void)setPlaceDataComponents:(int *)a0 count:(unsigned long long)a1;
- (id)initWithDictionary:(id)a0;

@end
