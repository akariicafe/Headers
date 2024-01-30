@interface HKMCHeartStatistics : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double percentileQuantityValue;
@property (readonly, nonatomic) long long sampleCount;

+ (id)heartStatisticsFromStatistics:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithPercentileQuantityValue:(double)a0 sampleCount:(long long)a1;

@end
