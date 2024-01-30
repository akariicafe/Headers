@class NSArray, NSDictionary, TSCHChartRadialElementsRenderer;

@interface TSCHPieChartRep : TSCHChartRep {
    TSCHChartRadialElementsRenderer *_pieElementRenderer;
    NSArray *_wedgeKnobs;
    NSDictionary *_seriesIndexedPieWedgeDraggingLayers;
    BOOL _hasDrawnSinceWedgeKnobTrackerCreated;
}

- (void).cxx_destruct;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)renderIntoContext:(struct CGContext { } *)a0 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)forceRenderBlankBackground;
- (void)clearRenderers;
- (id)pieElementRenderer;
- (double)dragTravelAlongBisectorBetweenStartPoint:(struct CGPoint { double x0; double x1; })a0 andEndingPoint:(struct CGPoint { double x0; double x1; })a1 forSeries:(unsigned long long)a2;
- (double)p_radius;

@end
