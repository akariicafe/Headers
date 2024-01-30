@class SBAppExposeGridSwitcherModifier;

@interface SBRouteToAppExposeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppExposeGridSwitcherModifier *_appExposeModifier;
    BOOL _isTransitioningOutOfAppExpose;
}

@property (nonatomic) BOOL reversesFloatingCardDirection;

- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (id)handleMainTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (double)contentPageViewScaleForAppLayout:(id)a0;
- (double)snapshotScaleForAppLayout:(id)a0;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (struct CGPoint { double x0; double x1; })contentOffsetForIndex:(unsigned long long)a0 centered:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })restingOffsetForScrollOffset:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (id)scrollViewAttributes;
- (long long)plusButtonStyle;
- (id)initWithTransitionID:(id)a0 appExposeModifier:(id)a1;

@end
