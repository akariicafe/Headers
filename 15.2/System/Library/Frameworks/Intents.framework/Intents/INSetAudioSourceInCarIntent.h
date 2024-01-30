@class NSString;

@interface INSetAudioSourceInCarIntent : INIntent <INSetAudioSourceInCarIntentExport>

@property (readonly, nonatomic) long long audioSource;
@property (readonly, nonatomic) long long relativeAudioSourceReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)setAudioSource:(long long)a0;
- (void)setRelativeAudioSourceReference:(long long)a0;
- (id)initWithAudioSource:(long long)a0 relativeAudioSourceReference:(long long)a1;
- (void)setVerb:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (void)setDomain:(id)a0;

@end
