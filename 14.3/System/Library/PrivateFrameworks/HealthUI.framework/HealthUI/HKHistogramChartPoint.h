@class NSNumber, NSString;

@interface HKHistogramChartPoint : NSObject <HKChartPoint>

@property (readonly, nonatomic) NSNumber *xValue;
@property (readonly, nonatomic) NSNumber *yValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userInfo;
- (id)minYValue;
- (void).cxx_destruct;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)allYValues;
- (id)maxYValue;
- (id)yValueForKey:(id)a0;
- (id)initWithXValue:(id)a0 yValue:(id)a1;

@end
