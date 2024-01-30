@class NSMutableArray;

@interface HKCodableQuantitySeries : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valuesType;

- (unsigned long long)valuesCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addValues:(id)a0;
- (id)valuesAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)clearValues;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
