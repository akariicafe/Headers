@class _UIRemoteViewService, NSString, _UIAsyncInvocation, BKSProcessAssertion, NSError, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _UIViewServiceInterfaceConnectionRequest : NSObject {
    id /* block */ _connectionHandler;
    NSString *_serviceBundleIdentifier;
    _UIRemoteViewService *_service;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isCancelled;
    NSError *_cancellationError;
    _UIAsyncInvocation *_cancellationInvocation;
    int _sessionRequestNotifyToken;
    BKSProcessAssertion *_serviceProcessAssertion;
    NSXPCConnection *_serviceSessionConnection;
    BOOL _serviceSessionConnectionResumed;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}

+ (id)_connectToViewServiceWithBundleIdentifier:(id)a0 service:(id)a1 connectionHandler:(id /* block */)a2;
+ (id)connectToViewServiceWithBundleIdentifier:(id)a0 connectionHandler:(id /* block */)a1;
+ (id)connectToViewService:(id)a0 connectionHandler:(id /* block */)a1;

- (void)_cancelWithError:(id)a0;
- (unsigned long long)retainCount;
- (void)_cancelUnconditionallyThen:(id /* block */)a0;
- (id)retain;
- (void)_didConnectToService;
- (int)__automatic_invalidation_logic;
- (void)_establishConnection;
- (BOOL)_isDeallocating;
- (void)_launchService;
- (void)dealloc;
- (void)_createAndEstablishConnection;
- (BOOL)_tryRetain;
- (void)_createProcessAssertionForPID:(int)a0 orBundleIdentifier:(id)a1 acquiredHandler:(id /* block */)a2;
- (void)_createPlugInProcessAssertion;
- (oneway void)release;
- (void)_createProcessAssertion;

@end
