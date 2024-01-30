@class SBAppExposeGridSwitcherModifier;

@interface SBRouteToAppExposeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppExposeGridSwitcherModifier *_appExposeModifier;
    BOOL _isTransitioningOutOfAppExpose;
}

@property (nonatomic) BOOL reversesFloatingCardDirection;

- (struct CGPoint { double x0; double x1; })restingOffsetForScrollOffset:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (double)contentPageViewScaleForAppLayout:(id)a0;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (long long)plusButtonStyle;
- (id)handleTransitionEvent:(id)a0;
- (id)scrollViewAttributes;
- (void).cxx_destruct;
- (double)snapshotScaleForAppLayout:(id)a0;
- (struct CGPoint { double x0; double x1; })contentOffsetForIndex:(unsigned long long)a0 alignment:(long long)a1;
- (id)initWithTransitionID:(id)a0 appExposeModifier:(id)a1;

@end
