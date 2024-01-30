@class NSMutableDictionary;
@protocol SASPresentationManagerDelegate;

@interface SASPresentationManager : NSObject {
    BOOL _lastReportedShouldRejectNewActivations;
    id<SASPresentationManagerDelegate> _presentationManagerDelegate;
}

@property (retain, nonatomic) NSMutableDictionary *presentations;

+ (BOOL)_canTransitionFromState:(long long)a0 toState:(long long)a1;
+ (BOOL)_canTransitionFromState:(long long)a0 toState:(long long)a1 presentationIdentifier:(long long)a2;
+ (BOOL)_canTransitionToOffFromState:(long long)a0;
+ (BOOL)_canTransitionToHeatedFromState:(long long)a0;
+ (BOOL)_canTransitionToStoppingFromState:(long long)a0;
+ (BOOL)_canTransitionToStartingFromState:(long long)a0;
+ (BOOL)_canTransitionToActiveFromState:(long long)a0 presentationIdentifier:(long long)a1;
+ (BOOL)_shouldKeepPingingForRequestState:(long long)a0;

- (void)startingPresentations_cancelPendingActivationWithReason:(unsigned long long)a0;
- (void)_sendBlockToStartingPresentations:(id /* block */)a0;
- (void)_notifyDelegateOfShouldRejectNewActivationsChangeIfNecessary;
- (void)_presentationsLock_cancelAllPreheatedPresentations;
- (void)sendButtonEventCompletionToPresentations:(id /* block */)a0;
- (void)_setupPingTimerForPresentationIdentifier:(long long)a0;
- (void)_sendBlockToStoppingPresentations:(id /* block */)a0;
- (void)presentationWithPresentationIdentifierBecameActive:(long long)a0;
- (long long)requestState;
- (void)presentationWithPresentationIdentifier:(long long)a0 activationDeterminedShouldDeferWake:(BOOL)a1;
- (void)unregisterSiriPresentationWithIdentifier:(long long)a0;
- (void)registerSiriPresentation:(id)a0 withIdentifier:(long long)a1;
- (void)cancelAllPreheatedPresentations;
- (void)presentationWithPresentationIdentifierBecameOff:(long long)a0;
- (void)activePresentations_bulletinManagerDidChangeBulletins;
- (void)startingAndActiveAndStoppingPresentations_presentationDismissalRequestedWithOptions:(id)a0;
- (void)activePresentations_deviceWonMyriadElection;
- (void)_sendBlock:(id /* block */)a0 toPresentationWithPresentationIdentifier:(long long)a1;
- (void)pongWithPresentationIdentifier:(long long)a0;
- (void)_sendBlockToActivePresentations:(id /* block */)a0;
- (void)setPresentationManagerDelegate:(id)a0;
- (void)presentationRequestedWithPresentationIdentifier:(long long)a0 presentationOptions:(id)a1 requestOptions:(id)a2;
- (void).cxx_destruct;
- (void)_waitForPongFromPresentationWithPresentationIdentifier:(long long)a0;
- (id)init;
- (BOOL)_shouldRejectNewActivations;
- (long long)_presentationsLock_nextPresentationToActivate;
- (BOOL)activePresentationsAreIdleAndQuiet;
- (void)activePresentations_handleRequestWithOptions:(id)a0;
- (long long)nextPresentationToActivate;
- (void)_transitionPresentationWithPresentationIdentifier:(long long)a0 toState:(long long)a1;
- (void)activeAndStartingPresentations_updateCurrentLockState:(unsigned long long)a0;
- (void)preheatNextPresentationToActivate;
- (void)presentationWithPresentationIdentifierWakeScreenAfterActivation:(long long)a0 reason:(id)a1;
- (void)_forceAllPresentationsOff;
- (void)presentationWithPresentationIdentifierBeganStopping:(long long)a0;
- (void)presentationWithPresentationIdentifierBeganStarting:(long long)a0;
- (void)_teardownPingTimerForPresentationIdentifier:(long long)a0;

@end
