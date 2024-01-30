@class NSMutableArray;

@interface HKCodableChartQuantityDistributionDataSourceQueryData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *quantityDistributionDatas;

+ (Class)quantityDistributionDataType;

- (void)clearQuantityDistributionDatas;
- (unsigned long long)quantityDistributionDatasCount;
- (id)quantityDistributionDataAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addQuantityDistributionData:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
