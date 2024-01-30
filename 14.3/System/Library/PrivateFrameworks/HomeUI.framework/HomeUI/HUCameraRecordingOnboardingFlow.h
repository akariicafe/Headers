@class UIViewController, NAFuture, HMHome, NSString, HFUserItem;
@protocol HUConfigurationViewController;

@interface HUCameraRecordingOnboardingFlow : NSObject <HUFeatureOnboardingFlow>

@property (nonatomic) BOOL shouldAbortThisOnboardingFlowGroup;
@property (nonatomic) BOOL shouldAbortAllOnboarding;
@property (retain, nonatomic) HFUserItem *userItem;
@property (retain, nonatomic) NAFuture *onboardingFuture;
@property (retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController;
@property (retain, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)processUserInput:(id)a0;
- (id)initWithUsageOptions:(id)a0 home:(id)a1;
- (id)_determineInitialViewController;
- (void)_setThisUserDismissedCameraOnboardingAndReminder;

@end
