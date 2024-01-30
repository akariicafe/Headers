@interface WFSendEmailAction : WFHandleCustomIntentAction

@property (nonatomic, getter=isContentManaged) BOOL contentManaged;

+ (id)userInterfaceProtocol;

- (void)runAsynchronouslyWithInput:(id)a0;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;
- (id)generatedAccessResource;
- (BOOL)parameterCombinationForIntentSupportsBackgroundExecution:(id)a0;
- (BOOL)requiresRemoteExecution;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)a0 forParameter:(id)a1;
- (id)prioritizedParameterKeysForRemoteExecution;
- (BOOL)populatesInputFromInputParameter;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (id)targetContentAttribution;
- (id)requiredResourcesForIntentAvailableResource;
- (void)prepareEmailContentFromInput:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)checkManagementLevel:(id)a0 error:(id *)a1;
- (void)generateBodyFromCollection:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleWatchResponse:(id)a0;
- (void)getRecipientsFromParameterValue:(id)a0 completion:(id /* block */)a1;
- (void)generateFilesFromCollection:(id)a0 completion:(id /* block */)a1;
- (void)generateEmailFromInput:(id)a0 completionHandler:(id /* block */)a1;

@end
