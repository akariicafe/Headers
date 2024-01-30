@class HKCategoryType, HKSampleType, NSString, NSDate, HKQuantityType;

@interface WFHKContentQueryData : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) HKQuantityType *quantityType;
@property (retain, nonatomic) HKCategoryType *categoryType;
@property (readonly, nonatomic) HKSampleType *sampleType;
@property (retain, nonatomic) NSString *sourceName;

- (void).cxx_destruct;

@end
