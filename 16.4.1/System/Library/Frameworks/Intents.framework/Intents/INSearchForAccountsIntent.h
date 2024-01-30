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

- (id)domain;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)a0;
- (void)setDomain:(id)a0;
- (void)setOrganizationName:(id)a0;
- (void)setAccountType:(long long)a0;
- (id)_metadata;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithAccountNickname:(id)a0 accountType:(long long)a1 organizationName:(id)a2 requestedBalanceType:(long long)a3;
- (id)parametersByName;
- (void)setAccountNickname:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setRequestedBalanceType:(long long)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
