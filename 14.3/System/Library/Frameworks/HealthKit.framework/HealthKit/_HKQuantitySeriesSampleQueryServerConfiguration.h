@class NSDate, NSUUID, HKQuantitySample;

@interface _HKQuantitySeriesSampleQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) HKQuantitySample *quantitySample;
@property (nonatomic) long long seriesAnchor;
@property (nonatomic) long long mode;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSDate *maximumStartDate;
@property (copy, nonatomic) NSUUID *latestUUID;
@property (copy, nonatomic) NSDate *latestSampleStartDate;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
