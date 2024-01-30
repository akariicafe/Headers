@class SBAppExposeGridSwitcherModifier;

@interface SBRouteToAppExposeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppExposeGridSwitcherModifier *_appExposeModifier;
    BOOL _isTransitioningOutOfAppExpose;
}

@property (nonatomic) BOOL reversesFloatingCardDirection;

- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (long long)plusButtonStyle;
- (double)contentPageViewScaleForAppLayout:(id)a0 withScale:(double)a1;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (double)snapshotScaleForAppLayout:(id)a0;
- (id)scrollViewAttributes;
- (id)handleTransitionEvent:(id)a0;
- (struct CGPoint { double x0; double x1; })restingOffsetForScrollOffset:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (struct CGPoint { double x0; double x1; })contentOffsetForIndex:(unsigned long long)a0 alignment:(long long)a1;
- (void).cxx_destruct;
- (id)initWithTransitionID:(id)a0 appExposeModifier:(id)a1;

@end
