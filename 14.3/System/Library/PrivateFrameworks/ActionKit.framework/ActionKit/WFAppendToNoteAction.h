@interface WFAppendToNoteAction : WFHandleSystemIntentAction

- (BOOL)skipsProcessingHiddenParameters;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;
- (void)getOutputFromIntentResponse:(id)a0 completionHandler:(id /* block */)a1;
- (id)targetContentAttribution;

@end
