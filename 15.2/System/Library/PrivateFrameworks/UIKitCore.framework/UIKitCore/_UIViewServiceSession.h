@class NSString, NSXPCConnection, _UIViewServiceDeputyManager, _UIAsyncInvocation, NSObject, _UIViewServiceSessionManager;
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
@property (readonly, weak) _UIViewServiceSessionManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionWithConnection:(id)a0 manager:(id)a1;

- (void)_invalidateUnconditionallyThen:(id /* block */)a0;
- (void)unregisterDeputyClass:(Class)a0;
- (void)viewControllerOperator:(id)a0 didCreateServiceViewControllerOfClass:(Class)a1;
- (unsigned long long)retainCount;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)viewControllerOperator:(id)a0 didCreateServiceViewController:(id)a1 contextToken:(id)a2;
- (id)mainStoryboardNameForViewControllerOperator:(id)a0;
- (id)retain;
- (void)registerDeputyClass:(Class)a0 withConnectionHandler:(id /* block */)a1;
- (int)__automatic_invalidation_logic;
- (void)deputy:(id)a0 didFailWithError:(id)a1;
- (BOOL)_isDeallocating;
- (id)viewControllerClassNameForViewControllerOperator:(id)a0;
- (id)containingViewControllerClassNameForViewControllerOperator:(id)a0;
- (void)deputyManager:(id)a0 didUpdateExportedInterface:(id)a1;
- (BOOL)requiresExtensionContextForViewControllerOperator:(id)a0;
- (void)dealloc;
- (BOOL)_tryRetain;
- (BOOL)isExtensionServiceViewControllerOperator:(id)a0;
- (oneway void)release;

@end
