@interface CKEffectPickerLargeTextView : CKEffectPickerView

@property (nonatomic) BOOL finishedInitializing;

- (void)_touchUpInsideDotButton:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_updateBalloonViewOrigin:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateRoundedContainerView;
- (void)activateTextSizeDependentConstraintsForSendButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addEffect:(id)a0 withDescriptiveText:(id)a1 withIdentifier:(id)a2;
- (void)cancelImpactSelection;
- (void)effectTypeDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sendButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 balloonViewOrigin:(struct CGPoint { double x0; double x1; })a2 composition:(id)a3 color:(char)a4;
- (double)marginBetweenPickerDotButtons;
- (double)offsetYForLabelAtIndex:(long long)a0 withInitialY:(double)a1;
- (void)setCloseButtonYPosition:(double)a0;
- (BOOL)shouldAnimatePreviousLabelForCancel:(id)a0;

@end
