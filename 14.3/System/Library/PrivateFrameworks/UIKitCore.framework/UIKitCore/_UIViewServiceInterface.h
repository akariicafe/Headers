@class _UIRemoteViewService, NSString, _UIAsyncInvocation, BKSProcessAssertion, NSError, NSXPCConnection;

@interface _UIViewServiceInterface : NSObject <NSXPCConnectionDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _terminationStateLock;
    NSError *_terminationError;
    id /* block */ _terminationHandler;
    _Atomic BOOL _isTerminated;
    _UIAsyncInvocation *_terminateInvocation;
    NSString *_serviceBundleIdentifier;
    _UIRemoteViewService *_service;
    BKSProcessAssertion *_serviceProcessAssertion;
    NSXPCConnection *_serviceConnection;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}

@property (readonly, nonatomic) int servicePID;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } serviceAuditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectToViewServiceWithBundleIdentifier:(id)a0 deputyInterfaces:(id)a1 connectionHandler:(id /* block */)a2;
+ (id)connectToViewService:(id)a0 deputyInterfaces:(id)a1 connectionHandler:(id /* block */)a2;

- (id)disconnect;
- (void)setTerminationHandler:(id /* block */)a0;
- (id)connectToDeputyWithInterface:(id)a0 fromExportedHostingObject:(id)a1 connectionHandler:(id /* block */)a2;
- (int)__automatic_invalidation_logic;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (id)retain;
- (id)_initWithConnectionInfo:(struct { id x0; id x1; })a0 serviceBundleIdentifier:(id)a1 deputyInterfaces:(id)a2;
- (id)_initWithConnectionInfo:(struct { id x0; id x1; })a0 service:(id)a1 deputyInterfaces:(id)a2;
- (id)_initWithConnectionInfo:(struct { id x0; id x1; })a0 serviceBundleIdentifier:(id)a1 service:(id)a2 deputyInterfaces:(id)a3;
- (id)_terminateWithError:(id)a0;
- (void)_terminateUnconditionallyThen:(id /* block */)a0;

@end
