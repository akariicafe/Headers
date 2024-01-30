@class SBDismissSiriSwitcherModifier;

@interface SBGridSwipeUpGestureSwitcherModifier : SBGestureSwitcherModifier {
    struct CGPoint { double x; double y; } _translation;
    BOOL _isApplyingContentViewScaleToSwitcherViewBounds;
    SBDismissSiriSwitcherModifier *_dismissSiriModifier;
}

@property (readonly, nonatomic) BOOL delayCompletionUntilTransitionBegins;

- (struct CGPoint { double x0; double x1; })scrollViewContentOffset;
- (BOOL)isSwitcherWindowVisible;
- (void)didMoveToParentModifier:(id)a0;
- (double)contentViewScale;
- (long long)wallpaperStyle;
- (void)_applyPrototypeSettings;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isHomeScreenContentRequired;
- (id)handleTransitionEvent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })switcherViewBounds;
- (id)visibleAppLayouts;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (void)_performBlockByApplyContentViewScaleToSwitcherViewBounds:(id /* block */)a0;
- (long long)finalResponseForGestureEvent:(id)a0;
- (id)handleGestureEvent:(id)a0;
- (id)initWithGestureID:(id)a0;
- (id)initWithGestureID:(id)a0 delayCompletionUntilTransitionBegins:(BOOL)a1;

@end
