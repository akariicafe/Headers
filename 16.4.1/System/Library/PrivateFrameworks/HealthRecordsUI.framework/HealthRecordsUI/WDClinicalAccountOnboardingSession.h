@interface WDClinicalAccountOnboardingSession : NSObject {
    void /* unknown type, empty encoding */ analyticsManager;
    void /* unknown type, empty encoding */ sharingClient;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ context;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ options;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ profile;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ accountStore;
@property (nonatomic, readonly) BOOL shouldLaunchClinicalSharing;
@property (nonatomic, readonly) BOOL allowsCancellingClinicalOnboarding;

+ (id)makeFailedToOnboardAccountAlertControllerWithError:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(long long)a0 options:(unsigned long long)a1 profile:(id)a2 analyticsManager:(id)a3;
- (id)makeDataTypeSelectionViewControllerForAccount:(id)a0;
- (id)makeNecessaryScopesNotPresentViewControllerForAccount:(id)a0;
- (void)persistEphemeralAccount:(id)a0 fromSharing:(BOOL)a1 completion:(id /* block */)a2;
- (void)submitClinicalSharingOnboardingStepAnalytic:(long long)a0;

@end
