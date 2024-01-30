@class UIViewController, NAFuture, NSString, HMHome;
@protocol HUConfigurationViewController;

@interface HUTVViewingProfilesOnboardingFlow : NSObject <HUFeatureOnboardingFlow>

@property (nonatomic) BOOL shouldAbortThisOnboardingFlowGroup;
@property (nonatomic) BOOL shouldAbortAllOnboarding;
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
- (BOOL)_shouldShowOnboardingWithOptions:(id)a0;

@end
