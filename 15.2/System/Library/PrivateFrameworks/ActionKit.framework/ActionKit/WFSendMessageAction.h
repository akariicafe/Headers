@interface WFSendMessageAction : WFHandleSystemIntentAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void)runAsynchronouslyWithInput:(id)a0;
- (void)initializeParameters;
- (BOOL)skipsProcessingHiddenParameters;
- (BOOL)opensInApp;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;
- (BOOL)shouldForceHandleInSiri:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (id)minimumSupportedClientVersion;
- (id)localizedKeyParameterDisplayName;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (id)generatedResourceNodes;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (id)actionForAppIdentifier:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)selectedAppDidChange;
- (void)getRecipients:(id /* block */)a0;
- (void)getContentFromInput:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleWatchResponse:(id)a0;
- (BOOL)isMessagesAppSelected;
- (void)getAttachmentFromInput:(id)a0 completionHandler:(id /* block */)a1;
- (id)recipientsParameter;
- (BOOL)isPhotoOrVideo:(id)a0;

@end
