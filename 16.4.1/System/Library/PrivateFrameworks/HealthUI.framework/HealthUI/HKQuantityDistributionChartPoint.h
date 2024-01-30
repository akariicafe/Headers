@class NSArray, NSString, NSDate, NSNumber;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKQuantityDistributionChartPoint : NSObject <HKChartPoint>

@property (readonly, nonatomic) NSDate *bucketDate;
@property (readonly, nonatomic) NSNumber *minimumY;
@property (readonly, nonatomic) NSNumber *maximumY;
@property (readonly, nonatomic) double minimumBucketValue;
@property (readonly, nonatomic) double bucketIncrement;
@property (readonly, nonatomic) NSArray *bucketCounts;
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
- (id)_quickDate:(id)a0;
- (id)initWithHistogramData:(id)a0 bucketDate:(id)a1 bucketIncrement:(double)a2 unit:(id)a3 displayType:(id)a4;
- (id)initWithHistogramData:(id)a0 bucketIncrement:(double)a1 unit:(id)a2 displayType:(id)a3;
- (id)initWithHistogramData:(id)a0 unit:(id)a1 displayType:(id)a2;

@end
