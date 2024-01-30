@class NSString, WFIntentDynamicResolver, NSArray, INIntentResponseCodableDescription, NSDictionary, INIntentExecutionInfo, WFIntentDynamicResolutionRequest, INIntentCodableDescription, INSchema;

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
}

@property (readonly, copy, nonatomic) INIntentExecutionInfo *intentExecutionInfo;
@property (readonly, nonatomic) INSchema *schema;
@property (readonly, copy, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) WFIntentDynamicResolver *dynamicResolver;
@property (retain, nonatomic) WFIntentDynamicResolutionRequest *lastDynamicResolutionRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)intentCategory;
- (BOOL)isDiscontinued;
- (id)descriptionDictionary;
- (id)intentDescription;
- (id)codableDescription;
- (void).cxx_destruct;
- (id)slots;
- (id)localizedName;
- (id)name;
- (id)inputDictionary;
- (id)outputDictionary;
- (void)initializeParameters;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 stringLocalizer:(id)a3;
- (id)generatedIntentWithIdentifier:(id)a0 input:(id)a1 processedParameters:(id)a2 error:(id *)a3;
- (id)createResourceManager;
- (void)startExecutingIntent:(id)a0;
- (void)parameterDefaultSerializedRepresentationDidChange:(id)a0;
- (id)localizedKeyParameterDisplayName;
- (id)copyWithSerializedParameters:(id)a0;
- (id)createStateForParameter:(id)a0 fromSerializedRepresentation:(id)a1;
- (id)parameterKeysIgnoredForParameterSummary;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (BOOL)shouldInsertExpandingParameterForParameter:(id)a0;
- (BOOL)populatesInputFromInputParameter;
- (void)configureResourcesForParameter:(id)a0;
- (id)parameterDefinitions;
- (void)loadPossibleStatesForEnumeration:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (void)loadDefaultSerializedRepresentationForEnumeration:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)enumerationAllowsMultipleValues:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (void)generateSkeletonIntentForDynamicResolver:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)resolveOptionsForUserInput:(id)a0 forDynamicResolveParameter:(id)a1 completion:(id /* block */)a2;
- (void)localizedDisambiguationPromptForItems:(id)a0 intent:(id)a1 dynamicResolveParameter:(id)a2 completion:(id /* block */)a3;
- (id)localizedConfigurationPromptDialogForPamameter:(id)a0;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 schema:(id)a3 className:(id)a4 bundleIdentifier:(id)a5 stringLocalizer:(id)a6;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 schema:(id)a3 resolvedIntentExecutionInfo:(id)a4 stringLocalizer:(id)a5;
- (BOOL)shouldCreateIntentAvailableResource;
- (id)requiredResourcesForIntentAvailableResource;
- (id)parametersByIntentSlotName;
- (void)setupParameter:(id)a0;
- (id)createBundleAccessGrant;
- (id)responseCodableDescription;
- (id)parameterSummaryDefinition;
- (id)prettyErrorForIntentsExtensionError:(id)a0;
- (void)setUpResolverIfNeededForParameter:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)dynamicResolveParameterDidEndResolutionSession:(id)a0;

@end
