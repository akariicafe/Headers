@class NSMutableArray;

@interface TISKSingleMetricSample : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *samples;

+ (id)makeMetric;

- (BOOL)isEmpty;
- (void)merge:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)addSample:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)average;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)size;
- (id)description;
- (void).cxx_destruct;
- (double)variance;
- (double)sum;
- (id)generateDataForSR:(id)a0;

@end
