@class NSHashTable, NSString, NSError, SBSRemoteAlertDefinition, NSMutableDictionary, NSMutableArray, BSTransaction, SBRemoteTransientOverlayViewController;
@protocol SBRemoteTransientOverlaySessionHostDelegate;

@interface SBRemoteTransientOverlaySession : NSObject <SBRemoteTransientOverlayViewControllerDelegate> {
    BSTransaction *_activeTransaction;
    SBRemoteTransientOverlayViewController *_containerViewController;
    BOOL _hasInitiatedPresentation;
    BOOL _hasPresented;
    NSMutableDictionary *_identifierToHandlingButtonEvents;
    NSHashTable *_observers;
    NSMutableArray *_pendingTransactions;
}

@property (weak, nonatomic) id<SBRemoteTransientOverlaySessionHostDelegate> hostDelegate;
@property (readonly, copy, nonatomic) SBSRemoteAlertDefinition *definition;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, nonatomic, getter=isActivated) BOOL activated;
@property (readonly, nonatomic, getter=isPrepared) BOOL prepared;
@property (readonly, nonatomic, getter=isSwitcherEligible) BOOL switcherEligible;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic, getter=isPendingInvalidation) BOOL pendingInvalidation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)addSessionObserver:(id)a0;
- (void)removeSessionObserver:(id)a0;
- (void)activateWithContext:(id)a0;
- (void)_didActivate;
- (void)_didDeactivate;
- (void)deactivate;
- (void)invalidate;
- (BOOL)hasPendingButtonEvents:(unsigned long long)a0;
- (BOOL)hasServiceProcessIdentifier:(int)a0;
- (id)_initWithSessionID:(id)a0 definition:(id)a1;
- (void)prepareWithConfigurationContext:(id)a0;
- (void)getActionForHandlingButtonEvents:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)remoteTransientOverlayViewController:(id)a0 didAppearAnimated:(BOOL)a1;
- (void)remoteTransientOverlayViewController:(id)a0 didDisappearAnimated:(BOOL)a1;
- (void)remoteTransientOverlayViewController:(id)a0 willAppearAnimated:(BOOL)a1;
- (void)remoteTransientOverlayViewControllerRequestsDeactivation:(id)a0;
- (void)remoteTransientOverlayViewControllerRequestsInvalidation:(id)a0;
- (void)remoteTransientOverlayViewController:(id)a0 didTerminateWithError:(id)a1;
- (id)remoteTransientOverlayViewController:(id)a0 requestsActionForHandlingButtonEvents:(unsigned long long)a1;
- (BOOL)remoteTransientOverlayViewController:(id)a0 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)a1;
- (id)_actionForHandlingButtonEvents:(unsigned long long)a0;
- (void)_invalidateWithReason:(long long)a0 error:(id)a1;
- (void)_requestInvalidationWithReason:(long long)a0 error:(id)a1;
- (void)_addTransaction:(id)a0;
- (void)_registerObserversForTransaction:(id)a0;
- (void)_processPendingTransactions;
- (void)remoteTransientOverlayViewControllerDidInvalidate:(id)a0;

@end
