@class NSNumber, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKScalarChartPoint : NSObject <HKChartPoint>

@property (readonly, nonatomic) NSNumber *xValue;
@property (readonly, nonatomic) NSNumber *yValue;
@property (readonly, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> scalarPointInfo;
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
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0 unitForY:(id)a1;

@end
