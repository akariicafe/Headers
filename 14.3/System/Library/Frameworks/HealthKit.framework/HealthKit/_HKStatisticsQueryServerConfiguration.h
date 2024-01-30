@class NSDateInterval;

@interface _HKStatisticsQueryServerConfiguration : HKQueryServerConfiguration

@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long mergeStrategy;
@property (copy, nonatomic) NSDateInterval *dateInterval;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
