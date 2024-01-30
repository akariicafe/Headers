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

- (void).cxx_destruct;
- (id)yValue;
- (id)allYValues;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id)xValueAsGenericType;
- (id)yValueForKey:(id)a0;

@end
