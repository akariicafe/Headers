@class NSLock, NSArray, NSIndexSet;

@interface HKStackedBarSeries : HKBarSeries

@property (readonly, nonatomic) NSLock *seriesMutableStateLock;
@property (copy, nonatomic) NSArray *selectedFillStylesStorage;
@property (copy, nonatomic) NSArray *unselectedFillStylesStorage;
@property (copy, nonatomic) NSArray *inactiveFillStylesStorage;
@property (nonatomic) BOOL shouldRoundBottomCornersStorage;
@property (copy, nonatomic) NSIndexSet *unseparatedSegmentIndicesStorage;
@property (copy, nonatomic) NSArray *selectedFillStyles;
@property (copy, nonatomic) NSArray *unselectedFillStyles;
@property (copy, nonatomic) NSArray *inactiveFillStyles;
@property (nonatomic) BOOL shouldRoundBottomCorners;
@property (copy, nonatomic) NSIndexSet *unseparatedSegmentIndices;

- (id)init;
- (void).cxx_destruct;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct { long long x0; long long x1; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (void)_drawLevels:(id)a0 withFillStyles:(id)a1 strokeStyle:(id)a2 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 context:(struct CGContext { } *)a4;
- (void)_strokeSeparatorIfNecessaryAboveSegment:(id)a0 belowSegment:(id)a1 strokeStyle:(id)a2 context:(struct CGContext { } *)a3;
- (void)drawWithBlockCoordinates:(id)a0 visibleBarCount:(long long)a1 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 context:(struct CGContext { } *)a3 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 seriesRenderingDelegate:(id)a5;

@end
