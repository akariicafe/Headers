@class NSString, NSNumber, NSDate;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKHealthChartPoint : NSObject <HKChartPoint> {
    NSDate *_date;
    NSNumber *_sum;
    NSNumber *_min;
    NSNumber *_max;
    NSNumber *_avg;
    NSNumber *_mostRecent;
}

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
- (id)initWithStatistics:(id)a0 options:(unsigned long long)a1 unit:(id)a2 displayType:(id)a3 sourceTimeZone:(id)a4;
- (id)initWithDataSourceValue:(id)a0 options:(unsigned long long)a1 unit:(id)a2 displayType:(id)a3;

@end
