@class NSString, VTUISiriDataSharingOptInPresenter, OBWelcomeController, UIView, UIStatusBar, VTUITurnOnSiriView;
@protocol AFUISiriSetupViewControllerDelegate;

@interface AFUISiriSetupViewController : UIViewController <VTUITurnOnSiriViewDelegate, VTUISiriDataSharingOptInPresentationDelegate, UIAdaptivePresentationControllerDelegate> {
    UIView *_contentView;
    VTUITurnOnSiriView *_setupView;
    VTUISiriDataSharingOptInPresenter *_dataSharingOptInPresenter;
    OBWelcomeController *_dataSharingOptInViewController;
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

- (id)init;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (BOOL)shouldAutorotate;
- (void)viewWillAppear:(BOOL)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)siriDataSharingOptInRequestsDismissalFromPresenter:(id)a0;
- (void)siriDataSharingOptInViewControllerDidDismissFromPresenter:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)animatedAppearanceWithFactory:(id)a0 completion:(id /* block */)a1;
- (void)animatedDisappearanceWithFactory:(id)a0 completion:(id /* block */)a1;
- (void)_continueTapped:(id)a0;
- (void)_laterTapped:(id)a0;
- (void)_presentDataSharingOptInViewController;
- (void)aboutSelectedInTurnOnSiriView:(id)a0;

@end
