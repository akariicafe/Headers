@class NSArray, NSString, INDateComponentsRange;

@interface INShowHomeIntent : INIntent <INShowHomeIntentExport>

@property (readonly, copy, nonatomic) NSArray *filters;
@property (readonly, copy, nonatomic) INDateComponentsRange *time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)setTime:(id)a0;
- (void)setVerb:(id)a0;
- (void)setFilters:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (void)setDomain:(id)a0;
- (id)initWithFilters:(id)a0 time:(id)a1;

@end
