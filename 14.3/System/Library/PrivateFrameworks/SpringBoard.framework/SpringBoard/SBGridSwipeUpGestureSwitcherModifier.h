@class SBDismissSiriSwitcherModifier;

@interface SBGridSwipeUpGestureSwitcherModifier : SBGestureSwitcherModifier {
    struct CGPoint { double x; double y; } _translation;
    BOOL _isApplyingContentViewScaleToSwitcherViewBounds;
    SBDismissSiriSwitcherModifier *_dismissSiriModifier;
}

- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (long long)homeScreenBackdropBlurType;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (long long)wallpaperStyle;
- (void).cxx_destruct;
- (void)didMoveToParentModifier:(id)a0;
- (void)_applyPrototypeSettings;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })switcherViewBounds;
- (struct CGPoint { double x0; double x1; })scrollViewContentOffset;
- (double)contentViewScale;
- (id)handleGestureEvent:(id)a0;
- (id)initWithGestureID:(id)a0;
- (void)_performBlockByApplyContentViewScaleToSwitcherViewBounds:(id /* block */)a0;
- (long long)finalResponseForGestureEvent:(id)a0;

@end
