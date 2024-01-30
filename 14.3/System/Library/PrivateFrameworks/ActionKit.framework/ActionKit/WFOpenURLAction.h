@interface WFOpenURLAction : WFHandleCustomIntentAction

- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;
- (id)generatedAccessResource;
- (BOOL)requiresRemoteExecution;
- (BOOL)populatesInputFromInputParameter;

@end
