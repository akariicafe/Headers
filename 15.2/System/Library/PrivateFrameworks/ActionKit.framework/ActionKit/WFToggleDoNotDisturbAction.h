@interface WFToggleDoNotDisturbAction : WFHandleCustomIntentAction

- (id)appIdentifier;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;
- (id)appResource;
- (id)contentDestinationWithError:(id *)a0;

@end
