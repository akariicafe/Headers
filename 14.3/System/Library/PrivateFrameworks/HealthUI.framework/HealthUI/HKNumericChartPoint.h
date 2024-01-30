@class NSString, NSDate;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKNumericChartPoint : NSObject <HKChartPoint> {
    NSDate *_xValue;
    id _yValue;
    id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

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
- (id)yValue;
- (id)yValueForKey:(id)a0;
- (id)initWithXValue:(id)a0 yValue:(id)a1 userInfo:(id)a2;

@end
