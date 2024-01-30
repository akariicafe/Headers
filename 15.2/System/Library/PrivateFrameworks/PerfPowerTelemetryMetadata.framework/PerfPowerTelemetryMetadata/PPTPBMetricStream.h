@class NSMutableArray;

@interface PPTPBMetricStream : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *metricHistorys;

+ (Class)metricHistoryType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addMetricHistory:(id)a0;
- (unsigned long long)metricHistorysCount;
- (void)clearMetricHistorys;
- (id)metricHistoryAtIndex:(unsigned long long)a0;

@end
