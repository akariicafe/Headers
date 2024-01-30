@interface WFCreateNoteAction : WFHandleSystemIntentAction

+ (id)userInterfaceProtocol;
+ (void)getNoteContentFromInput:(id)a0 includingImages:(BOOL)a1 actionName:(id)a2 completionHandler:(id /* block */)a3;

- (void)runAsynchronouslyWithInput:(id)a0;
- (void)initializeParameters;
- (BOOL)inputPassthrough;
- (BOOL)skipsProcessingHiddenParameters;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;
- (void)getOutputFromIntentResponse:(id)a0 completionHandler:(id /* block */)a1;
- (id)contentDestinationWithError:(id *)a0;
- (BOOL)requiresRemoteExecution;
- (id)localizedKeyParameterDisplayName;
- (id)inputContentClasses;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (id)prioritizedParameterKeysForRemoteExecution;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)selectedAppDidChange;
- (void)showUIWithArchivedItems:(id)a0 isContentManaged:(BOOL)a1 extensionBundleIdentifier:(id)a2;
- (id)groupParameter;

@end
