@class NSString;
@protocol CSPosterSwitcherActivationManagerDelegate, CSPosterSwitcherActivationSource, CSUnlockRequesting;

@interface CSPosterSwitcherActivationManager : NSObject <CSEventHandling>

@property (weak, nonatomic) id<CSPosterSwitcherActivationSource> source;
@property (weak, nonatomic) id<CSPosterSwitcherActivationManagerDelegate> delegate;
@property (retain, nonatomic) id<CSUnlockRequesting> unlockRequester;
@property (nonatomic) BOOL hasBeenCoachedSinceReset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wouldHandleButtonEvent:(id)a0;
- (BOOL)handleEvent:(id)a0;
- (void)conformsToCSEventHandling;
- (void).cxx_destruct;
- (void)_failActivationWithReason:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_presentCoachingMessage:(unsigned long long)a0;
- (void)_resetUnauthenticatedActivationAttemptCount;
- (void)activateWithHandler:(id /* block */)a0 onFailure:(id /* block */)a1;
- (id)initWithSource:(id)a0 delegate:(id)a1 unlockRequester:(id)a2;

@end
