@class VTUISiriDataSharingOptInViewController, AFSettingsConnection, NSObject, VTUIProximityDataSharingOptInView;
@protocol OS_dispatch_queue, VTUISiriDataSharingOptInPresentationDelegate;

@interface VTUISiriDataSharingOptInPresenter : NSObject <VTUISiriDataSharingOptInViewControllerDelegate> {
    AFSettingsConnection *_settings;
    NSObject<OS_dispatch_queue> *_settingsQueue;
    long long _dataSharingOptInStatus;
    VTUISiriDataSharingOptInViewController *_currentWelcomeController;
    VTUIProximityDataSharingOptInView *_currentProxView;
}

@property (weak, nonatomic) id<VTUISiriDataSharingOptInPresentationDelegate> presentationDelegate;

+ (BOOL)siriDataSharingOptInViewFeatureFlagEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)_requestDismissal;
- (BOOL)shouldShowSiriDataSharingOptInView;
- (id)dataSharingOptInTextWelcomeControllerForViewStyle:(long long)a0;
- (void)tearDownPresentedViews;
- (id)dataSharingOptInViewForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewStyle:(long long)a1;
- (void)_fetchSiriDataSharingEnabled;
- (id)_modalViewControllerForViewStyle:(long long)a0;
- (id)_proximityViewForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_userTappedDetailLinkText;
- (void)_userTappedOptInToDataSharing;
- (void)_userTappedOptOutOfDataSharing;
- (void)_userTappedDismissButtonFromProxCard;
- (void)_setSiriDataSharingStatus:(long long)a0 forceDismissal:(BOOL)a1;
- (void)didDismissFromViewController:(id)a0;

@end
