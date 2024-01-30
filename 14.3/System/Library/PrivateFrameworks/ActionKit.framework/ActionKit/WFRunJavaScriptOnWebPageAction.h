@class NSString;

@interface WFRunJavaScriptOnWebPageAction : WFAction <WFRemoteQuarantinePolicyEvaluatorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runAsynchronouslyWithInput:(id)a0;
- (id)userInterfaceToPresentAlertForEvaluator:(id)a0;
- (void)evaluateQuarantineWithJavaScript:(id)a0 webPage:(id)a1 completionHandler:(id /* block */)a2;
- (void)getWebPageFromInput:(id)a0 completionHandler:(id /* block */)a1;
- (id)_getErrorFromScript:(id)a0;

@end
