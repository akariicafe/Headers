@interface _UIFormSheetPresentationController : _UISheetPresentationController {
    BOOL _layoutStateShouldAvoidKeyboard;
    double _keyboardYOrigin;
}

+ (long long)_initialMode;

- (BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)_keyboardWillHide:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)_changeLayoutModeToAvoidKeyboard:(BOOL)a0 withOrigin:(double)a1;
- (void)_keyboardWillShow:(id)a0;
- (BOOL)shouldSubscribeToKeyboardNotifications;
- (BOOL)_shouldHideBottomCorner;
- (long long)_defaultPresentationStyleForTraitCollection:(id)a0;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;

@end
