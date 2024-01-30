@class NSNumber, NSString, NSDate;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface WDChartExperimentsChartPoint : NSObject <HKChartPoint>

@property (readonly, nonatomic) NSDate *xValue;
@property (readonly, nonatomic) NSNumber *yValue;
@property (readonly, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> experimentInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userInfo;
- (void).cxx_destruct;
- (id)allYValues;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id)xValueAsGenericType;
- (id)yValueForKey:(id)a0;
- (id)initWithXValue:(id)a0 yValue:(id)a1 userInfo:(id)a2;

@end
