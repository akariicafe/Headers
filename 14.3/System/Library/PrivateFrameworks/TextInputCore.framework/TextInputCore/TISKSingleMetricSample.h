@class NSMutableArray;

@interface TISKSingleMetricSample : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *samples;

+ (id)makeMetric;

- (void)merge:(id)a0;
- (BOOL)isEmpty;
- (id)init;
- (void).cxx_destruct;
- (void)addSample:(id)a0;
- (unsigned long long)size;
- (id)initWithCoder:(id)a0;
- (double)variance;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (double)average;
- (void)encodeWithCoder:(id)a0;
- (id)generateDataForSR:(id)a0;

@end
