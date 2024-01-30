@class NSNumber;

@interface HAMenstrualAlgorithmsHeartRateStatistics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *lowerPercentile;
@property (nonatomic) long long sampleCount;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
