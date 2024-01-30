@class NSDate, NSString, NSArray, NSDateInterval, NSDictionary, HKObjectType, HKQuantity, HKQuantityType;

@interface HKStatistics : NSObject <_HKDateBounded, HKSampleAggregateCacheProviding, NSSecureCoding, NSCopying> {
    HKObjectType *_dataType;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_sources;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long dataCount;
@property (copy, nonatomic) HKQuantity *averageQuantity;
@property (copy, nonatomic) HKQuantity *minimumQuantity;
@property (copy, nonatomic) HKQuantity *maximumQuantity;
@property (copy, nonatomic) HKQuantity *mostRecentQuantity;
@property (copy, nonatomic) NSDateInterval *mostRecentQuantityDateInterval;
@property (copy, nonatomic) HKQuantity *duration;
@property (copy, nonatomic) HKQuantity *percentileQuantity;
@property (copy, nonatomic) NSDictionary *averageQuantityBySource;
@property (copy, nonatomic) NSDictionary *minimumQuantityBySource;
@property (copy, nonatomic) NSDictionary *maximumQuantityBySource;
@property (copy, nonatomic) NSDictionary *mostRecentQuantityBySource;
@property (copy, nonatomic) NSDictionary *mostRecentQuantityDateIntervalBySource;
@property (copy, nonatomic) NSDictionary *dataCountBySource;
@property (copy, nonatomic) NSDictionary *durationBySource;
@property (copy, nonatomic) NSDictionary *percentileQuantityBySource;
@property (copy, nonatomic) HKQuantity *sumQuantity;
@property (copy, nonatomic) NSDictionary *sumQuantityBySource;
@property (copy, nonatomic) NSDictionary *sumQuantityBySourceID;
@property (readonly) HKQuantityType *quantityType;
@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly) NSArray *sources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_validateOptions:(unsigned long long)a0 forDataType:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void)_setStartDate:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)_initAsCopyOf:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDataType:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (BOOL)getData:(id *)a0 error:(id *)a1;
- (long long)bucketIndexForIntervalComponents:(id)a0 anchorDate:(id)a1;
- (id)_initWithDataType:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)averageQuantityForSource:(id)a0;
- (void)_setSources:(id)a0;
- (id)minimumQuantityForSource:(id)a0;
- (id)maximumQuantityForSource:(id)a0;
- (id)mostRecentQuantityForSource:(id)a0;
- (id)mostRecentQuantityDateIntervalForSource:(id)a0;
- (id)sumQuantityForSource:(id)a0;
- (id)durationForSource:(id)a0;
- (void)_setEndDate:(id)a0;

@end
