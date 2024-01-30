@class NSMutableArray;

@interface HKCodableChartInsulinDataSourceQueryData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *basalInsulinValues;
@property (retain, nonatomic) NSMutableArray *totalInsulinValues;

+ (Class)basalInsulinValuesType;
+ (Class)totalInsulinValuesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addBasalInsulinValues:(id)a0;
- (void)addTotalInsulinValues:(id)a0;
- (id)basalInsulinValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)basalInsulinValuesCount;
- (void)clearBasalInsulinValues;
- (void)clearTotalInsulinValues;
- (id)totalInsulinValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)totalInsulinValuesCount;

@end
