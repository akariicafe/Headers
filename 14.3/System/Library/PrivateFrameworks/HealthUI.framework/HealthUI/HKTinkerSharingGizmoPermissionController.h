@protocol HKTinkerSharingSetupDelegate;

@interface HKTinkerSharingGizmoPermissionController : BPSWelcomeOptinViewController {
    long long _layoutStyle;
    id<HKTinkerSharingSetupDelegate> _delegate;
}

- (id)imageResource;
- (void).cxx_destruct;
- (id)detailString;
- (void)viewDidLoad;
- (id)titleString;
- (void)sendOptInRequest;
- (void)optInDidFailWithError:(id)a0;
- (id)_localizedFullNameForFirstName:(id)a0 lastName:(id)a1;
- (void)optInDidSucceed;
- (id)initWithStyle:(long long)a0 delegate:(id)a1;
- (BOOL)controllerAllowsNavigatingBackFrom;
- (BOOL)controllerAllowsNavigatingBackTo;
- (BOOL)wantsLightenBlendedScreen;
- (id)suggestedButtonTitle;
- (id)tapToRadarMetadata;

@end
