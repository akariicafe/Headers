@class NSArray, NSIndexSet;

@interface HKStackedBarSeries : HKBarSeries

@property (copy, nonatomic) NSArray *selectedFillStyles;
@property (copy, nonatomic) NSArray *unselectedFillStyles;
@property (copy, nonatomic) NSArray *inactiveFillStyles;
@property (nonatomic) BOOL shouldRoundBottomCorners;
@property (copy, nonatomic) NSIndexSet *unseparatedSegmentIndices;

- (void).cxx_destruct;
- (id)init;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct { long long x0; long long x1; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (void)drawWithBlockCoordinates:(id)a0 visibleBarCount:(long long)a1 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 context:(struct CGContext { } *)a3 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)_drawLevels:(id)a0 withFillStyles:(id)a1 strokeStyle:(id)a2 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 context:(struct CGContext { } *)a4;
- (void)_strokeSeparatorIfNecessaryAboveSegment:(id)a0 belowSegment:(id)a1 strokeStyle:(id)a2 context:(struct CGContext { } *)a3;

@end
