@class NSArray, NSString, NSDate;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKEnumeratedValueChartPoint : NSObject <HKChartPoint>

@property (retain, nonatomic) NSArray *indices;
@property (copy, nonatomic) NSDate *xValue;
@property (retain, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)yValue;
- (id)maxYValue;
- (id)minYValue;
- (void).cxx_destruct;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)a0;
- (id)allYValues;

@end
