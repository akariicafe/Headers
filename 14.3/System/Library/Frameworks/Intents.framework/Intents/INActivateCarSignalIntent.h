@class INSpeakableString, NSString;

@interface INActivateCarSignalIntent : INIntent <INActivateCarSignalIntentExport>

@property (readonly, copy, nonatomic) INSpeakableString *carName;
@property (readonly, nonatomic) unsigned long long signals;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (void)setCarName:(id)a0;
- (id)domain;
- (void)setVerb:(id)a0;
- (id)initWithCarName:(id)a0 signals:(unsigned long long)a1;
- (void)setSignals:(unsigned long long)a0;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)_dictionaryRepresentation;

@end
