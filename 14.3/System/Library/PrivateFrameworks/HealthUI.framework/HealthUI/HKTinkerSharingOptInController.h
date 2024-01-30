@protocol HKTinkerSharingSetupDelegate;

@interface HKTinkerSharingOptInController : BPSWelcomeOptinViewController {
    long long _layoutStyle;
    id<HKTinkerSharingSetupDelegate> _delegate;
}

- (id)imageResource;
- (void).cxx_destruct;
- (id)alternateButtonTitle;
- (id)detailString;
- (void)viewDidLoad;
- (id)titleString;
- (id)initWithStyle:(long long)a0 delegate:(id)a1;
- (BOOL)wantsLightenBlendedScreen;
- (id)suggestedButtonTitle;
- (id)tapToRadarMetadata;
- (void)_configureLayoutStyle;
- (void)userDidRequestCancel;
- (void)_presentNetworkAccessConfirmationWithHelper:(id)a0;
- (void)applyConfirmedOptin:(BOOL)a0;
- (id)imageResourceBundleIdentifier;
- (void)suggestedButtonPressed:(id)a0;
- (void)alternateButtonPressed:(id)a0;
- (id)privacyBundles;

@end
