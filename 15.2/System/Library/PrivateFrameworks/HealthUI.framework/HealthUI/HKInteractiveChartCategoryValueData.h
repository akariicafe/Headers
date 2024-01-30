@class NSString, NSDate;

@interface HKInteractiveChartCategoryValueData : NSObject <HKGraphSeriesChartData>

@property (nonatomic) long long value;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
