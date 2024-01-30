@class NSNumber, NSString, NSDate;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKHorizontalSingleLineChartPoint : NSObject <HKChartPoint>

@property (retain, nonatomic) NSDate *xValue;
@property (retain, nonatomic) NSNumber *yValue;
@property (nonatomic) BOOL groupToPrevious;
@property (nonatomic) long long markStyle;
@property (retain, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)minYValue;
- (void).cxx_destruct;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)allYValues;
- (id)maxYValue;
- (id)yValueForKey:(id)a0;

@end
