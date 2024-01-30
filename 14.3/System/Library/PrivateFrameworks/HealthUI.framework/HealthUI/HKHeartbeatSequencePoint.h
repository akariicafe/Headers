@class NSNumber, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKHeartbeatSequencePoint : NSObject <HKChartPoint>

@property (readonly, nonatomic) NSNumber *xValue;
@property (readonly, nonatomic) NSNumber *yValue;
@property (readonly, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo;
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
- (id)initWithTimeInterval:(double)a0 beatsPerMinute:(double)a1;

@end
