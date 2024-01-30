@class HMHome, NSArray, NAFuture, NSString, UIViewController;
@protocol HUConfigurationViewController;

@interface HUAnnounceOnboardingFlow : NSObject <HUFeatureOnboardingFlow>

@property (retain, nonatomic) NSArray *requiredSteps;
@property (retain, nonatomic) NAFuture *onboardingFuture;
@property (readonly, nonatomic) BOOL shouldAbortThisOnboardingFlowGroup;
@property (readonly, nonatomic) BOOL shouldAbortAllOnboarding;
@property (retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController;
@property (retain, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allSteps;
+ (id)needsOnboardingForHome:(id)a0 options:(id)a1;

- (void).cxx_destruct;
- (id)processUserInput:(id)a0;
- (id)initWithUsageOptions:(id)a0 home:(id)a1;
- (BOOL)shouldShowStep:(unsigned long long)a0 withOptions:(id)a1;
- (id)viewControllerForStep:(unsigned long long)a0;

@end
