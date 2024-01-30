@interface WFCreateNoteAction : WFHandleSystemIntentAction

+ (id)userInterfaceProtocol;
+ (void)getNoteContentFromInput:(id)a0 includingImages:(BOOL)a1 actionName:(id)a2 completionHandler:(id /* block */)a3;

- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)inputPassthrough;
- (BOOL)skipsProcessingHiddenParameters;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;
- (void)getOutputFromIntentResponse:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)requiresRemoteExecution;
- (id)localizedKeyParameterDisplayName;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (id)prioritizedParameterKeysForRemoteExecution;
- (id)inputContentClasses;
- (id)targetContentAttribution;
- (void)selectedAppDidChange;
- (id)groupParameter;

@end
