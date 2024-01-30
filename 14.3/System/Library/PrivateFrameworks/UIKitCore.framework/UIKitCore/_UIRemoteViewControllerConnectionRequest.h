@class NSUUID, NSString, NSArray, _UIRemoteViewControllerConnectionInfo, UITraitCollection, _UIRemoteViewService, NSError, NSObject, _UIAsyncInvocation;
@protocol OS_dispatch_queue, _UIViewServiceDeputyXPCInterface;

@interface _UIRemoteViewControllerConnectionRequest : NSObject {
    _UIRemoteViewService *_service;
    id /* block */ _handler;
    NSString *_viewServiceBundleIdentifier;
    NSString *_viewControllerClassName;
    NSUUID *_contextToken;
    NSArray *_serializedAppearanceCustomizations;
    UITraitCollection *_traits;
    id _exportedHostingObject;
    Class _remoteViewControllerClass;
    id<_UIViewServiceDeputyXPCInterface> _serviceViewControllerDeputyInterface;
    _UIAsyncInvocation *_cancelInvocationForCurrentOperation;
    _UIRemoteViewControllerConnectionInfo *_connectionInfo;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isCancelledOrComplete;
    NSError *_error;
    _UIAsyncInvocation *_requestCancellationInvocation;
}

+ (id)requestViewControllerWithService:(id)a0 serializedAppearanceCustomizations:(id)a1 traitCollection:(id)a2 exportedHostingObject:(id)a3 remoteViewControllerClass:(Class)a4 serviceViewControllerDeputyInterface:(id)a5 connectionHandler:(id /* block */)a6;
+ (id)__requestRemoteViewController:(id)a0 service:(id)a1 fromServiceWithBundleIdentifier:(id)a2 serializedAppearanceCustomizations:(id)a3 traitCollection:(id)a4 exportedHostingObject:(id)a5 serviceViewControllerDeputyInterface:(id)a6 connectionHandler:(id /* block */)a7;
+ (id)requestViewController:(id)a0 fromServiceWithBundleIdentifier:(id)a1 serializedAppearanceCustomizations:(id)a2 traitCollection:(id)a3 exportedHostingObject:(id)a4 serviceViewControllerDeputyInterface:(id)a5 connectionHandler:(id /* block */)a6;

- (id)_cancelWithError:(id)a0;
- (void)_cancelUnconditionallyThen:(id /* block */)a0;
- (void)_connectToServiceViewController;
- (void)_didFinishEstablishingConnection;
- (void)_connectToTextEffectsOperator;
- (void).cxx_destruct;
- (void)_sendServiceTextEffectsRequest;
- (void)_connectToViewService;
- (void)dealloc;
- (void)_connectToPlugInKitService;
- (void)_sendServiceViewControllerRequest;
- (void)_connectToDeputyWithInterface:(id)a0 fromExportedHostingObject:(id)a1 successHandler:(id /* block */)a2;
- (void)_connectToViewControllerOperator;
- (void)_connectToViewControllerControlMessageDeputy;

@end
