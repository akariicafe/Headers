@class HKHeartRhythmAvailability, HKOnboardingManager, NSString;
@protocol HRElectrocardiogramOnboardingManagerDelegate;

@interface HRElectrocardiogramOnboardingManager : NSObject <HKOnboardingManagerDataSource, HKOnboardingManagerDelegate, HROnboardingElectrocardiogramSetupCompleteViewControllerDelegate, HROnboardingElectrocardiogramUpdateCompleteViewControllerDelegate>

@property (readonly, nonatomic) HKOnboardingManager *onboardingManager;
@property (readonly, nonatomic) BOOL isFirstTimeOnboarding;
@property (readonly, nonatomic) BOOL isSampleInteractive;
@property (weak, nonatomic) id<HRElectrocardiogramOnboardingManagerDelegate> delegate;
@property (readonly, nonatomic) HKHeartRhythmAvailability *availability;
@property (readonly, nonatomic) long long provenance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)electrocardiogramPossibleResultsViewControllerForSample:(id)a0 forAlgorithmVersion:(long long)a1;
+ (id)electrocardiogramPossibleResultsViewControllerForAlgorithmVersion:(long long)a0 forOnboarding:(BOOL)a1;
+ (long long)algorithmVersionForSample:(id)a0;
+ (id)electrocardiogramPossibleResultsViewControllerForSample:(id)a0;
+ (BOOL)hasOverriddenOnboardingSettings;

- (void).cxx_destruct;
- (long long)upgradingFromAlgorithmVersion;
- (id)availableOnboardingStepsForOnboardingManager:(id)a0;
- (id)onboardingManager:(id)a0 sequenceForStep:(long long)a1 onboardingType:(long long)a2;
- (void)didBeginOnboardingForOnboardingManager:(id)a0;
- (void)didCompleteOnboardingForOnboardingManager:(id)a0;
- (long long)upgradingFromAlgorithmVersionForOnboardingManager:(id)a0;
- (id)onboardingManager:(id)a0 customViewControllerForPage:(id)a1;
- (void)dismissOnboarding;
- (void)onboardingManager:(id)a0 willMoveToPage:(id)a1;
- (void)didCancelOnboardingForOnboardingManager:(id)a0;
- (id)onboardingNavigationController;
- (id)initWithOnboardingType:(long long)a0 isFirstTimeOnboarding:(BOOL)a1 healthStore:(id)a2 dateCache:(id)a3 provenance:(long long)a4 delegate:(id)a5 isSampleInteractive:(BOOL)a6;
- (void)didTapOnElectrocardiogram:(id)a0;
- (long long)availableAlgorithmVersion;
- (void)recordOnboardingAsCompleted;
- (void)didTapOnShowDevicesInWatchApp;

@end
