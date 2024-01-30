@class TSCHChartSeries;

@interface TSCHChartPieWedgeElement : NSObject <NSCopying>

@property (nonatomic) struct TSCHChartPieWedgeElementLayoutSystem { long long coordinateSpace; struct CGPoint { double x; double y; } centerPoint; } layoutSystem;
@property (nonatomic) double radius;
@property (nonatomic) double midAngle;
@property (nonatomic) double startAngle;
@property (nonatomic) double endAngle;
@property (nonatomic) double labelExplosion;
@property (nonatomic) double wedgeExplosion;
@property (weak, nonatomic) TSCHChartSeries *series;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } centerPoint;
@property (readonly, nonatomic) double angleAtWedgeTip;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGPoint { double x0; double x1; })pointAtWedgeTipInChartCoordinateSpace;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultLabelRectForLabelWithSize:(struct CGSize { double x0; double x1; })a0 bended:(BOOL)a1;
- (struct TSCHChartPieLabelRects { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })labelRectsForFirstLabelWithSize:(struct CGSize { double x0; double x1; })a0 secondLabelSize:(struct CGSize { double x0; double x1; })a1 stacked:(BOOL)a2 stackedLabelCenterAlign:(BOOL)a3 placeToTheSideOfPieChart:(BOOL)a4;
- (struct CGPoint { double x0; double x1; })normalizedWedgeBisectionVector;
- (struct CGPoint { double x0; double x1; })midpointOnClosestEdgeToWedgeTip:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithRadius:(double)a0 startAngle:(double)a1 midAngle:(double)a2 endAngle:(double)a3 labelExplosion:(double)a4 wedgeExplosion:(double)a5 series:(id)a6;
- (struct CGPoint { double x0; double x1; })pointAlongWedgeBisectionInChartCoordinateSpaceWithFloatDistanceFromWedgeTip:(double)a0;
- (struct CGPoint { double x0; double x1; })defaultLabelCenterPointForLabelWithSize:(struct CGSize { double x0; double x1; })a0 bended:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })pointAtWedgeCircumferenceMiddleInChartCoordinateSpace;
- (BOOL)isInUpperHalfOfChartWithStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })pointAlongWedgeBisectionInChartCoordinateSpaceWithPercentDistanceFromWedgeTip:(double)a0;
- (BOOL)shouldUsePerpendicularBendedLineWithStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })defaultLabelEndpointForBendedLineLabels;
- (struct CGPoint { double x0; double x1; })defaultLabelCenterPoint;
- (BOOL)isOnLeftSideOfChart;
- (struct CGPoint { double x0; double x1; })defaultBendedLineEndpointWithStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })firstHalfOfBendedLineVectorNormalizedShouldBeUpwards:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })defaultBendedLineMidpointWithStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)p_xShiftAmountWithEndpoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })bendedLineMidpointWithStartPoint:(struct CGPoint { double x0; double x1; })a0 length:(double)a1 shouldBeUpwards:(BOOL)a2;
- (BOOL)lineIntersectsWedgeWithLineStartPoint:(struct CGPoint { double x0; double x1; })a0 lineEndPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })arcStartPoint;
- (BOOL)lineIntersectsLineWithStartPoint:(struct CGPoint { double x0; double x1; })a0 firstLineEndPoint:(struct CGPoint { double x0; double x1; })a1 secondLineStartPoint:(struct CGPoint { double x0; double x1; })a2 secondLineEndPoint:(struct CGPoint { double x0; double x1; })a3 outIntersectionPoint:(struct CGPoint { double x0; double x1; } *)a4;
- (struct CGPoint { double x0; double x1; })arcEndPoint;
- (BOOL)angleInRange:(double)a0 startAngle:(double)a1 endAngle:(double)a2;
- (BOOL)pointWithinWedgeSpread:(struct CGPoint { double x0; double x1; })a0 percentage:(double)a1;
- (void)setToLocalCoordinateSpace;
- (void)setToChartCoordinateSpaceWithChartBodyCenterPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)calloutLineIntersectsWedgeWithStartPoint:(struct CGPoint { double x0; double x1; })a0 midPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)pointWithinWedgeSpread:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)wedgeBisectionIntersectsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 outIntersectionPointClosestToWedgeTip:(struct CGPoint { double x0; double x1; } *)a1;

@end
