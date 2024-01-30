@class NSString, TSCHSelectionPath;

@interface TSCHChartAxisRenderer : TSCHRenderer <TSCHCompositeRendering> {
    TSCHSelectionPath *mAxisTitleSelectionPath;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mStartingEditingFrame;
}

@property (retain, nonatomic) NSString *editingString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)p_renderIntoContext:(struct CGContext { } *)a0 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)axisLayoutItem;
- (BOOL)p_needsSharedTickMarkLayer;
- (BOOL)p_needsPositionBasedTransparencyLayer;
- (id)axisTitleSelectionPath;
- (void)p_addLinePath:(struct CGContext { } *)a0 stroke:(id)a1;
- (void)p_addTickmarkPaths:(struct CGContext { } *)a0 axis:(id)a1 locations:(id)a2 stroke:(id)a3 width:(float)a4;
- (void)p_drawTitle:(struct CGContext { } *)a0 rangePtr:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (BOOL)p_isTitleVisible;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForEditingTextForSelectionPath:(id)a0;
- (BOOL)canEditTextForSelectionPath:(id)a0;
- (id)transparencyLayers;
- (void)drawIntoLayer:(int)a0 inContext:(struct CGContext { } *)a1 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)needsAnySeparateLayers;
- (void)willBeginTransparencyLayer:(int)a0 inContext:(struct CGContext { } *)a1;
- (BOOL)isCompositeRenderer;
- (void)p_debugRenderTickmarkArea:(struct CGContext { } *)a0;
- (BOOL)canRenderSelectionPath:(id)a0;
- (void)renderIntoContext:(struct CGContext { } *)a0 selection:(id)a1;
- (void)addSelection:(id)a0 toCGPath:(struct CGPath { } *)a1 useWrapWidth:(BOOL)a2;
- (void)useEditedString:(id)a0;

@end
