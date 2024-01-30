@class NSMutableDictionary;
@protocol SASPresentationManagerDelegate;

@interface SASPresentationManager : NSObject {
    BOOL _lastReportedShouldRejectNewActivations;
    id<SASPresentationManagerDelegate> _presentationManagerDelegate;
}

@property (retain, nonatomic) NSMutableDictionary *presentations;

+ (BOOL)_canTransitionFromState:(long long)a0 toState:(long long)a1;
+ (BOOL)_canTransitionFromState:(long long)a0 toState:(long long)a1 presentationIdentifier:(long long)a2;
+ (BOOL)_canTransitionToActiveFromState:(long long)a0 presentationIdentifier:(long long)a1;
+ (BOOL)_canTransitionToHeatedFromState:(long long)a0;
+ (BOOL)_canTransitionToOffFromState:(long long)a0;
+ (BOOL)_canTransitionToStartingFromState:(long long)a0;
+ (BOOL)_canTransitionToStoppingFromState:(long long)a0;
+ (BOOL)_shouldKeepPingingForRequestState:(long long)a0;

- (void)_sendBlockToStartingPresentations:(id /* block */)a0;
- (BOOL)activePresentationsAreIdleAndQuiet;
- (void)_notifyDelegateOfShouldRejectNewActivationsChangeIfNecessary;
- (void)activePresentations_deviceWonMyriadElection;
- (void)presentationWithPresentationIdentifierBecameActive:(long long)a0;
- (void)preheatNextPresentationToActivate;
- (void)_waitForPongFromPresentationWithPresentationIdentifier:(long long)a0;
- (void)_transitionPresentationWithPresentationIdentifier:(long long)a0 toState:(long long)a1;
- (void)pongWithPresentationIdentifier:(long long)a0;
- (void)registerSiriPresentation:(id)a0 withIdentifier:(long long)a1;
- (void)_sendBlockToActivePresentations:(id /* block */)a0;
- (void)_forceAllPresentationsOff;
- (BOOL)_shouldRejectNewActivations;
- (void)_sendBlock:(id /* block */)a0 toPresentationWithPresentationIdentifier:(long long)a1;
- (void)activePresentations_handleRequestWithOptions:(id)a0;
- (void)presentationWithPresentationIdentifierWakeScreenAfterActivation:(long long)a0 reason:(id)a1;
- (void)presentationDidUpdateState:(id)a0;
- (void)unregisterSiriPresentationWithIdentifier:(long long)a0;
- (long long)requestState;
- (void)presentationWithPresentationIdentifierBeganStopping:(long long)a0;
- (void)_teardownPingTimerForPresentationIdentifier:(long long)a0;
- (long long)_presentationsLock_nextPresentationToActivate;
- (void)_setupPingTimerForPresentationIdentifier:(long long)a0;
- (void)activeAndStartingPresentations_updateCurrentLockState:(unsigned long long)a0;
- (void)_presentationsLock_broadcastPresentationStateForIdentifier:(id)a0 presentationState:(id)a1 presentationIdentifiersToInform:(id)a2;
- (void)presentationRequestedWithPresentationIdentifier:(long long)a0 presentationOptions:(id)a1 requestOptions:(id)a2;
- (void)setPresentationManagerDelegate:(id)a0;
- (void)_sendBlockToStoppingPresentations:(id /* block */)a0;
- (void)startingAndActiveAndStoppingPresentations_presentationDismissalRequestedWithOptions:(id)a0;
- (void)cancelAllPreheatedPresentations;
- (void)presentationWithPresentationIdentifierBecameOff:(long long)a0;
- (id)init;
- (long long)nextPresentationToActivate;
- (void)presentationWithPresentationIdentifierBeganStarting:(long long)a0;
- (void)activePresentations_bulletinManagerDidChangeBulletins;
- (void)startingPresentations_cancelPendingActivationWithReason:(unsigned long long)a0;
- (void)_presentationsLock_cancelAllPreheatedPresentations;
- (void).cxx_destruct;
- (void)sendButtonEventCompletionToPresentations:(id /* block */)a0 forButtonEventType:(unsigned long long)a1;
- (void)presentationWithPresentationIdentifier:(long long)a0 activationDeterminedShouldDeferWake:(BOOL)a1;

@end
