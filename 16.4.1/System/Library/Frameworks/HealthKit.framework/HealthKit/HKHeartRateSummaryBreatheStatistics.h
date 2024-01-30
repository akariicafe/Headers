@class HKHeartRateSummaryReading;

@interface HKHeartRateSummaryBreatheStatistics : HKHeartRateSummaryStatistics

@property (retain, nonatomic, setter=_setFinalReading:) HKHeartRateSummaryReading *finalReading;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initFromStatistics:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
