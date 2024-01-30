@class PBCodable;

@interface AWDMetricContainer : NSObject

@property (retain, nonatomic) PBCodable *metric;
@property (readonly, nonatomic) unsigned int metricId;

- (id)initWithMetricId:(unsigned int)a0;
- (void).cxx_destruct;

@end
