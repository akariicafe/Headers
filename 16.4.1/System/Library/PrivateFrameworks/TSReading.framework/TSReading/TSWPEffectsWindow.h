@class UITextView;

@interface TSWPEffectsWindow : UIWindow {
    BOOL _readyToGo;
    unsigned int _activeEffectsCount;
    UITextView *_dummyToReclaimFirstResponder;
}

+ (id)sharedEffectsWindowAboveStatusBar;
+ (id)sharedEffectsWindowAboveStatusBarForView:(id)a0;

- (void)willRemoveSubview:(id)a0;
- (void)didAddSubview:(id)a0;
- (BOOL)_canAffectStatusBarAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)pDidChangeStatusBarOrientation:(id)a0;
- (void)p_updateForOrientation:(long long)a0;

@end
