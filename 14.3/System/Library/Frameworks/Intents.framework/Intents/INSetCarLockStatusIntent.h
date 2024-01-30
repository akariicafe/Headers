@class NSNumber, INSpeakableString, NSString;

@interface INSetCarLockStatusIntent : INIntent <INSetCarLockStatusIntentExport>

@property (readonly, copy, nonatomic) NSNumber *locked;
@property (readonly, copy, nonatomic) INSpeakableString *carName;
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
- (void)setLocked:(id)a0;
- (id)initWithLocked:(id)a0 carName:(id)a1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)_dictionaryRepresentation;

@end
