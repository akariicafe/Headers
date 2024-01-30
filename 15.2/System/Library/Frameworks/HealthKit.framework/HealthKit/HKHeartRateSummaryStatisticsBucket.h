@class NSMutableIndexSet;

@interface HKHeartRateSummaryStatisticsBucket : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long bucketIndex;
@property (readonly, nonatomic) NSMutableIndexSet *heartRatesInBeatsPerMinute;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBucketIndex:(long long)a0;
- (void)addHeartRateInBeatsPerMinute:(long long)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
