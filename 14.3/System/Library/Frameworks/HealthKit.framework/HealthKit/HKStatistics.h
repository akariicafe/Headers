@class HKQuantity, NSArray, NSDateInterval, NSDictionary, NSDate, HKObjectType, HKQuantityType;

@interface HKStatistics : NSObject <NSSecureCoding, NSCopying> {
    HKObjectType *_dataType;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_sources;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long dataCount;
@property (copy, nonatomic) HKQuantity *averageQuantity;
@property (copy, nonatomic) HKQuantity *minimumQuantity;
@property (copy, nonatomic) HKQuantity *maximumQuantity;
@property (copy, nonatomic) HKQuantity *mostRecentQuantity;
@property (copy, nonatomic) NSDateInterval *mostRecentQuantityDateInterval;
@property (copy, nonatomic) HKQuantity *duration;
@property (copy, nonatomic) NSDictionary *averageQuantityBySource;
@property (copy, nonatomic) NSDictionary *minimumQuantityBySource;
@property (copy, nonatomic) NSDictionary *maximumQuantityBySource;
@property (copy, nonatomic) NSDictionary *mostRecentQuantityBySource;
@property (copy, nonatomic) NSDictionary *mostRecentQuantityDateIntervalBySource;
@property (copy, nonatomic) NSDictionary *dataCountBySource;
@property (copy, nonatomic) NSDictionary *durationBySource;
@property (copy, nonatomic) HKQuantity *sumQuantity;
@property (copy, nonatomic) NSDictionary *sumQuantityBySource;
@property (copy, nonatomic) NSDictionary *sumQuantityBySourceID;
@property (readonly) HKQuantityType *quantityType;
@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly) NSArray *sources;

+ (void)_validateOptions:(unsigned long long)a0 forDataType:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)_initAsCopyOf:(id)a0;
- (id)description;
- (id)averageQuantityForSource:(id)a0;
- (id)sumQuantityForSource:(id)a0;
- (id)minimumQuantityForSource:(id)a0;
- (id)maximumQuantityForSource:(id)a0;
- (id)mostRecentQuantityForSource:(id)a0;
- (id)durationForSource:(id)a0;
- (void)_setSources:(id)a0;
- (id)mostRecentQuantityDateIntervalForSource:(id)a0;
- (id)_copyOverwritingObjectType:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithDataType:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (void)_setStartDate:(id)a0;
- (void)_setEndDate:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
