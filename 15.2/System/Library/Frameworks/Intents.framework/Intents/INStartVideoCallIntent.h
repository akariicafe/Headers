@class NSArray, NSString;

@interface INStartVideoCallIntent : INIntent <INStartVideoCallIntentExport>

@property (readonly, copy, nonatomic) NSArray *contacts;
@property (nonatomic) long long audioRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (void)setContacts:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (BOOL)configureAttributeSet:(id)a0 includingData:(BOOL)a1;
- (void)setVerb:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)initWithContacts:(id)a0;
- (id)_titleWithLocalizer:(id)a0 fromBundleURL:(id)a1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (void)setDomain:(id)a0;
- (id)_spotlightContentType;

@end
