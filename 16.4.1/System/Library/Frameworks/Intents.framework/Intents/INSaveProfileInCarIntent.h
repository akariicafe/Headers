@class NSString, NSNumber;

@interface INSaveProfileInCarIntent : INIntent <INSaveProfileInCarIntentExport>

@property (readonly, copy, nonatomic) NSString *profileLabel;
@property (readonly, copy, nonatomic) NSNumber *profileNumber;
@property (readonly, copy, nonatomic) NSString *profileName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)a0;
- (void)setDomain:(id)a0;
- (id)_metadata;
- (void)setProfileName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithProfileNumber:(id)a0 profileLabel:(id)a1;
- (id)initWithProfileNumber:(id)a0 profileName:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setProfileNumber:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
