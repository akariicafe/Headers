@interface WFSendEmailAction : WFHandleCustomIntentAction

@property (nonatomic, getter=isContentManaged) BOOL contentManaged;

+ (id)userInterfaceProtocol;

- (id)contentDestinationWithError:(id *)a0;
- (BOOL)parameterCombinationForIntentSupportsBackgroundExecution:(id)a0;
- (BOOL)populatesInputFromInputParameter;
- (id)prioritizedParameterKeysForRemoteExecution;
- (id)requiredResourcesForIntentAvailableResource;
- (BOOL)requiresRemoteExecution;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (id)showsWhenRunIfApplicable;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (BOOL)checkManagementLevel:(id)a0 error:(id *)a1;
- (void)generateBodyFromCollection:(id)a0 completionHandler:(id /* block */)a1;
- (void)generateEmailFromInput:(id)a0 completionHandler:(id /* block */)a1;
- (void)generateFilesFromCollection:(id)a0 completion:(id /* block */)a1;
- (void)getRecipientsFromParameterValue:(id)a0 completion:(id /* block */)a1;
- (void)handleWatchResponse:(id)a0;
- (void)prepareEmailContentFromInput:(id)a0 completionHandler:(id /* block */)a1;

@end
