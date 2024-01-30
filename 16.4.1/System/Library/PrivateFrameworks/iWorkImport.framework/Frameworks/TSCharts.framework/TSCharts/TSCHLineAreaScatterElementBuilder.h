@class TSCHElementBuilderCoordinateAdapter, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TSCHLineAreaScatterElementBuilder : TSCHElementBuilder {
    NSMutableDictionary *_pathCache;
    NSObject<OS_dispatch_queue> *_pathCacheQueue;
}

@property (readonly, nonatomic) TSCHElementBuilderCoordinateAdapter *coordinateAdapter;

- (id)init;
- (void).cxx_destruct;
- (BOOL)p_addBottomStroke:(struct { id x0; id x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; } *)a0 toPath:(struct CGPath { } *)a1 seriesIndex:(unsigned long long)a2 withPointsArray:(struct { struct CGPoint { double x0; double x1; } x0; double x1; BOOL x2; unsigned long long x3; } *)a3 withCount:(unsigned long long)a4;
- (struct { struct CGPoint { double x0; double x1; } x0; double x1; BOOL x2; unsigned long long x3; } *)p_createPointArrayForSeries:(id)a0 inAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 groupIndexSet:(id)a2 outCount:(unsigned long long *)a3;
- (unsigned long long)countOfElementsInSeries:(id)a0 forGroups:(id)a1 forBodyLayout:(id)a2 outNewElementBounds:(struct CGRect **)a3 outNewClipRects:(struct CGRect **)a4 outNewElementPaths:(const struct CGPath ***)a5 outSelectionKnobLocations:(id *)a6 forHighlightPath:(BOOL)a7;
- (unsigned long long)countOfErrorBarsInSeries:(id)a0 forGroups:(id)a1 forAxisID:(id)a2 forBodyLayout:(id)a3 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 outNewErrorBarDescriptors:(struct **)a5;
- (unsigned long long)countOfHitCheckRegionsInSeries:(id)a0 forGroups:(id)a1 forBodyLayout:(id)a2 outNewElementPaths:(const struct CGPath ***)a3 outSelectionKnobLocations:(id *)a4;
- (unsigned long long)countOfLabelsForSeries:(id)a0 forGroups:(id)a1 forBodyLayout:(id)a2 outNewTransforms:(struct CGAffineTransform **)a3 outNewElementSizes:(struct CGSize **)a4 outNewClipRect:(struct CGRect **)a5 outNewStrings:(id *)a6;
- (unsigned long long)countOfPointsForSeries:(id)a0 forGroups:(id)a1 forBodyLayout:(id)a2 outElementSize:(struct CGSize { double x0; double x1; } *)a3 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 outUnitSymbolPath:(const struct CGPath **)a5 outNewTransformArray:(struct CGAffineTransform **)a6 outNewGroupIndexArray:(unsigned long long **)a7;
- (float)dataPointDimension:(id)a0 symbolType:(int)a1 stroke:(id)a2;
- (long long)hitCheckPoint:(struct CGPoint { double x0; double x1; })a0 inSeries:(id)a1 withBodyLayout:(id)a2;
- (struct CGPoint { double x0; double x1; })labelPointForPosition:(unsigned int)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 stringSize:(struct CGSize { double x0; double x1; })a2 symbolType:(int)a3;
- (BOOL)needsSeparateHitTestingPaths;
- (void)p_addCurvedTopStroke:(struct { id x0; id x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; } *)a0 toPath:(struct CGPath { } *)a1 withPointsArray:(struct { struct CGPoint { double x0; double x1; } x0; double x1; BOOL x2; unsigned long long x3; } *)a2 withCount:(unsigned long long)a3;
- (void)p_addKnobsForPoint:(struct CGPoint { double x0; double x1; })a0 strokedUnitSymbolRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toKnobSet:(id)a2 symbolsShowing:(BOOL)a3 includePoint:(BOOL)a4;
- (void)p_addStraightTopStroke:(struct { id x0; id x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; } *)a0 toPath:(struct CGPath { } *)a1 withPointsArray:(struct { struct CGPoint { double x0; double x1; } x0; double x1; BOOL x2; unsigned long long x3; } *)a2 withCount:(unsigned long long)a3;
- (void)p_addTopStroke:(struct { id x0; id x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; } *)a0 toPath:(struct CGPath { } *)a1 withPointsArray:(struct { struct CGPoint { double x0; double x1; } x0; double x1; BOOL x2; unsigned long long x3; } *)a2 withCount:(unsigned long long)a3 lineType:(int)a4;
- (double)p_bubbleMaxForSeries:(id)a0 inChartBodyLayoutSize:(struct CGSize { double x0; double x1; })a1;
- (id)p_calculateSelectionKnobSet:(id)a0 bodyLayoutItem:(id)a1 series:(id)a2 pointsArray:(struct { struct CGPoint { double x0; double x1; } x0; double x1; BOOL x2; unsigned long long x3; } *)a3 withCount:(unsigned long long)a4;
- (struct { struct CGPoint { double x0; double x1; } x0; BOOL x1; } *)p_centerPointsForSeries:(id)a0 groupIndexSet:(id)a1 nullsUseIntercept:(BOOL)a2 plotAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)p_createElementsForSeries:(id)a0 forGroups:(id)a1 inBodyLayout:(id)a2 outTopStrokePath:(const struct CGPath **)a3 outTopStrokeClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 outSeriesElementPath:(const struct CGPath **)a5 outSeriesElementClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a6 outSymbolElementPath:(const struct CGPath **)a7 outSymbolElementClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a8 outSymbolElementHitCheckPath:(const struct CGPath **)a9 outSelectionKnobLocations:(id *)a10;
- (struct { struct CGPoint { double x0; double x1; } x0; double x1; BOOL x2; unsigned long long x3; } *)p_createPointArrayForSeries:(id)a0 inAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 groupIndexSet:(id)a2 cullBadPoints:(BOOL)a3 outCount:(unsigned long long *)a4;
- (void)p_cullLastValidPointIfEqualToFirstValidPointInArray:(struct { struct CGPoint { double x0; double x1; } x0; double x1; BOOL x2; unsigned long long x3; } *)a0 pointsArrayCount:(unsigned long long *)a1;
- (long long)p_hitCheckPoint:(struct CGPoint { double x0; double x1; })a0 inSeries:(id)a1 withSeriesElementPath:(struct CGPath { } *)a2;
- (BOOL)p_hitCheckPoint:(struct CGPoint { double x0; double x1; })a0 inSymbolsOfSeries:(id)a1 withBodyLayout:(id)a2;
- (long long)p_hitCheckPointByDistance:(struct CGPoint { double x0; double x1; })a0 inSeries:(id)a1 withSeriesElementPath:(struct CGPath { } *)a2;
- (struct CGPath { } *)p_newCirclePath:(struct CGPoint { double x0; double x1; })a0 width:(double)a1 pathLocation:(long long)a2 stroke:(id)a3;
- (struct CGPath { } *)p_newCrossPath:(struct CGPoint { double x0; double x1; })a0 width:(double)a1 pathLocation:(long long)a2 stroke:(id)a3;
- (struct CGPath { } *)p_newDiamondPath:(struct CGPoint { double x0; double x1; })a0 width:(double)a1 pathLocation:(long long)a2 stroke:(id)a3;
- (struct CGPath { } *)p_newPathForSymbol:(int)a0 context:(struct CGContext { } *)a1 at:(struct CGPoint { double x0; double x1; })a2 width:(double)a3 pathLocation:(long long)a4 stroke:(id)a5;
- (struct CGPath { } *)p_newPlusPath:(struct CGPoint { double x0; double x1; })a0 width:(double)a1 pathLocation:(long long)a2 stroke:(id)a3 context:(struct CGContext { } *)a4;
- (struct CGPath { } *)p_newSquarePath:(struct CGPoint { double x0; double x1; })a0 width:(double)a1 pathLocation:(long long)a2 stroke:(id)a3 context:(struct CGContext { } *)a4;
- (struct CGPath { } *)p_newTrianglePath:(struct CGPoint { double x0; double x1; })a0 width:(double)a1 pathLocation:(long long)a2 stroke:(id)a3;
- (struct CGPath { } *)p_newUnitPathForSymbol:(int)a0 symbolSize:(double)a1 stroke:(id)a2 forHitCheck:(BOOL)a3;
- (struct CGPath { } *)p_newYieldPath:(struct CGPoint { double x0; double x1; })a0 width:(double)a1 pathLocation:(long long)a2 stroke:(id)a3;
- (BOOL)p_shouldAddSelectionKnobWithPoint:(struct CGPoint { double x0; double x1; })a0 previousPoint:(struct CGPoint { double x0; double x1; })a1 minimumDistanceSquared:(double)a2 selectionKnobRadius:(double)a3;
- (id)p_symbolKnobLocationsForSeries:(id)a0 forGroups:(id)a1 inBodyLayout:(id)a2;
- (BOOL)p_topStrokeShouldBeClosed;
- (void)p_trendlineInfoForSeries:(id)a0 forBodyLayout:(id)a1 outVertical:(BOOL *)a2 outOffsetInBody:(double *)a3;
- (id)p_uncachedUnitPathForSymbol:(int)a0 symbolSize:(double)a1 stroke:(id)a2 forHitCheck:(BOOL)a3;
- (BOOL)symbolTypeIsClosed:(int)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingLabelInBody:(id)a0 forSeries:(unsigned long long)a1 forGroup:(unsigned long long)a2 outElementSize:(struct CGSize { double x0; double x1; } *)a3 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingSeriesElementForSeries:(id)a0 forGroups:(id)a1 forBodyLayout:(id)a2 outElementSize:(struct CGSize { double x0; double x1; } *)a3 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 outNewElementPath:(const struct CGPath **)a5;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingSeriesElementSymbolsForSeries:(id)a0 forGroups:(id)a1 forBodyLayout:(id)a2 outElementSize:(struct CGSize { double x0; double x1; } *)a3 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 outNewElementPath:(const struct CGPath **)a5;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingSeriesElementTopStrokeForSeries:(id)a0 forGroups:(id)a1 forBodyLayout:(id)a2 outElementSize:(struct CGSize { double x0; double x1; } *)a3 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 outNewElementPath:(const struct CGPath **)a5;

@end
