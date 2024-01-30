@class NSString, HKHeartRhythmAvailability, UINavigationController, HKHealthStore, NSArray, NSMutableDictionary, HROnboardingSequence, HKDateCache;
@protocol HROnboardingManagerDataSource, HROnboardingManagerDelegate;

@interface HROnboardingManager : NSObject <UINavigationControllerDelegate, HROnboardingPageViewControllerDelegate>

@property (nonatomic) long long onboardingType;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKDateCache *dateCache;
@property (nonatomic) long long provenance;
@property (retain, nonatomic) NSString *productType;
@property (retain, nonatomic) HKHeartRhythmAvailability *availability;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) NSArray *steps;
@property (retain, nonatomic) HROnboardingSequence *currentSequence;
@property (nonatomic) long long currentStepIndex;
@property (nonatomic) unsigned long long currentPageIndex;
@property (nonatomic) unsigned long long presentedPagesCount;
@property (retain, nonatomic) NSMutableDictionary *userInfo;
@property (readonly, nonatomic) BOOL firstTimeOnboarding;
@property (weak, nonatomic) id<HROnboardingManagerDataSource> dataSource;
@property (weak, nonatomic) id<HROnboardingManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (id)onboardingNavigationController;
- (void)dismissOnboarding;
- (void)stepForward;
- (void)pushPageAnimated:(BOOL)a0;
- (long long)upgradingFromAlgorithmVersionForOnboardingType:(long long)a0;
- (void)stepToNextState;
- (void)stepToNextPage;
- (id)viewControllerForPage:(id)a0;
- (void)_didStepBackward;
- (void)onboardingCancelled;
- (id)initWithOnboardingType:(long long)a0 isFirstTimeOnboarding:(BOOL)a1 healthStore:(id)a2 dateCache:(id)a3 provenance:(long long)a4;

@end
