@interface CAMZoomPoint : NSObject

@property (readonly, nonatomic) CAMZoomPoint *baseZoomPoint;
@property (readonly, nonatomic) double zoomFactor;
@property (readonly, nonatomic) double displayZoomFactor;

+ (id)significantIndexesInZoomPoints:(id)a0;
+ (id)zoomPointsWithFactors:(id)a0 displayZoomFactors:(id)a1;
+ (id)zoomPointWithFactor:(double)a0 displayed:(double)a1;
+ (id)zoomFactorsFromZoomPoints:(id)a0;
+ (id)displayZoomFactorsFromZoomPoints:(id)a0;

- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToZoomPoint:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
