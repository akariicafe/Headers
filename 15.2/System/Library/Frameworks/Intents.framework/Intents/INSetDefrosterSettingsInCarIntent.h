@class NSNumber, INSpeakableString, NSString;

@interface INSetDefrosterSettingsInCarIntent : INIntent <INSetDefrosterSettingsInCarIntentExport>

@property (readonly, copy, nonatomic) NSNumber *enable;
@property (readonly, nonatomic) long long defroster;
@property (readonly, copy, nonatomic) INSpeakableString *carName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)setVerb:(id)a0;
- (void)_setMetadata:(id)a0;
- (void)setEnable:(id)a0;
- (id)initWithEnable:(id)a0 defroster:(long long)a1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (void)setDefroster:(long long)a0;
- (void)setDomain:(id)a0;
- (void)setCarName:(id)a0;
- (id)initWithEnable:(id)a0 defroster:(long long)a1 carName:(id)a2;

@end
