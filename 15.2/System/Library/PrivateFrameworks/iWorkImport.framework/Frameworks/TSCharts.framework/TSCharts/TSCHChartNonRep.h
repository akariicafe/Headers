@class TSCHChartLayout, NSString, TSCHChartInfo, NSArray;

@interface TSCHChartNonRep : NSObject <TSCHSupportsRendering> {
    NSArray *_renderers;
}

@property (retain, nonatomic) TSCHChartInfo *chartInfo;
@property (retain, nonatomic) TSCHChartLayout *chartLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)geometry;
- (id)renderers;
- (void).cxx_destruct;
- (BOOL)shadowsEnabled;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertUnscaledToBoundsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)viewScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertNaturalRectToLayerRelative:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupForDrawingInLayer:(id)a0 context:(struct CGContext { } *)a1;
- (void)didDrawInLayer:(id)a0 context:(struct CGContext { } *)a1;
- (BOOL)isDrawingIntoPDF;
- (id)commandController;
- (id)initWithChartInfo:(id)a0;
- (BOOL)renderGrid;
- (BOOL)forceRenderBlankBackground;
- (BOOL)renderElementsShadowOnly;
- (BOOL)renderElementsWithoutShadows;
- (id)renderSeriesIndexSet;
- (id)renderGroupIndexSetForSeriesIndex:(unsigned long long)a0;
- (BOOL)is2DRepFor3DChartRep;
- (BOOL)renderElements;
- (BOOL)renderLabels;
- (BOOL)requireSeparateLabelLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })outerShadowFrame;
- (void)clearRenderers;
- (BOOL)renderTrendLinesForSeriesIndex:(unsigned long long)a0;
- (BOOL)renderReferenceLines;
- (BOOL)shouldShowLegendHighlight;

@end
