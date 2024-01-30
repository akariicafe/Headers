@interface NWPVarValueItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long armPullCount;
@property (nonatomic) unsigned long long armObservedCount;
@property (nonatomic) double sampleRewardMean;
@property (nonatomic) double sampleRewardSum;
@property (nonatomic) double sampleRewardSumSquares;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;

@end
