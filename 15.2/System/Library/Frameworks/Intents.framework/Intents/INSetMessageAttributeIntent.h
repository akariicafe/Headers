@class NSArray, NSString;

@interface INSetMessageAttributeIntent : INIntent <INSetMessageAttributeIntentExport>

@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, nonatomic) long long attribute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAttribute:(long long)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)setVerb:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (id)initWithIdentifiers:(id)a0 attribute:(long long)a1;
- (void)setDomain:(id)a0;
- (void)setIdentifiers:(id)a0;

@end
