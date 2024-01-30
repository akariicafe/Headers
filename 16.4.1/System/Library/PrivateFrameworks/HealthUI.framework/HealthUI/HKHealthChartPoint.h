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

- (void).cxx_destruct;
- (id)yValue;
- (id)allYValues;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id)xValueAsGenericType;
- (id)yValueForKey:(id)a0;
- (id)initWithStatistics:(id)a0 options:(unsigned long long)a1 unit:(id)a2 displayType:(id)a3 sourceTimeZone:(id)a4;
- (id)initWithDataSourceValue:(id)a0 options:(unsigned long long)a1 unit:(id)a2 displayType:(id)a3;

@end
