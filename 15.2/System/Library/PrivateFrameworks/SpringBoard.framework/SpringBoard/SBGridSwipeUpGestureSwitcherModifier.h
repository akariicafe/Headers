@class SBDismissSiriSwitcherModifier;

@interface SBGridSwipeUpGestureSwitcherModifier : SBGestureSwitcherModifier {
    struct CGPoint { double x; double y; } _translation;
    BOOL _isApplyingContentViewScaleToSwitcherViewBounds;
    SBDismissSiriSwitcherModifier *_dismissSiriModifier;
}

- (double)contentViewScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })switcherViewBounds;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)visibleAppLayouts;
- (struct CGPoint { double x0; double x1; })scrollViewContentOffset;
- (void)didMoveToParentModifier:(id)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (void)_applyPrototypeSettings;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (id)handleGestureEvent:(id)a0;
- (id)initWithGestureID:(id)a0;
- (void)_performBlockByApplyContentViewScaleToSwitcherViewBounds:(id /* block */)a0;
- (long long)finalResponseForGestureEvent:(id)a0;

@end
