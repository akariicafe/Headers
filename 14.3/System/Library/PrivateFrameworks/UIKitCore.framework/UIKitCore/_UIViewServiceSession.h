@class NSString, NSXPCConnection, _UIViewServiceDeputyManager, _UIAsyncInvocation, NSObject;
@protocol OS_dispatch_queue;

@interface _UIViewServiceSession : NSObject <NSXPCConnectionDelegate, _UIViewServiceDeputyManagerDelegate, _UIViewServiceViewControllerOperatorDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    _UIViewServiceDeputyManager *_deputyManager;
    _UIAsyncInvocation *_invalidationInvocation;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}

@property (copy, nonatomic) id /* block */ terminationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionWithConnection:(id)a0;

- (void)_invalidateUnconditionallyThen:(id /* block */)a0;
- (int)__automatic_invalidation_logic;
- (void)unregisterDeputyClass:(Class)a0;
- (void)registerDeputyClass:(Class)a0 withConnectionHandler:(id /* block */)a1;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)deputy:(id)a0 didFailWithError:(id)a1;
- (id)retain;
- (void)deputyManager:(id)a0 didUpdateExportedInterface:(id)a1;
- (void)viewControllerOperator:(id)a0 didCreateServiceViewControllerOfClass:(Class)a1;

@end
