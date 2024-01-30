@class NSMutableArray;

@interface HKCodableQuantitySeries : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valuesType;

- (void)clearValues;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addValues:(id)a0;
- (id)valuesAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)valuesCount;

@end
