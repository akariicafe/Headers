@class NSNumber, NSString, NSDate;

@interface FIUIChartPointNumeric : NSObject <FIUIChartPoint>

@property (copy, nonatomic) NSNumber *yValue;
@property (copy, nonatomic) NSDate *xValue;
@property (readonly, nonatomic) NSNumber *minYValue;
@property (readonly, nonatomic) NSNumber *maxYValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)chartPointWithXValue:(id)a0 yValue:(id)a1;

- (void).cxx_destruct;
- (id)initWithXValue:(id)a0 yValue:(id)a1;

@end
