@class NSString, NSXPCConnection, _UIViewServiceDeputyManager, _UIAsyncInvocation, NSObject, _UIViewServiceSessionManager;
@protocol OS_dispatch_queue;

@interface _UIViewServiceSession : NSObject <NSXPCConnectionDelegate, _UIViewServiceDeputyManagerDelegate, _UIViewServiceViewControllerOperatorDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    _UIViewServiceDeputyManager *_deputyManager;
    _UIAsyncInvocation *_invalidationInvocation;
}

@property (copy, nonatomic) id /* block */ terminationHandler;
@property (readonly, weak) _UIViewServiceSessionManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sessionWithConnection:(id)a0 manager:(id)a1;

- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)dealloc;
- (void)_objc_initiateDealloc;
- (void)_invalidateUnconditionallyThen:(id /* block */)a0;
- (id)containingViewControllerClassNameForViewControllerOperator:(id)a0;
- (void)deputy:(id)a0 didFailWithError:(id)a1;
- (void)deputyManager:(id)a0 didUpdateExportedInterface:(id)a1;
- (BOOL)isExtensionServiceViewControllerOperator:(id)a0;
- (id)mainStoryboardNameForViewControllerOperator:(id)a0;
- (void)registerDeputyClass:(Class)a0 withConnectionHandler:(id /* block */)a1;
- (BOOL)requiresExtensionContextForViewControllerOperator:(id)a0;
- (void)unregisterDeputyClass:(Class)a0;
- (id)viewControllerClassNameForViewControllerOperator:(id)a0;
- (void)viewControllerOperator:(id)a0 didCreateServiceViewController:(id)a1 contextToken:(id)a2;
- (void)viewControllerOperator:(id)a0 didCreateServiceViewControllerOfClass:(Class)a1;

@end
