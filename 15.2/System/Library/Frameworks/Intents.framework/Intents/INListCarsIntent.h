@class NSString;

@interface INListCarsIntent : INIntent <INListCarsIntentExport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)a0 context:(unsigned long long)a1 error:(id *)a2;
- (void)setVerb:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)init;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (void)setDomain:(id)a0;

@end
