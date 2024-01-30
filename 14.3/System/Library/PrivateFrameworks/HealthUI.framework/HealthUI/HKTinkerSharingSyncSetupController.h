@protocol HKTinkerSharingSetupDelegate;

@interface HKTinkerSharingSyncSetupController : BPSWelcomeOptinViewController {
    long long _layoutStyle;
    id<HKTinkerSharingSetupDelegate> _delegate;
}

+ (BOOL)controllerNeedsToRun;

- (id)imageResource;
- (void).cxx_destruct;
- (id)detailString;
- (void)viewDidLoad;
- (id)titleString;
- (id)initWithStyle:(long long)a0 delegate:(id)a1;
- (BOOL)controllerAllowsNavigatingBackFrom;
- (BOOL)controllerAllowsNavigatingBackTo;
- (id)suggestedButtonTitle;
- (id)tapToRadarMetadata;
- (void)setupSharing;
- (void)setupDidFailWithError:(id)a0;
- (id)_tinkerUserDateOfBirthComponents;
- (void)setupDidSucceed;

@end
