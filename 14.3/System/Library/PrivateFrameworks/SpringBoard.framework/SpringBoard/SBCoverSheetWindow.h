@interface SBCoverSheetWindow : SBSecureWindow

+ (BOOL)sb_autorotates;

- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)_canBecomeKeyWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
