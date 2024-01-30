@class HKHRAFibBurdenDayOfWeekHistogram, HKHRAFibBurdenTimeOfDayHistogram;

@interface HKHRAFibBurdenHistogramResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKHRAFibBurdenDayOfWeekHistogram *dayOfWeekHistogram;
@property (readonly, nonatomic) HKHRAFibBurdenTimeOfDayHistogram *timeOfDayHistogram;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDayOfWeekHistogram:(id)a0 timeOfDayHistogram:(id)a1;

@end
