@class HMHome, NSArray, NSSet, NSMapTable, NAFuture, NSString, UIViewController;
@protocol HUConfigurationViewController;

@interface HUHomeHubMigrationOnboardingFlow : NSObject <HUFeatureOnboardingFlow>

@property (retain, nonatomic) NSArray *homes;
@property (retain, nonatomic) NSArray *sharedHomes;
@property (retain, nonatomic) NSSet *devices;
@property (retain, nonatomic) NSArray *homePodsToUpdate;
@property (nonatomic) BOOL shouldShowUserWarning;
@property (nonatomic) BOOL shouldShowDeviceWarning;
@property (nonatomic) BOOL shouldShowSharedHomeWarning;
@property (nonatomic) unsigned long long upgradeRequirements;
@property (retain, nonatomic) NSMapTable *homesToUsersMap;
@property (retain, nonatomic) NAFuture *onboardingFuture;
@property (readonly, nonatomic) BOOL shouldAbortThisOnboardingFlowGroup;
@property (readonly, nonatomic) BOOL shouldAbortAllOnboarding;
@property (retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NAFuture *readyFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)needsOnboardingForHome:(id)a0 options:(id)a1;

- (void).cxx_destruct;
- (void)_checkHomePodResidentUpgradeRequirementsInHome:(id)a0;
- (id)_determineNextViewControllerWithPriorResults:(id)a0;
- (id)initWithUsageOptions:(id)a0 home:(id)a1 devices:(id)a2;
- (id)processUserInput:(id)a0;

@end
