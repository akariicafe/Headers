@class NSIndexSet, NSString, NSDate, NSNumber;

@interface FIUIChartPointMultiple : NSObject <FIUIChartPoint>

@property (copy, nonatomic) NSIndexSet *yValue;
@property (copy, nonatomic) NSDate *xValue;
@property (readonly, nonatomic) NSNumber *minYValue;
@property (readonly, nonatomic) NSNumber *maxYValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)chartPointWithDate:(id)a0 valueIndexSet:(id)a1;
+ (id)chartPointWithXValue:(id)a0 yValue:(id)a1;

- (void).cxx_destruct;

@end
