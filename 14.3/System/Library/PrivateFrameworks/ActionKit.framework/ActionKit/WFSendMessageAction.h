@interface WFSendMessageAction : WFHandleSystemIntentAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)skipsProcessingHiddenParameters;
- (BOOL)opensInApp;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;
- (id)localizedKeyParameterDisplayName;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)a0 forParameter:(id)a1;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (id)minimumSupportedClientVersion;
- (void)getRecipients:(id /* block */)a0;
- (void)getContentFromInput:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleWatchResponse:(id)a0;

@end
