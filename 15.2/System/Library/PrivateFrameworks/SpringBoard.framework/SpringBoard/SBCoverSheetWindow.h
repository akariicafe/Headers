@interface SBCoverSheetWindow : SBSecureWindow

+ (BOOL)sb_autorotates;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;

@end
