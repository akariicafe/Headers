@class HMHome, NSString, NAFuture, UIViewController;
@protocol HUConfigurationViewController;

@interface HUVoiceProfileOnboardingFlow : NSObject <HUFeatureOnboardingFlow>

@property (nonatomic) BOOL shouldAbortThisOnboardingFlowGroup;
@property (nonatomic) BOOL shouldAbortAllOnboarding;
@property (retain, nonatomic) NSString *initialCheckedLanguage;
@property (nonatomic) BOOL initialCheckedResult;
@property (retain, nonatomic) NAFuture *onboardingFuture;
@property (retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NAFuture *readyFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)needsOnboardingForHome:(id)a0 options:(id)a1;

- (void).cxx_destruct;
- (void)checkIfStillRequiredFromCurrentResults:(id)a0;
- (id)initWithUsageOptions:(id)a0 home:(id)a1;
- (id)processUserInput:(id)a0;

@end
