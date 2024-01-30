@class NSMutableArray;

@interface PPTPBMetricHistory : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *metrics;

+ (Class)metricsType;

- (void)clearMetrics;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)metricsCount;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addMetrics:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)metricsAtIndex:(unsigned long long)a0;

@end
