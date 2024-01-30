@interface WFStartCallAction : WFHandleSystemIntentAction

- (id)icon;
- (long long)callCapability;
- (long long)preferredCallProvider;
- (id)supportedIdentifiers;
- (BOOL)isRunningOniPad;
- (BOOL)skipsProcessingHiddenParameters;
- (id)errorFromHandleResponse:(id)a0 intent:(id)a1;
- (id)contentDestinationWithError:(id *)a0;
- (id)errorFromConfirmResponse:(id)a0 intent:(id)a1;
- (id)errorFromResolutionResult:(id)a0 forSlot:(id)a1 onIntent:(id)a2;
- (id)generatedIntentWithIdentifier:(id)a0 input:(id)a1 processedParameters:(id)a2 error:(id *)a3;
- (id)intentDescriptorFromParameterState;
- (id)intentDescriptorWithIntentClassName:(id)a0 launchableBundleId:(id)a1;
- (id)localizedKeyParameterDisplayName;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (BOOL)shouldOpenAppThroughSiriForIntent:(id)a0 intentResponse:(id)a1;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)callingServiceNotAvailableError;
- (id)airplaneModeError;
- (id)appConfigurationRequiredError;
- (id)contactNotSupportedByAppErrorForContacts:(id)a0;
- (id)errorFromStartCallResponse:(id)a0 intent:(id)a1;
- (id)localizedCallServiceName;

@end
