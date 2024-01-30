@protocol HKTinkerSharingSetupDelegate;

@interface HKTinkerSharingSyncSetupController : BPSWelcomeOptinViewController {
    long long _layoutStyle;
    id<HKTinkerSharingSetupDelegate> _delegate;
}

+ (BOOL)controllerNeedsToRun;

- (id)detailString;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)titleString;
- (id)imageResource;
- (id)suggestedButtonTitle;
- (void)setupDidSucceed;
- (id)_tinkerUserDateOfBirthComponents;
- (BOOL)controllerAllowsNavigatingBackFrom;
- (BOOL)controllerAllowsNavigatingBackTo;
- (id)initWithStyle:(long long)a0 delegate:(id)a1;
- (void)setupDidFailWithError:(id)a0;
- (void)setupSharing;
- (id)tapToRadarMetadata;

@end
