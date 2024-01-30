@class NSString;

@interface INPlayAudioMessageIntent : INIntent <INPlayAudioMessageIntentExport>

@property (readonly, copy, nonatomic) NSString *messageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (id)initWithMessageIdentifier:(id)a0;
- (void)setDomain:(id)a0;
- (id)domain;
- (void)setVerb:(id)a0;
- (void)setMessageIdentifier:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)_dictionaryRepresentation;

@end
