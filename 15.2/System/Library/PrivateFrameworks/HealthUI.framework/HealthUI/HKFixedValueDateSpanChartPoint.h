@class HKQuantity, NSString, HKUnit, NSDate;

@interface HKFixedValueDateSpanChartPoint : NSObject <HKChartPoint>

@property (readonly, nonatomic) NSDate *xStart;
@property (readonly, nonatomic) NSDate *xEnd;
@property (readonly, nonatomic) HKQuantity *averageValue;
@property (readonly, nonatomic) NSString *localizableTrendDescription;
@property (readonly, nonatomic) long long attributeIndex;
@property (retain, nonatomic) HKUnit *preferredUnit;
@property (readonly, copy, nonatomic) id /* block */ fixedValueScalingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userInfo;
- (id)yValue;
- (id)maxYValue;
- (id)minYValue;
- (void).cxx_destruct;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)a0;
- (id)allYValues;
- (id)initWithTrendSpan:(id)a0 attributeIndex:(long long)a1 localizableTrendDescription:(id)a2 fixedValueScalingBlock:(id /* block */)a3;
- (id)_buildSinglePointData;

@end
