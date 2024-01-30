@class HKQuantity, NSDateComponents, NSDate, HKQuantityType;

@interface HKQuantityTypeDataSourceValue : NSObject

@property (retain, nonatomic) HKQuantity *sumQuantity;
@property (retain, nonatomic) HKQuantity *minQuantity;
@property (retain, nonatomic) HKQuantity *maxQuantity;
@property (retain, nonatomic) HKQuantity *averageQuantity;
@property (retain, nonatomic) HKQuantity *durationQuantity;
@property (retain, nonatomic) HKQuantity *mostRecentQuantity;
@property (retain, nonatomic) HKQuantityType *quantityType;
@property (nonatomic) long long recordCount;
@property (retain, nonatomic) NSDateComponents *statisticsInterval;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;

+ (id)quantityTypeDataSourceValueWithCodableStatistics:(id)a0 sourceTimeZone:(id)a1;

- (id)maxYValue;
- (id)minYValue;
- (void).cxx_destruct;
- (id)codableStatistics;

@end
