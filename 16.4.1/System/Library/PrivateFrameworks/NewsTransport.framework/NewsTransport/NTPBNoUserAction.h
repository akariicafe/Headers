@class NSMutableArray;

@interface NTPBNoUserAction : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *visibleViews;

+ (Class)visibleViewsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addVisibleViews:(id)a0;
- (void)clearVisibleViews;
- (id)visibleViewsAtIndex:(unsigned long long)a0;
- (unsigned long long)visibleViewsCount;

@end
