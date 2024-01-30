@class NSUUID, NSString, NSExtension, WFTimer, WFWorkflowReference, WFDialogAttribution, WFActionUserInterfaceListener, WFWorkflowRunningContext;
@protocol WFOutOfProcessWorkflowControllerDelegate, WFUserInterfaceHost;

@interface WFOutOfProcessWorkflowController : NSObject <WFOutOfProcessWorkflowControllerHost, WFTimerHandler>

@property (readonly, nonatomic) long long environment;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) NSUUID *extensionRequestIdentifier;
@property (retain, nonatomic) id<WFUserInterfaceHost> userInterfaceHost;
@property (retain, nonatomic) WFActionUserInterfaceListener *actionInterfaceListener;
@property (retain, nonatomic) WFWorkflowReference *workflowReference;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *currentWorkflowName;
@property (copy, nonatomic) WFDialogAttribution *currentDialogAttribution;
@property (retain, nonatomic) WFTimer *timer;
@property (nonatomic) BOOL isPersonalAutomation;
@property (weak, nonatomic) id<WFOutOfProcessWorkflowControllerDelegate> delegate;
@property (nonatomic) long long presentationMode;
@property (readonly, copy, nonatomic) WFWorkflowRunningContext *runningContext;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)stop;
- (void)timerDidFire:(id)a0;
- (void)createSleepWorkflow:(id)a0 completion:(id /* block */)a1;
- (id)extensionContext;
- (void)handleXPCConnectionInterruption;
- (id)extensionInterface;
- (id)initWithEnvironment:(long long)a0 runningContext:(id)a1 presentationMode:(long long)a2;
- (void)stopExtension;
- (void)populateSleepWorkflowsFromWorkflowReferences:(id)a0 completion:(id /* block */)a1;
- (void)pauseWorkflowAndWriteStateToDisk;
- (BOOL)resumeRunningWithError:(out id *)a0;
- (BOOL)runWorkflowWithRequest:(id)a0 error:(out id *)a1;
- (void)workflowDidStartFromWorkflowReference:(id)a0 attribution:(id)a1;
- (void)workflowDidFinishRunningWithError:(id)a0 cancelled:(BOOL)a1 reference:(id)a2;
- (void)handleIncomingFileForRemoteExecutionWithURL:(id)a0 withIdentifier:(id)a1;
- (BOOL)timerShouldStart:(id)a0;
- (BOOL)runActionWithRunRequestData:(id)a0 error:(out id *)a1;
- (void)findExtensionInterface:(id /* block */)a0 error:(out id *)a1;
- (void)reportFinishToDelegateWithError:(id)a0 cancelled:(BOOL)a1 reference:(id)a2 dialogAttribution:(id)a3;

@end
