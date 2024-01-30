@interface SBHomeGestureToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    BOOL _showingOrAnimatingCardsForFlyIn;
}

- (unsigned long long)transactionCompletionOptions;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)visibleAppLayouts;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (long long)homeScreenBackdropBlurType;
- (long long)wallpaperStyle;
- (id)initWithTransitionID:(id)a0 showingOrAnimatingCardsForFlyIn:(BOOL)a1;

@end
