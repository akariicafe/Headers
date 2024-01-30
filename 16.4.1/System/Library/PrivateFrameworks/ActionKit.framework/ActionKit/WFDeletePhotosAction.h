@interface WFDeletePhotosAction : WFHandleCustomIntentAction

- (id)contentDestinationWithError:(id *)a0;
- (BOOL)inputPassthrough;
- (BOOL)populatesInputFromInputParameter;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;

@end
