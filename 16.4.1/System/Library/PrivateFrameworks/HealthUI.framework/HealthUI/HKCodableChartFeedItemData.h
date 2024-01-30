@class HKCodableChartSharableModel, NSMutableArray;

@interface HKCodableChartFeedItemData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasChartModel;
@property (retain, nonatomic) HKCodableChartSharableModel *chartModel;
@property (retain, nonatomic) NSMutableArray *trends;

+ (Class)trendsType;

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
- (void)addTrends:(id)a0;
- (void)clearTrends;
- (id)trendsAtIndex:(unsigned long long)a0;
- (unsigned long long)trendsCount;

@end
