@class NSString;

@interface INPlayVoicemailIntent : INIntent <INPlayVoicemailIntentExport>

@property (readonly, copy, nonatomic) NSString *callRecordIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (id)initWithCallRecordIdentifier:(id)a0;
- (void)setVerb:(id)a0;
- (void)_setMetadata:(id)a0;
- (void)setCallRecordIdentifier:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (void)setDomain:(id)a0;

@end
