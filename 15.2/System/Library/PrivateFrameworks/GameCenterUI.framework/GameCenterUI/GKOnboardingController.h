@protocol GKOnboardingFlowDelegate;

@interface GKOnboardingController : NSObject

@property (class, readonly, nonatomic) GKOnboardingController *shared;

@property (weak, nonatomic) id<GKOnboardingFlowDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)didShowPrivacyNotice;
- (void)presentPersonalizationScreen:(id)a0;
- (void)presentProfilePrivacyScreen:(id)a0;
- (void)presentViewController:(id)a0 presentingViewController:(id)a1;
- (unsigned long long)getPrivacyNoticeVersion;

@end
