@class NSString, NSNumber, INSpeakableString;

@interface INSetProfileInCarIntent : INIntent <INSetProfileInCarIntentExport>

@property (readonly, copy, nonatomic) NSString *profileLabel;
@property (readonly, copy, nonatomic) NSNumber *profileNumber;
@property (readonly, copy, nonatomic) NSString *profileName;
@property (readonly, copy, nonatomic) NSNumber *defaultProfile;
@property (readonly, copy, nonatomic) INSpeakableString *carName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (id)initWithProfileNumber:(id)a0 profileName:(id)a1 defaultProfile:(id)a2;
- (id)initWithProfileNumber:(id)a0 profileLabel:(id)a1 defaultProfile:(id)a2;
- (void)setVerb:(id)a0;
- (void)setProfileName:(id)a0;
- (void)_setMetadata:(id)a0;
- (void)setProfileNumber:(id)a0;
- (void)setDefaultProfile:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)initWithProfileNumber:(id)a0 profileName:(id)a1 defaultProfile:(id)a2 carName:(id)a3;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)setCarName:(id)a0;

@end
