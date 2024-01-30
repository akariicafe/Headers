@class NSNumber;

@interface HKHRAFibBurdenAnalysisResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *burdenPercentage;
@property (nonatomic) BOOL burdenPercentageWasClampedToLowerBound;
@property (readonly, nonatomic) long long unavailabilityReason;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithBurdenPercentage:(id)a0 burdenPercentageWasClampedToLowerBound:(BOOL)a1 unavailabilityReason:(long long)a2;

@end
