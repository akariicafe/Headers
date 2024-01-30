@class NSArray, INModifyRelationship, NSString;

@interface INSetRelationshipIntent : INIntent <INSetRelationshipIntentExport>

@property (readonly, copy, nonatomic) NSArray *contactIdentifiers;
@property (readonly, copy, nonatomic) INModifyRelationship *targetRelationship;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (id)initWithContactIdentifiers:(id)a0 targetRelationship:(id)a1;
- (id)domain;
- (void)setVerb:(id)a0;
- (void)setTargetRelationship:(id)a0;
- (void)setContactIdentifiers:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)_dictionaryRepresentation;

@end
