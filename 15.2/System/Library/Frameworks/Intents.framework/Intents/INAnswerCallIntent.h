@class NSString;

@interface INAnswerCallIntent : INIntent <INAnswerCallIntentExport>

@property (readonly, nonatomic) long long audioRoute;
@property (readonly, copy, nonatomic) NSString *callIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (void)setAudioRoute:(long long)a0;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (id)initWithAudioRoute:(long long)a0;
- (void)setVerb:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)setCallIdentifier:(id)a0;
- (id)initWithAudioRoute:(long long)a0 callIdentifier:(id)a1;

@end
