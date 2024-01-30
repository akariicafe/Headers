@class NSXPCListenerEndpoint, NSXPCConnection;
@protocol WFUIPresenterInterface, WFUIPresenterDelegate;

@interface WFUIPresenter : NSObject

@property (class, readonly, nonatomic) WFUIPresenter *defaultPresenter;

@property (readonly, nonatomic) id<WFUIPresenterInterface> localPresenter;
@property (nonatomic) BOOL connected;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<WFUIPresenterDelegate> delegate;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;

- (id)initWithMachServiceName:(id)a0;
- (void)showDialogRequest:(id)a0 runningContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)beginPersistentModeWithRunningContext:(id)a0 attributions:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithLocalPresenter:(id)a0;
- (void)completePersistentModeWithSuccess:(BOOL)a0 runningContext:(id)a1 completion:(id /* block */)a2;
- (id)initWithConnection:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)dismissPresentedContentForRunningContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)presenterWithErrorHandler:(id /* block */)a0;
- (void)resumeConnectionIfNecessary;
- (BOOL)showWebPage:(id)a0 completionHandler:(id /* block */)a1;

@end
