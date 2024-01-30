@class AFVoiceInfo, NSString, VTUIStyle, VTUIVoiceSelectionOptionsView, NSLayoutConstraint, UIBarButtonItem, SUICVoiceSelectionPresenter;
@protocol VTUIVoiceSelectionViewControllerDelegate, VTUIVoiceSelectionContaining;

@interface VTUIVoiceSelectionViewController : UIViewController <SUICVoiceSelectionPresenterDelegate> {
    SUICVoiceSelectionPresenter *_voiceSelectionPresenter;
    VTUIVoiceSelectionOptionsView *_voiceOptionsView;
    NSLayoutConstraint *_voiceOptionsViewHeightConstraint;
    VTUIStyle *_style;
    id<VTUIVoiceSelectionContaining> _voiceSelectionContainer;
    AFVoiceInfo *_currentVoiceSelection;
    BOOL _allowsRandomSelection;
    UIBarButtonItem *_continueBarButton;
    BOOL shouldReportSelectionOnRandomVoicePlayBackCompletion;
}

@property (readonly, weak, nonatomic) id<VTUIVoiceSelectionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)_setupButtons;
- (void).cxx_destruct;
- (id)continueButton;
- (void)presenter:(id)a0 didChangeVoiceSelection:(id)a1;
- (void)presenter:(id)a0 didChangeAudioOutputPowerLevel:(float)a1;
- (id)initWithRecognitionLanguage:(id)a0 allowsRandomSelection:(BOOL)a1 barButtonItemForContinue:(id)a2 customVoicePreviewer:(id)a3 delegate:(id)a4;
- (void)updateContainerConstraintsForOrientationChangeToSize:(struct CGSize { double x0; double x1; })a0;
- (id)initCompactWithRecognitionLanguage:(id)a0 allowsRandomSelection:(BOOL)a1 customVoicePreviewer:(id)a2 delegate:(id)a3;
- (void)setShouldHideCompactBackgroundCardView:(BOOL)a0;
- (void)_setupWithTitle:(id)a0 detailText:(id)a1 allowsRandomSelection:(BOOL)a2 compact:(BOOL)a3 forSelectionStyle:(long long)a4;
- (void)_setupContentForRecognitionLanguage:(id)a0 dataManager:(id)a1 customVoicePreviewer:(id)a2;
- (id)initWithRecognitionLanguage:(id)a0 allowsRandomSelection:(BOOL)a1 barButtonItemForContinue:(id)a2 dataManager:(id)a3 customVoicePreviewer:(id)a4 delegate:(id)a5;
- (id)_initWithTitle:(id)a0 detailText:(id)a1 recognitionLanguage:(id)a2 compact:(BOOL)a3 allowsRandomSelection:(BOOL)a4 forSelectionStyle:(long long)a5 barButtonItemForContinue:(id)a6 dataManager:(id)a7 customVoicePreviewer:(id)a8 delegate:(id)a9;
- (id)initCompactWithRecognitionLanguage:(id)a0 allowsRandomSelection:(BOOL)a1 dataManager:(id)a2 customVoicePreviewer:(id)a3 delegate:(id)a4;
- (id)chooseForMeButton;
- (void)_chooseForMeButtonClicked;
- (void)_dismissButtonClicked;
- (void)_continueButtonClicked;
- (void)_informDelegateVoiceWasSelected:(id)a0 randomlySelected:(BOOL)a1;
- (id)initCompactWithRecognitionLanguage:(id)a0 allowsRandomSelection:(BOOL)a1 dataManager:(id)a2 customVoicePreviewer:(id)a3 forSelectionStyle:(long long)a4 delegate:(id)a5;

@end
