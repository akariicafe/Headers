@class NSLayoutConstraint;

@interface _UIKeyboardLayoutAlignmentView : UIView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastKnownKeyboardRect;
    NSLayoutConstraint *bottomConstraint;
    NSLayoutConstraint *widthConstraint;
    NSLayoutConstraint *heightConstraint;
    NSLayoutConstraint *disambiguatingLeftConstraint;
}

@property (nonatomic) BOOL automaticKeyboardFrameTrackingDisabled;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameInBoundsForKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_endFrameForNotification:(id)a0 inView:(id)a1;
+ (BOOL)_shouldIgnoreFrameChangeNotification:(id)a0 inView:(id)a1;

- (void)_createConstraints;
- (BOOL)_shouldOverrideAnimationForFrameChangeNotification:(id)a0;
- (void)_stopObservingKeyboardNotifications;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_keyboardChanged:(id)a0;
- (void).cxx_destruct;
- (void)_removeConstraints;
- (void)_startObservingKeyboardNotificationsForScreen:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (void)_matchInitialKeyboardFrame;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameInBoundsForKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateConstraintsForKeyboardNotification:(id)a0;
- (void)didMoveToWindow;
- (void)_updateConstraintsToMatchKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
