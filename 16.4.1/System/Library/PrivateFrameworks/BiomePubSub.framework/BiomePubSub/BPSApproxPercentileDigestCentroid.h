@interface BPSApproxPercentileDigestCentroid : NSObject

@property (nonatomic) float mean;
@property (nonatomic) unsigned int weight;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithMeanAndWeight:(float)a0 weight:(unsigned int)a1;

@end
