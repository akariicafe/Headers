@class TSCHChartModel, NSString, TSCHChartInfo, TSCHChartLayoutItem;
@protocol TSCHSupportsRendering;

@interface TSCHRenderer : NSObject <TSCHSupportsTextEditing> {
    TSCHChartLayoutItem *mChartLayoutItem;
}

@property (readonly, nonatomic) TSCHChartInfo *chartInfo;
@property (readonly, nonatomic) TSCHChartModel *model;
@property (readonly, weak, nonatomic) id<TSCHSupportsRendering> chartRep;
@property (readonly, nonatomic) TSCHChartLayoutItem *layoutItem;
@property (readonly, nonatomic) double viewScale;
@property (readonly, nonatomic) BOOL supportsSeparateLabelsRenderPass;
@property (readonly, nonatomic) BOOL debugLayout;
@property (readonly, nonatomic) struct CGColor { } *debugColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)renderIntoContext:(struct CGContext { } *)a0 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tLayerRectForContext:(struct CGContext { } *)a0;
- (void)p_renderIntoContext:(struct CGContext { } *)a0 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (int)textDrawingFlagForSelectionPath:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForEditingTextForSelectionPath:(id)a0;
- (BOOL)canEditTextForSelectionPath:(id)a0;
- (BOOL)isCompositeRenderer;
- (BOOL)canRenderSelectionPath:(id)a0;
- (void)renderIntoContext:(struct CGContext { } *)a0 selection:(id)a1;
- (void)addSelection:(id)a0 toCGPath:(struct CGPath { } *)a1 useWrapWidth:(BOOL)a2;
- (void)useEditedString:(id)a0;
- (id)initWithChartRep:(id)a0 layoutItem:(id)a1;
- (void)drawErrorBarsInContext:(struct CGContext { } *)a0 chartVertical:(BOOL)a1 elementRenderClass:(Class)a2;
- (void)drawTrendLinesInContext:(struct CGContext { } *)a0 chartVertical:(BOOL)a1 elementRenderClass:(Class)a2;
- (int)chunkPlane;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })chartLayoutSpaceRenderingRect;
- (void)p_debugLayoutInContext:(struct CGContext { } *)a0;
- (void)strokeRectInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 color:(struct CGColor { } *)a2;
- (id)textEditorForSelectionPath:(id)a0 chartEditor:(id)a1;
- (double)frameHeightChangeForPath:(id)a0;

@end
