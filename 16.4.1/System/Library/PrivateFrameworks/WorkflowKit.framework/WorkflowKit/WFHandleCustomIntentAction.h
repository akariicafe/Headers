@class INIntentDescriptor, NSString, WFIntentDynamicResolver, NSArray, INIntentResponseCodableDescription, NSDictionary, WFIntentDynamicResolutionRequest, INIntentCodableDescription, INSchema;

@interface WFHandleCustomIntentAction : WFHandleIntentAction <WFCustomIntentDynamicEnumerationDataSource, WFDynamicResolveParameterDataSource, WFIntentDynamicResolverDataSource> {
    INIntentCodableDescription *_codableDescription;
    INIntentResponseCodableDescription *_responseCodableDescription;
    NSString *_localizedName;
    NSString *_localizedKeyParameterDisplayName;
    NSDictionary *_descriptionDictionary;
    NSArray *_parameterDefinitions;
    id _parameterSummaryDefinition;
    NSDictionary *_inputDictionary;
    NSDictionary *_outputDictionary;
    INIntentDescriptor *_intentDescriptor;
}

@property (readonly, nonatomic) INSchema *schema;
@property (readonly, copy, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) WFIntentDynamicResolver *dynamicResolver;
@property (retain, nonatomic) WFIntentDynamicResolutionRequest *lastDynamicResolutionRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDiscontinued;
- (id)localizedName;
- (id)intentDescription;
- (id)descriptionDictionary;
- (long long)intentCategory;
- (id)resolver;
- (void).cxx_destruct;
- (id)name;
- (id)codableDescription;
- (id)parameterDefinitions;
- (id)inputDictionary;
- (id)outputDictionary;
- (id)slots;
- (void)configureResourcesForParameter:(id)a0;
- (void)setupParameter:(id)a0;
- (id)actionForAppIdentifier:(id)a0;
- (id)copyWithSerializedParameters:(id)a0;
- (id)createBundleAccessGrant;
- (id)createStateForParameter:(id)a0 fromSerializedRepresentation:(id)a1;
- (void)dynamicResolveParameterDidEndResolutionSession:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (BOOL)enumerationAllowsMultipleValues:(id)a0;
- (void)generateSkeletonIntentForDynamicResolver:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)generatedIntentWithIdentifier:(id)a0 input:(id)a1 processedParameters:(id)a2 error:(id *)a3;
- (id)generatedResourceNodes;
- (BOOL)hasLocationParameter;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 schema:(id)a3 className:(id)a4 bundleIdentifier:(id)a5 stringLocalizer:(id)a6;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 schema:(id)a3 resolvedIntentDescriptor:(id)a4 stringLocalizer:(id)a5;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 stringLocalizer:(id)a3;
- (void)initializeParameters;
- (id)intentDescriptor;
- (BOOL)intentDescriptorIsSyncedFromOtherDevices;
- (void)loadDefaultSerializedRepresentationForEnumeration:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadPossibleStatesForEnumeration:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (id)localizedConfigurationPromptDialogForPamameter:(id)a0;
- (void)localizedDisambiguationPromptForItems:(id)a0 intent:(id)a1 dynamicResolveParameter:(id)a2 completion:(id /* block */)a3;
- (id)localizedKeyParameterDisplayName;
- (void)parameterDefaultSerializedRepresentationDidChange:(id)a0;
- (id)parameterKeysIgnoredForParameterSummary;
- (id)parameterSummaryDefinition;
- (id)parametersByIntentSlotName;
- (BOOL)populatesInputFromInputParameter;
- (id)prettyErrorForIntentsExtensionError:(id)a0;
- (id)requiredResourcesForIntentAvailableResource;
- (void)resolveOptionsForUserInput:(id)a0 forDynamicResolveParameter:(id)a1 completion:(id /* block */)a2;
- (id)responseCodableDescription;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (void)setIntentDescriptor:(id)a0;
- (void)setUpResolverIfNeededForParameter:(id)a0 withCompletionBlock:(id /* block */)a1;
- (BOOL)shouldInsertExpandingParameterForParameter:(id)a0;
- (void)startExecutingIntent:(id)a0;
- (id)titleForINShortcut:(id)a0;

@end
