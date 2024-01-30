@interface WFToggleDoNotDisturbAction : WFHandleCustomIntentAction

- (id)appIdentifier;
- (id)appResource;
- (id)contentDestinationWithError:(id *)a0;
- (void)generatePopulatedIntentFromInput:(id)a0 processedParameters:(id)a1 completion:(id /* block */)a2;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;

@end
