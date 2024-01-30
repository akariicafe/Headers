@class UINavigationController, HKDateCache, HKHealthStore, NSArray, HKOnboardingSequence, NSMutableDictionary, NSString;
@protocol HKOnboardingManagerDataSource, HKOnboardingManagerDelegate;

@interface HKOnboardingManager : NSObject <UINavigationControllerDelegate, HKOnboardingPageViewControllerDelegate>

@property (nonatomic) long long onboardingType;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKDateCache *dateCache;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) NSArray *steps;
@property (retain, nonatomic) HKOnboardingSequence *currentSequence;
@property (nonatomic) long long currentStepIndex;
@property (nonatomic) unsigned long long currentPageIndex;
@property (nonatomic) unsigned long long presentedPagesCount;
@property (retain, nonatomic) NSMutableDictionary *userInfo;
@property (readonly, nonatomic) BOOL firstTimeOnboarding;
@property (weak, nonatomic) id<HKOnboardingManagerDataSource> dataSource;
@property (weak, nonatomic) id<HKOnboardingManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (void).cxx_destruct;
- (void)onboardingCancelled;
- (void)pushPageAnimated:(BOOL)a0;
- (long long)upgradingFromAlgorithmVersionForOnboardingType:(long long)a0;
- (void)dismissOnboarding;
- (void)stepToNextState;
- (void)stepToNextPage;
- (id)viewControllerForPage:(id)a0;
- (void)_didStepBackward;
- (void)stepForward;
- (id)initWithOnboardingType:(long long)a0 isFirstTimeOnboarding:(BOOL)a1 healthStore:(id)a2 dateCache:(id)a3;
- (id)onboardingNavigationController;

@end
