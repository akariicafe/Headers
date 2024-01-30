@class NSLayoutConstraint;

@interface _UIKeyboardLayoutAlignmentView : UIView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastKnownKeyboardRect;
    NSLayoutConstraint *bottomConstraint;
    NSLayoutConstraint *widthConstraint;
    NSLayoutConstraint *heightConstraint;
    NSLayoutConstraint *disambiguatingLeftConstraint;
}

@property (nonatomic) BOOL automaticKeyboardFrameTrackingDisabled;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_endFrameForNotification:(id)a0 inView:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameInBoundsForKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
+ (BOOL)_shouldIgnoreFrameChangeNotification:(id)a0 inView:(id)a1;

- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)_stopObservingKeyboardNotifications;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameInBoundsForKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_createConstraints;
- (void)_keyboardChanged:(id)a0;
- (void)_matchInitialKeyboardFrame;
- (void)_removeConstraints;
- (BOOL)_shouldOverrideAnimationForFrameChangeNotification:(id)a0;
- (void)_startObservingKeyboardNotificationsForScreen:(id)a0;
- (void)_updateConstraintsForKeyboardNotification:(id)a0;
- (void)_updateConstraintsToMatchKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
