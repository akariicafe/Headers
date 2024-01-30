@interface CKEffectPickerStandardView : CKEffectPickerView

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_updateBalloonViewOrigin:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateRoundedContainerView;
- (void)activateTextSizeDependentConstraintsForSendButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)marginBetweenPickerDotButtons;
- (double)offsetYForLabelAtIndex:(long long)a0 withInitialY:(double)a1;
- (void)setCloseButtonYPosition:(double)a0;

@end
