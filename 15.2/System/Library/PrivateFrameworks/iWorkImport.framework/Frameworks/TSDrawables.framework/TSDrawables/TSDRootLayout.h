@class TSDLayoutController, TSURetainedPointerKeyDictionary;

@interface TSDRootLayout : TSDAbstractLayout <TSDAdaptiveLayout> {
    BOOL _supportsAdaptiveLayout;
    TSURetainedPointerKeyDictionary *_shiftedObjects;
}

@property (readonly, weak, nonatomic) TSDLayoutController *layoutController;

- (void).cxx_destruct;
- (BOOL)isRootLayoutForInspectorGeometry;
- (id)initWithLayoutController:(id)a0;
- (BOOL)providesGuidesForChildLayouts;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (id)p_shiftedObjects;
- (void)beginDynamicAdaptiveLayout;
- (void)endDynamicAdaptiveLayout;
- (struct CGPoint { double x0; double x1; })applyAdaptiveLayoutTo:(id)a0 info:(id)a1 offset:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)isRootLevelForInlineGeometry;
- (id)childLayoutsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 deep:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })adjustMappingPointForInfo:(id)a0 fromPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)isSavedShiftForInfo:(id)a0 equalToOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)updateRootLayoutShiftFor:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (void)resetLayout:(id)a0 forInfo:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clippedRectInRoot:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
