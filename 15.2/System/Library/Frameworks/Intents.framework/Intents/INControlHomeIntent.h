@class NSArray, INHomeUserTask, NSString, INDateComponentsRange;

@interface INControlHomeIntent : INIntent <INControlHomeIntentExport>

@property (readonly, copy, nonatomic) INHomeUserTask *userTask;
@property (readonly, copy, nonatomic) NSArray *filters;
@property (readonly, copy, nonatomic) INDateComponentsRange *time;
@property (readonly, copy, nonatomic) NSArray *contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setContents:(id)a0;
- (id)_metadata;
- (BOOL)_hasTitle;
- (void)setTime:(id)a0;
- (void)setVerb:(id)a0;
- (void)setFilters:(id)a0;
- (void)_setMetadata:(id)a0;
- (void)setUserTask:(id)a0;
- (id)initWithUserTask:(id)a0 filters:(id)a1 time:(id)a2;
- (id)initWithUserTask:(id)a0 filters:(id)a1;
- (id)_initWithIdentifier:(id)a0 backingStore:(id)a1 schema:(id)a2 error:(id *)a3;
- (id)_titleWithLocalizer:(id)a0 fromBundleURL:(id)a1;
- (id)_subtitleWithLocalizer:(id)a0 fromBundleURL:(id)a1;
- (id)_typedBackingStore;
- (id)_categoryVerb;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (id)initWithContents:(id)a0;
- (void)setDomain:(id)a0;

@end
