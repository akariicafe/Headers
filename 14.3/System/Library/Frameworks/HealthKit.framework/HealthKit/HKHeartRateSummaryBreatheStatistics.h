@class HKHeartRateSummaryReading;

@interface HKHeartRateSummaryBreatheStatistics : HKHeartRateSummaryStatistics

@property (retain, nonatomic, setter=_setFinalReading:) HKHeartRateSummaryReading *finalReading;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
