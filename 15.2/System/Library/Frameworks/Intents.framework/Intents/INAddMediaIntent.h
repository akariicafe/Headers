@class INPrivateAddMediaIntentData, NSArray, NSString, INMediaSearch, INMediaDestination;

@interface INAddMediaIntent : INIntent <INAddMediaIntentExport>

@property (readonly, copy, nonatomic) NSArray *mediaItems;
@property (readonly, copy, nonatomic) INMediaSearch *mediaSearch;
@property (readonly, copy, nonatomic) INMediaDestination *mediaDestination;
@property (copy, nonatomic) INPrivateAddMediaIntentData *privateAddMediaIntentData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)setMediaItems:(id)a0;
- (void)setMediaSearch:(id)a0;
- (void)setVerb:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
- (void)setMediaDestination:(id)a0;
- (id)initWithMediaItems:(id)a0 mediaSearch:(id)a1 mediaDestination:(id)a2;
- (void)setDomain:(id)a0;

@end
