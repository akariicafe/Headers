@class INSpeakableString, NSString;

@interface INRunWorkflowIntent : INIntent <INRunWorkflowIntentExport>

@property (readonly, copy, nonatomic) INSpeakableString *workflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)setVerb:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (id)initWithWorkflow:(id)a0;
- (void)setWorkflow:(id)a0;
- (void)setDomain:(id)a0;

@end
