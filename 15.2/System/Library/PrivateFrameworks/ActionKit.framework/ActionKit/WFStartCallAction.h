@interface WFStartCallAction : WFHandleSystemIntentAction

- (id)icon;
- (long long)callCapability;
- (long long)preferredCallProvider;
- (BOOL)skipsProcessingHiddenParameters;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;
- (id)generatedIntentWithIdentifier:(id)a0 input:(id)a1 processedParameters:(id)a2 error:(id *)a3;
- (BOOL)shouldOpenAppThroughSiriForIntent:(id)a0 intentResponse:(id)a1;
- (id)contentDestinationWithError:(id *)a0;
- (id)errorFromResolutionResult:(id)a0 forSlot:(id)a1 onIntent:(id)a2;
- (id)errorFromConfirmResponse:(id)a0 intent:(id)a1;
- (id)errorFromHandleResponse:(id)a0 intent:(id)a1;
- (id)localizedKeyParameterDisplayName;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)supportedIdentifiers;
- (id)intentDescriptorWithIntentClassName:(id)a0 launchableBundleId:(id)a1;
- (id)intentDescriptorFromParameterState;
- (id)localizedCallServiceName;
- (id)appConfigurationRequiredError;
- (id)callingServiceNotAvailableError;
- (id)contactNotSupportedByAppErrorForContacts:(id)a0;
- (id)airplaneModeError;
- (id)errorFromStartCallResponse:(id)a0 intent:(id)a1;
- (BOOL)isRunningOniPad;

@end
