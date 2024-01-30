@class NPSManager, NSString, HKOnboardingManager, HKFeatureAvailabilityStore;
@protocol HRAtrialFibrillationOnboardingManagerDelegate;

@interface HRAtrialFibrillationOnboardingManager : NSObject <HKOnboardingManagerDataSource, HKOnboardingManagerDelegate>

@property (readonly, nonatomic) HKOnboardingManager *onboardingManager;
@property (retain, nonatomic) NPSManager *nanoPreferenceSyncManager;
@property (weak, nonatomic) id<HRAtrialFibrillationOnboardingManagerDelegate> delegate;
@property (readonly, nonatomic) HKFeatureAvailabilityStore *featureAvailabilityStore;
@property (readonly, nonatomic) long long provenance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)availableOnboardingStepsForOnboardingManager:(id)a0;
- (id)onboardingManager:(id)a0 sequenceForStep:(long long)a1 onboardingType:(long long)a2;
- (void)didBeginOnboardingForOnboardingManager:(id)a0;
- (void)didCompleteOnboardingForOnboardingManager:(id)a0;
- (void)dismissOnboarding;
- (void)onboardingManager:(id)a0 willMoveToPage:(id)a1;
- (void)didCancelOnboardingForOnboardingManager:(id)a0;
- (id)onboardingNavigationController;
- (id)initWithOnboardingType:(long long)a0 isFirstTimeOnboarding:(BOOL)a1 healthStore:(id)a2 dateCache:(id)a3 provenance:(long long)a4 delegate:(id)a5;
- (void)_setOnboardingCompletedForCountryCode:(id)a0;
- (void)_wrapUpOnboardingWithNotificationsEnabled:(BOOL)a0;

@end
