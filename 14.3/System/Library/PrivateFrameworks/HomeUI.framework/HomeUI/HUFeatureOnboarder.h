@class UINavigationController, NSMutableDictionary, HUFeatureOnboardingConfigurator, NAFuture, NSString, NSMutableArray, UIViewController;
@protocol HUConfigurationViewController;

@interface HUFeatureOnboarder : NSObject <HUFeatureOnboardingConfiguratorDelegate>

@property (retain, nonatomic) HUFeatureOnboardingConfigurator *configurator;
@property (retain, nonatomic) NSMutableDictionary *userInputResults;
@property (retain, nonatomic) NAFuture *completionFuture;
@property (retain, nonatomic) NSMutableArray *allRemainingFlowGroups;
@property (retain, nonatomic) UINavigationController *navController;
@property (weak) UIViewController<HUConfigurationViewController> *_currentViewControllerForTests;
@property (nonatomic) BOOL hasPerformedPostProcessing;
@property (nonatomic) BOOL restart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithGroupedFeatures:(id)a0 usageOptions:(id)a1;
- (id)_subclass_buildAllFlowGroupsFromFeatureGroups:(id)a0 usageOptions:(id)a1;
- (id)_findNextAppropriateFlow:(id)a0;
- (void)_skipAnyFlowsNoLongerRequired;
- (id)getPostProcessingFlowsForResults:(id)a0;
- (void)configuratorDidFinish:(id)a0;
- (void)configuratorDidUpdateViewController:(id)a0;
- (id)getNextViewControllerForOnboardingInput:(id)a0;
- (void)restartCurrentOnboarding;
- (id)initWithFeatures:(id)a0 usageOptions:(id)a1;
- (void)startOnboardingWithPresentingViewController:(id)a0;

@end
