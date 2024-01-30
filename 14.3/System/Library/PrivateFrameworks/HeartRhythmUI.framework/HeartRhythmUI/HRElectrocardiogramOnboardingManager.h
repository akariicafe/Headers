@class NSString, HROnboardingManager;
@protocol HRElectrocardiogramOnboardingManagerDelegate;

@interface HRElectrocardiogramOnboardingManager : NSObject <HROnboardingManagerDataSource, HROnboardingManagerDelegate, HROnboardingElectrocardiogramSetupCompleteViewControllerDelegate, HROnboardingElectrocardiogramUpdateCompleteViewControllerDelegate>

@property (readonly, nonatomic) HROnboardingManager *onboardingManager;
@property (readonly, nonatomic) BOOL isFirstTimeOnboarding;
@property (readonly, nonatomic) BOOL isSampleInteractive;
@property (weak, nonatomic) id<HRElectrocardiogramOnboardingManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)electrocardiogramPossibleResultsViewControllerForSample:(id)a0 forAlgorithmVersion:(long long)a1;
+ (id)electrocardiogramPossibleResultsViewControllerForAlgorithmVersion:(long long)a0 forOnboarding:(BOOL)a1;
+ (long long)algorithmVersionForSample:(id)a0;
+ (id)electrocardiogramPossibleResultsViewControllerForSample:(id)a0;

- (void).cxx_destruct;
- (id)onboardingNavigationController;
- (id)initWithOnboardingType:(long long)a0 isFirstTimeOnboarding:(BOOL)a1 healthStore:(id)a2 dateCache:(id)a3 provenance:(long long)a4 delegate:(id)a5 isSampleInteractive:(BOOL)a6;
- (void)dismissOnboarding;
- (void)didTapOnElectrocardiogram:(id)a0;
- (void)didTapOnShowDevicesInWatchApp;
- (long long)upgradingFromAlgorithmVersion;
- (id)availableOnboardingStepsForOnboardingManager:(id)a0;
- (id)onboardingManager:(id)a0 sequenceForStep:(long long)a1 onboardingType:(long long)a2;
- (void)didBeginOnboardingForOnboardingManager:(id)a0;
- (void)didCompleteOnboardingForOnboardingManager:(id)a0;
- (long long)upgradingFromAlgorithmVersionForOnboardingManager:(id)a0;
- (id)onboardingManager:(id)a0 customViewControllerForPage:(id)a1;
- (void)onboardingManager:(id)a0 willMoveToPage:(id)a1;
- (void)didCancelOnboardingForOnboardingManager:(id)a0;
- (long long)availableAlgorithmVersion;
- (void)recordOnboardingAsCompleted;

@end
