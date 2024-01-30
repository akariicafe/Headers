@class WFDialogRequest, NSString, WFWorkflowRunningContext, VCVoiceShortcutClient, NSObject, WFScreenOnObserver;
@protocol OS_dispatch_queue;

@interface WFDaemonDialogPresenter : NSObject <WFScreenOnObserverDelegate, WFApplicationStateObserver, WFDialogPresenter>

@property (readonly, nonatomic) WFScreenOnObserver *screenOnObserver;
@property (readonly, nonatomic) WFWorkflowRunningContext *runningContext;
@property (readonly, nonatomic) VCVoiceShortcutClient *voiceShortcutClient;
@property (retain, nonatomic) WFDialogRequest *suspendedRequest;
@property (nonatomic) BOOL screenDidTurnOffDuringActiveRequest;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ suspendedRequestCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissPresentedContentWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)screenOnStateDidChange:(id)a0;
- (void)showDialogRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)applicationContext:(id)a0 applicationStateDidChange:(long long)a1;
- (id)initWithRunningContext:(id)a0;
- (void)beginObservingApplicationStateIfNecessary;
- (void)stopObservingApplicationStateIfNecessary;

@end
