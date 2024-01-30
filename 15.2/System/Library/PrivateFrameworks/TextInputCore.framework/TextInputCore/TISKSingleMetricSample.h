@class NSMutableArray;

@interface TISKSingleMetricSample : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *samples;

+ (id)makeMetric;

- (void)merge:(id)a0;
- (double)sum;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)size;
- (void)addSample:(id)a0;
- (id)description;
- (BOOL)isEmpty;
- (double)variance;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (double)average;
- (id)generateDataForSR:(id)a0;

@end
