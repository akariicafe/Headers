@class NSArray, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKDistributionBlockPoint : NSObject <HKGraphSeriesBlockCoordinate>

@property (readonly, nonatomic) struct CGPoint { double x; double y; } minPoint;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } maxPoint;
@property (readonly, nonatomic) NSArray *distributionSegments;
@property (readonly, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly, nonatomic) double startXValue;
@property (readonly, nonatomic) double endXValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;
- (id)_applyTransformToSegments:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (id)_quickDate:(id)a0;
- (id)initWithChartPoint:(id)a0 xAxisTransform:(id)a1 yAxisTransform:(id)a2 gapZeroCount:(long long)a3;
- (id)initWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 blockPoint:(id)a1;

@end
