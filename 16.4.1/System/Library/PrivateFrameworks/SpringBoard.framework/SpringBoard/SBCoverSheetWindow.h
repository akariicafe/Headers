@interface SBCoverSheetWindow : SBSecureWindow

+ (BOOL)sb_autorotates;

- (BOOL)becomeFirstResponder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)resignFirstResponder;
- (BOOL)_canBecomeKeyWindow;

@end
