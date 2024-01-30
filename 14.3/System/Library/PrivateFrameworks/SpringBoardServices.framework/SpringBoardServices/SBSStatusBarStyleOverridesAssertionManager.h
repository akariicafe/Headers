@class NSMapTable, NSXPCConnection, NSMutableDictionary, SBSStatusBarStyleOverridesCoordinator, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface SBSStatusBarStyleOverridesAssertionManager : NSObject <BSDescriptionProviding, SBSStatusBarStyleOverridesAssertionClient>

@property (retain, nonatomic) NSMapTable *assertionsByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *acquisitionHandlerEntriesByIdentifier;
@property (retain, nonatomic) NSXPCConnection *sbXPCConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (weak, nonatomic) SBSStatusBarStyleOverridesCoordinator *internalQueue_styleOverrideCoordinator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *coordinatorCalloutQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)updateStatusStringForAssertion:(id)a0;
- (void)_internalQueue_setupXPCConnectionIfNecessary;
- (id)init;
- (void).cxx_destruct;
- (void)statusBarTappedWithContext:(id)a0 reply:(id /* block */)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)unregisterCoordinator;
- (void)_internalQueue_removeStatusBarStyleOverridesAssertionWithIdentifier:(id)a0 invalidate:(BOOL)a1;
- (void)_registerStyleOverrideCoordinatorAfterInterruption;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)removeStatusBarStyleOverridesAssertion:(id)a0;
- (void)_reactivateAssertions;
- (void)_internalQueue_updateRegistrationForCoordinator:(id)a0 reply:(id /* block */)a1;
- (void)invalidateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)updateRegistrationForCoordinator:(id)a0 reply:(id /* block */)a1;
- (void)_handleXPCConnectionInvalidation;
- (void)addStatusBarStyleOverridesAssertion:(id)a0 withHandler:(id /* block */)a1 onQueue:(id)a2;

@end
