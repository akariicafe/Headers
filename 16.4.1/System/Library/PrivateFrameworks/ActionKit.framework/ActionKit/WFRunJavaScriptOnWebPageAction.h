@class NSString;

@interface WFRunJavaScriptOnWebPageAction : WFAction <WFRemoteQuarantinePolicyEvaluatorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)name;
- (id)parameterSummary;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)userInterfaceToPresentAlertForEvaluator:(id)a0;
- (id)_getErrorFromScript:(id)a0;
- (void)evaluateQuarantineWithJavaScript:(id)a0 webPageURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)getWebPageFromInput:(id)a0 completionHandler:(id /* block */)a1;
- (id)invalidJavaScriptErrorWithSyntaxErrorString:(id)a0;
- (id)missingCompletionError;
- (id)noWebPageProvidedError;

@end
