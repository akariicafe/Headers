@class NSXPCListener, NSString, INIntent;
@protocol WFRelevanceEngineRunnerClientDelegate;

@interface WFRelevanceEngineRunnerClient : WFWorkflowRunnerClient <NSXPCListenerDelegate, WFUIPresenterInterface>

@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSXPCListener *dialogRequestListener;
@property (weak, nonatomic) id<WFRelevanceEngineRunnerClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showDialogRequest:(id)a0 runningContext:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void).cxx_destruct;
- (void)dismissPresentedContentForRunningContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleWorkflowRunResult:(id)a0 completion:(id /* block */)a1;
- (void)stop;
- (id)initWithIntent:(id)a0 delegateQueue:(id)a1;
- (id)intentExecutorIntentResponseFromError:(id)a0;

@end
