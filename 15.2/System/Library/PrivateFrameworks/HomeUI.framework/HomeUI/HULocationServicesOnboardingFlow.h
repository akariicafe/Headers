@class UIViewController, NAFuture, NSString, HMHome;
@protocol HUConfigurationViewController;

@interface HULocationServicesOnboardingFlow : NSObject <HUFeatureOnboardingFlow>

@property (nonatomic) BOOL shouldAbortThisOnboardingFlowGroup;
@property (nonatomic) BOOL shouldAbortAllOnboarding;
@property (retain, nonatomic) NAFuture *onboardingFuture;
@property (retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController;
@property (retain, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)needsOnboardingForHome:(id)a0 options:(id)a1;

@end
