@class TSDLayoutController, TSUPointerKeyDictionary;

@interface TSDRootLayout : TSDAbstractLayout <TSDAdaptiveLayout> {
    TSDLayoutController *mLayoutController;
    BOOL mSupportsAdaptiveLayout;
    TSUPointerKeyDictionary *mShiftedObjects;
}

- (void)dealloc;
- (id)layoutController;
- (BOOL)isRootLayoutForInspectorGeometry;
- (id)initWithLayoutController:(id)a0;
- (id)childLayoutsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)providesGuidesForChildLayouts;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (id)p_shiftedObjects;
- (void)beginDynamicAdaptiveLayout;
- (void)endDynamicAdaptiveLayout;
- (struct CGPoint { double x0; double x1; })applyAdaptiveLayoutTo:(id)a0 info:(id)a1 offset:(struct CGPoint { double x0; double x1; })a2;

@end
