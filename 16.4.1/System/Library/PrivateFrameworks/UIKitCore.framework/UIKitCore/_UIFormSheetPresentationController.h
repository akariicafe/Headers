@interface _UIFormSheetPresentationController : _UISheetPresentationController {
    BOOL _layoutStateShouldAvoidKeyboard;
    double _keyboardYOrigin;
}

+ (long long)_initialMode;

- (void)_keyboardWillShow:(id)a0;
- (BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
- (long long)_defaultPresentationStyleForTraitCollection:(id)a0;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (BOOL)shouldSubscribeToKeyboardNotifications;
- (void)_changeLayoutModeToAvoidKeyboard:(BOOL)a0 withOrigin:(double)a1;
- (void)_keyboardWillHide:(id)a0;
- (void)presentationTransitionWillBegin;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;
- (BOOL)_shouldHideBottomCorner;

@end
