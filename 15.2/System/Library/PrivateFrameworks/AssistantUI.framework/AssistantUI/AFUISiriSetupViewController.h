@class UIView, NSString, OBWelcomeController, AFEnablementFlowConfigurationProvider, AFEnablementConfiguration, VTUITurnOnSiriView, VTUISiriDataSharingOptInPresenter, UIStatusBar;
@protocol AFUISiriSetupViewControllerDelegate;

@interface AFUISiriSetupViewController : UIViewController <VTUITurnOnSiriViewDelegate, VTUISiriDataSharingOptInPresentationDelegate, VTUIVoiceSelectionViewControllerDelegate, UIAdaptivePresentationControllerDelegate> {
    UIView *_contentView;
    NSString *_selectedRecognitionLanguageCode;
    VTUITurnOnSiriView *_setupView;
    VTUISiriDataSharingOptInPresenter *_dataSharingOptInPresenter;
    OBWelcomeController *_dataSharingOptInViewController;
    AFEnablementConfiguration *_enablementConfiguration;
    AFEnablementFlowConfigurationProvider *_enablementConfigurationProvider;
    BOOL _isLoadingEnablementConfiguration;
}

@property (retain, nonatomic, getter=_statusBar, setter=_setStatusBar:) UIStatusBar *statusBar;
@property (weak, nonatomic) id<AFUISiriSetupViewControllerDelegate> delegate;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) BOOL lastTimeShown;
@property (retain, nonatomic) UIView *siriSetupView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldAutorotate;
- (void)siriDataSharingOptInRequestsDismissalFromPresenter:(id)a0;
- (void)siriDataSharingOptInViewControllerDidDismissFromPresenter:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)animatedAppearanceWithFactory:(id)a0 completion:(id /* block */)a1;
- (void)animatedDisappearanceWithFactory:(id)a0 completion:(id /* block */)a1;
- (void)_continueTapped:(id)a0;
- (void)_laterTapped:(id)a0;
- (void)_fetchEnablementConfiguration;
- (void)_setLoadingEnablementConfiguration:(BOOL)a0;
- (void)_continueWithLanguageCode:(id)a0 commitLanguageCodeToPreferences:(BOOL)a1;
- (void)_presentDataSharingOptInViewController;
- (void)aboutSelectedInTurnOnSiriView:(id)a0;
- (void)voiceSelectionController:(id)a0 didSelectVoice:(id)a1;

@end
