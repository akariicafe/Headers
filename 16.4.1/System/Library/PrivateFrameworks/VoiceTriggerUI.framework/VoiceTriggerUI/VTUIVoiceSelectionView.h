@class UIButton, NSString, UIView;

@interface VTUIVoiceSelectionView : VTUIEnrollmentBaseView <VTUIVoiceSelectionContaining> {
    UIView *_footerView;
    BOOL _allowsRandomSelection;
    BOOL _shouldShowContinueButton;
}

@property (retain, nonatomic) UIButton *continueButton;
@property (retain, nonatomic) UIButton *chooseRandomVoiceButton;
@property (retain, nonatomic) UIButton *dismissButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)footerView;
- (void)_setupButtons;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (id)initWithAllowsRandomVoiceSelection:(BOOL)a0 showContinueButton:(BOOL)a1;

@end
