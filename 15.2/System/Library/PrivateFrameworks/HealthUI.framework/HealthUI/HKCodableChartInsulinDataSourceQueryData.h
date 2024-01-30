@class NSMutableArray;

@interface HKCodableChartInsulinDataSourceQueryData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *basalInsulinValues;
@property (retain, nonatomic) NSMutableArray *totalInsulinValues;

+ (Class)basalInsulinValuesType;
+ (Class)totalInsulinValuesType;

- (id)basalInsulinValuesAtIndex:(unsigned long long)a0;
- (id)totalInsulinValuesAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)basalInsulinValuesCount;
- (void)clearTotalInsulinValues;
- (void)addTotalInsulinValues:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addBasalInsulinValues:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (unsigned long long)totalInsulinValuesCount;
- (void)clearBasalInsulinValues;

@end
