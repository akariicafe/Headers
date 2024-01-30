@class NSArray, NSString, INMediaSearch, INPrivateSearchForMediaIntentData;

@interface INSearchForMediaIntent : INIntent <INSearchForMediaIntentExport>

@property (readonly, copy, nonatomic) NSArray *mediaItems;
@property (readonly, copy, nonatomic) INMediaSearch *mediaSearch;
@property (copy, nonatomic) INPrivateSearchForMediaIntentData *privateSearchForMediaIntentData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (void)setMediaItems:(id)a0;
- (void)setMediaSearch:(id)a0;
- (BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
- (id)initWithMediaItems:(id)a0 mediaSearch:(id)a1;
- (id)domain;
- (void)setVerb:(id)a0;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)_dictionaryRepresentation;

@end
