@class NSDateInterval, NSDateComponents, NSDate, HKStatisticsCollectionCacheSettings;

@interface _HKStatisticsCollectionQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDate *anchorDate;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSDateComponents *intervalComponents;
@property (nonatomic) unsigned long long mergeStrategy;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (copy, nonatomic) HKStatisticsCollectionCacheSettings *cacheSettings;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
