@class INSpeakableString, NSString;

@interface INSearchForAccountsIntent : INIntent <INSearchForAccountsIntentExport>

@property (readonly, copy, nonatomic) INSpeakableString *accountNickname;
@property (readonly, nonatomic) long long accountType;
@property (readonly, copy, nonatomic) INSpeakableString *organizationName;
@property (readonly, nonatomic) long long requestedBalanceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (id)initWithAccountNickname:(id)a0 accountType:(long long)a1 organizationName:(id)a2 requestedBalanceType:(long long)a3;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (id)domain;
- (void)setOrganizationName:(id)a0;
- (void)setVerb:(id)a0;
- (void)setAccountNickname:(id)a0;
- (void)setRequestedBalanceType:(long long)a0;
- (void)setAccountType:(long long)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)_dictionaryRepresentation;

@end
