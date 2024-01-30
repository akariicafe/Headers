@class INSpeakableString, NSString;

@interface INRunWorkflowIntent : INIntent <INRunWorkflowIntentExport>

@property (readonly, copy, nonatomic) INSpeakableString *workflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (id)initWithWorkflow:(id)a0;
- (id)domain;
- (void)setVerb:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setWorkflow:(id)a0;
- (id)_dictionaryRepresentation;

@end
