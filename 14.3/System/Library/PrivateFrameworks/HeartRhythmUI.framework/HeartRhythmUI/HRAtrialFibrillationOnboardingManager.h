@class NSString, HROnboardingManager, NPSManager;
@protocol HRAtrialFibrillationOnboardingManagerDelegate;

@interface HRAtrialFibrillationOnboardingManager : NSObject <HROnboardingManagerDataSource, HROnboardingManagerDelegate>

@property (readonly, nonatomic) HROnboardingManager *onboardingManager;
@property (retain, nonatomic) NPSManager *nanoPreferenceSyncManager;
@property (weak, nonatomic) id<HRAtrialFibrillationOnboardingManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithOnboardingType:(long long)a0 isFirstTimeOnboarding:(BOOL)a1 healthStore:(id)a2 dateCache:(id)a3 provenance:(long long)a4 delegate:(id)a5;
- (id)onboardingNavigationController;
- (void)dismissOnboarding;
- (id)availableOnboardingStepsForOnboardingManager:(id)a0;
- (id)onboardingManager:(id)a0 sequenceForStep:(long long)a1 onboardingType:(long long)a2;
- (void)didBeginOnboardingForOnboardingManager:(id)a0;
- (void)didCompleteOnboardingForOnboardingManager:(id)a0;
- (void)onboardingManager:(id)a0 willMoveToPage:(id)a1;
- (void)didCancelOnboardingForOnboardingManager:(id)a0;
- (void)_wrapUpOnboardingWithNotificationsEnabled:(BOOL)a0;

@end
