@protocol GKOnboardingFlowDelegate;

@interface GKOnboardingController : NSObject

@property (class, readonly, nonatomic) GKOnboardingController *shared;

@property (weak, nonatomic) id<GKOnboardingFlowDelegate> delegate;

- (void)presentProfilePrivacyScreen:(id)a0;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0 presentingViewController:(id)a1;
- (unsigned long long)getPrivacyNoticeVersion;
- (BOOL)didShowPrivacyNotice;
- (void)presentPersonalizationScreen:(id)a0;

@end
