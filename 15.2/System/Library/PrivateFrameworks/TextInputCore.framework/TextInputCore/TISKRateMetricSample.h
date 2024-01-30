@interface TISKRateMetricSample : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int countFactor;
@property (nonatomic) double durationFactor;

+ (id)makeMetric;

- (void)merge:(id)a0;
- (id)rate;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)addToCounter:(int)a0;
- (void)addToDuration:(double)a0;

@end
