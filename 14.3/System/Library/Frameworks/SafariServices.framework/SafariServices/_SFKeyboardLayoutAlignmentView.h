@class NSNotification, NSLayoutConstraint;

@interface _SFKeyboardLayoutAlignmentView : UIView {
    NSNotification *_keyboardChangeNotificationForUpdateConstraints;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastKnownKeyboardRect;
    NSLayoutConstraint *bottomConstraint;
    NSLayoutConstraint *widthConstraint;
    NSLayoutConstraint *heightConstraint;
    NSLayoutConstraint *disambiguatingLeftConstraint;
}

@property (nonatomic) BOOL automaticKeyboardFrameTrackingDisabled;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameInBoundsForKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_removeConstraints;
- (void)_stopObservingKeyboardNotifications;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)_addConstraints;
- (void)didMoveToWindow;
- (void)_keyboardChanged:(id)a0;
- (void)_updateConstraintsToMatchKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_startObservingKeyboardNotificationsForScreen:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_matchInitialKeyboardFrame;
- (void)_updateConstraintsForKeyboardNotification:(id)a0;

@end
