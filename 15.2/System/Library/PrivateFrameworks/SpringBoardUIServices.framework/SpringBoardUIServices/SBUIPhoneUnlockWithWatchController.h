@class NSString, SFAutoUnlockManager, NSHashTable;
@protocol SBUIBiometricResource, SBUIPhoneUnlockWithWatchControllerDelegate;

@interface SBUIPhoneUnlockWithWatchController : NSObject <SFAutoUnlockManagerDelegate, SBUIBiometricResourceObserver> {
    SFAutoUnlockManager *_autoUnlockManager;
    SFAutoUnlockManager *_testAutoUnlockManager;
    NSHashTable *_observers;
    BOOL _bottomFaceOccludedSinceScreenOn;
    BOOL _faceWUPoseEligibleSinceScreenOn;
    BOOL _faceOccludedSinceScreenOn;
}

@property (weak, nonatomic) id<SBUIPhoneUnlockWithWatchControllerDelegate> delegate;
@property (nonatomic) long long errorCode;
@property (retain, nonatomic) id<SBUIBiometricResource> biometricResource;
@property (nonatomic) BOOL wakeSourceIsUserAction;
@property (nonatomic) BOOL significantUserInteractionOccuredSinceScreenOn;
@property (nonatomic) BOOL liftToWakeGestureDetectedSinceScreenOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_testAutoUnlockManager;
- (void)biometricResource:(id)a0 observeEvent:(unsigned long long)a1;
- (BOOL)didDetectFaceRequirementsForPAU;
- (BOOL)phoneUnlockWithWatchSupported;
- (void)manager:(id)a0 completedUnlockWithDevice:(id)a1;
- (BOOL)phoneUnlockWithWatchEnabled;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)completePhoneAutoUnlockWithNotification:(BOOL)a0;
- (void)setFaceOccludedSinceScreenOn:(BOOL)a0;
- (void)attemptPhoneUnlockWithWatch;
- (void)_handleUnlockAttemptFailedWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)manager:(id)a0 beganAttemptWithDevice:(id)a1;
- (void)setFaceWUPoseEligibleSinceScreenOn:(BOOL)a0;
- (void)manager:(id)a0 failedAttemptWithError:(id)a1;
- (BOOL)shouldPhoneCompleteAutoUnlockWithNotification;
- (void)_handleUnlockAttemptSucceeded;
- (void)handleScreenOff;
- (void)setTestAutoUnlockManager:(id)a0;
- (BOOL)showRawErrorCodes;
- (void)setBottomFaceOccludedSinceScreenOn:(BOOL)a0;
- (id)_autoUnlockManager;
- (void)_sendCoreAnalyticsEventWithPayload:(id)a0;

@end
