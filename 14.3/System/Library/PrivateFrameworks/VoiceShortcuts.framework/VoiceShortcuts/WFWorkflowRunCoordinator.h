@class NSString, NSMutableDictionary, WFDialogPresentationManager, NSHashTable, WFUserNotificationManager, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, VCDatabaseProvider;

@interface WFWorkflowRunCoordinator : NSObject <WFDialogPresentationManagerDelegate, WFOutOfProcessWorkflowControllerDelegate, UNUserNotificationCenterDelegate>

@property (readonly, nonatomic) id<VCDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) NSMutableDictionary *runningWorkflowCompletionHandlers;
@property (readonly, nonatomic) NSMutableDictionary *runningWorkflowControllers;
@property (readonly, nonatomic) NSMutableArray *queuedPersistentRunRequests;
@property (readonly, nonatomic) WFDialogPresentationManager *dialogPresentationManager;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) WFUserNotificationManager *userNotificationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)errorWithActionCategory;
+ (id)errorCategory;
+ (long long)outOfProcessWorkflowControllerPresentationModeFromVCShortcutPresentationMode:(unsigned long long)a0;

- (void)removeStaleNotifications;
- (void)queue_notifyObserversWorkflowDidFinishRunningWithError:(id)a0 context:(id)a1 cancelled:(BOOL)a2;
- (id)unsupportedDialogResponseWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)outOfProcessWorkflowController:(id)a0 didStartFromWorkflowReference:(id)a1 dialogAttribution:(id)a2;
- (void)presentationManager:(id)a0 pauseExecutionOfWorkflowWithContext:(id)a1;
- (void)runWorkflowWithRequest:(id)a0 context:(id)a1;
- (void)addObserver:(id)a0;
- (BOOL)queue_callWorkflowCompletionForContext:(id)a0 withError:(id)a1 cancelled:(BOOL)a2;
- (void)enqueueDialog:(id)a0 runningContext:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)shortcutWithIdentifierIsRunning:(id)a0;
- (void)showSingleStepCompletionWithWebClipMetadata:(id)a0 completion:(id /* block */)a1;
- (void)presentationManager:(id)a0 cancelExecutionOfWorkflowWithContext:(id)a1;
- (void)runNextPersistentWorkflowIfAvailable;
- (id)initWithUserNotificationManager:(id)a0 databaseProvider:(id)a1;
- (void)dismissPresentedContentWithCompletion:(id /* block */)a0;
- (id)bestErrorFromError:(id)a0;
- (void)resumeWorkflowFromContext:(id)a0 presentationMode:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)stopRunningWorkflowWithRunningContext:(id)a0;
- (void)postNotificationAboutFailure:(id)a0 inWorkflow:(id)a1 dialogAttribution:(id)a2;
- (id)allRunningWorkflows;
- (void)runWorkflowWithRequest:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)queue_finishWorkflowWithContext:(id)a0 error:(id)a1 cancelled:(BOOL)a2;
- (void)outOfProcessWorkflowController:(id)a0 didFinishWithError:(id)a1 cancelled:(BOOL)a2 reference:(id)a3 dialogAttribution:(id)a4;
- (void)queue_runWorkflowWithRequest:(id)a0 context:(id)a1 error:(out id *)a2 completion:(id /* block */)a3;
- (id)queue_workflowControllerWithContext:(id)a0;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)queue_contextForWorkflowController:(id)a0;

@end
