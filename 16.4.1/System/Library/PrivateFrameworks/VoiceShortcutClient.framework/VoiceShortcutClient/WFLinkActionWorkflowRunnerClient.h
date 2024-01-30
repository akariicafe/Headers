@class NSString;

@interface WFLinkActionWorkflowRunnerClient : WFWorkflowRunnerClient <LNActionExecutorDelegate>

@property (retain, nonatomic) WFLinkActionWorkflowRunnerClient *retainedSelf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)executor:(id)a0 needsValueWithRequest:(id)a1;
- (void)executor:(id)a0 didFinishWithResult:(id)a1 error:(id)a2;
- (void)executor:(id)a0 needsActionConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsDisambiguationWithRequest:(id)a1;
- (id)initWithIdentifier:(id)a0 action:(id)a1 metadata:(id)a2;

@end
