@interface SBHomeGestureToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    BOOL _showingOrAnimatingCardsForFlyIn;
}

- (double)scaleForIndex:(unsigned long long)a0;
- (unsigned long long)transactionCompletionOptions;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isSwitcherWindowVisible;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (long long)wallpaperStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isHomeScreenContentRequired;
- (id)appLayoutsToCacheSnapshots;
- (id)visibleAppLayouts;
- (long long)homeScreenBackdropBlurType;
- (id)initWithTransitionID:(id)a0 showingOrAnimatingCardsForFlyIn:(BOOL)a1;

@end
