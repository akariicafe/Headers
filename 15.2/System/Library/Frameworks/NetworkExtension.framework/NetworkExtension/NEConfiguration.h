@class NSUUID, NSString, NEContentFilter, NEPathController, NEAppPush, NEVPNApp, NEDNSProxy, NEAOVPN, NEProfileIngestionPayloadInfo, NEDNSSettingsBundle, NEVPN;

@interface NEConfiguration : NSObject <NEProfilePayloadHandlerDelegate, NEConfigurationValidating, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *pluginType;
@property (nonatomic) long long appPermissionType;
@property (readonly) long long grade;
@property (readonly) NSUUID *identifier;
@property (copy) NSString *application;
@property (copy) NSString *name;
@property (copy) NSString *applicationName;
@property (copy) NSString *applicationIdentifier;
@property (copy) NSString *externalIdentifier;
@property (copy) NEVPN *VPN;
@property (copy) NEAOVPN *alwaysOnVPN;
@property (copy) NEVPNApp *appVPN;
@property (copy) NEContentFilter *contentFilter;
@property (copy) NEProfileIngestionPayloadInfo *payloadInfo;
@property (copy) NEPathController *pathController;
@property (copy) NEDNSProxy *dnsProxy;
@property (copy) NEDNSSettingsBundle *dnsSettings;
@property (copy) NEAppPush *appPush;

+ (id)configurationWithProfilePayload:(id)a0;
+ (BOOL)SCServiceWithIdentifier:(id)a0 existsInPreferences:(struct __SCPreferences { } *)a1;
+ (void)addError:(id)a0 toList:(id)a1;
+ (BOOL)setConfiguration:(struct __CFDictionary { } *)a0 forProtocol:(struct __CFString { } *)a1 inService:(struct __SCNetworkService { } *)a2;
+ (struct __CFDictionary { } *)copyConfigurationForProtocol:(struct __CFString { } *)a0 inService:(struct __SCNetworkService { } *)a1;
+ (BOOL)removeSCServiceWithIdentifier:(id)a0 fromPreferences:(struct __SCPreferences { } *)a1;
+ (id)configurationWithProfilePayload:(id)a0 grade:(long long)a1;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (BOOL)setAssociatedDomains:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setPayloadInfoIdentityProxy:(id)a0;
- (BOOL)setCertificatesAppVPN:(id)a0;
- (void)clearSystemKeychain;
- (BOOL)setProfileInfo:(id)a0;
- (id)getPendingCertificateInfo:(id)a0;
- (id)configureAOVPNTunnelFromTunnelDict:(id)a0 tunnelDict:(id)a1 payloadBase:(id)a2 interfaceType:(id)a3;
- (BOOL)ingestProxyOptions:(id)a0;
- (BOOL)setCalendarDomains:(id)a0 accountIdentifiers:(id)a1;
- (void)syncWithSystemKeychain;
- (id)initWithAppLayerVPNPayload:(id)a0 configurationName:(id)a1 grade:(long long)a2;
- (id)getConfigurationIdentifier;
- (BOOL)setSMBDomains:(id)a0;
- (BOOL)setContactsDomains:(id)a0;
- (BOOL)setPayloadInfoIdentity:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)setCertificates:(id)a0;
- (BOOL)ingestDisconnectOptions:(id)a0;
- (id)initFromSCService:(struct __SCNetworkService { } *)a0;
- (BOOL)configurePluginWithPayload:(id)a0 pluginType:(id)a1 payloadType:(id)a2;
- (BOOL)ingestPPPDict:(id)a0;
- (id)getPendingCertificateUUIDsAppVPN:(id)a0;
- (BOOL)needToUpdateKeychain;
- (BOOL)setConfigurationVPNPassword:(id)a0;
- (id)getPendingCertificateUUIDsContentFilter:(id)a0;
- (BOOL)setCalendarDomains:(id)a0;
- (void)syncWithKeychainInDomain:(long long)a0;
- (BOOL)configurePPPCommon:(id)a0;
- (void)clearKeychainInDomain:(long long)a0;
- (id)getPendingCertificateUUIDs:(id)a0;
- (id)description;
- (BOOL)setCertificateContentFilter:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (BOOL)updateFromSCService:(struct __SCNetworkService { } *)a0;
- (void)updateWithConfiguration:(id)a0;
- (BOOL)setMailDomains:(id)a0 accountIdentifiers:(id)a1;
- (id)descriptionWithOptions:(unsigned long long)a0;
- (BOOL)validateStrings:(id)a0;
- (BOOL)setPayloadInfoCommon:(id)a0 payloadOrganization:(id)a1;
- (id)generateSignature;
- (void)applyOverrides;
- (BOOL)ingestDNSOptions:(id)a0;
- (id)initWithAlwaysOnVPNPayload:(id)a0 configurationName:(id)a1 grade:(long long)a2;
- (BOOL)setPayloadInfoIdentityUserNameAndPassword:(id)a0;
- (id)getPendingCertificateUUIDsInternal:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)setExcludedDomains:(id)a0;
- (id)getCertificates;
- (id)mergeArray:(id)a0 withArray:(id)a1;
- (BOOL)setAppLayerVPNRuleSettings:(id)a0 withAppIdentifier:(id)a1;
- (id)initWithName:(id)a0 grade:(long long)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isSupportedBySC;
- (BOOL)setConfigurationSharedSecret:(id)a0;
- (BOOL)configureVpnOnDemand:(id)a0 vpnType:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)configureIKE:(id)a0 vpnType:(id)a1 payloadBase:(id)a2 vpn:(id)a3;
- (BOOL)setRestrictDomains:(BOOL)a0;
- (id)initWithPathControllerPayload:(id)a0 configurationName:(id)a1 grade:(long long)a2;
- (id)initWithContentFilterPayload:(id)a0 configurationName:(id)a1 grade:(long long)a2;
- (BOOL)ingestIPSecDict:(id)a0 vpnType:(id)a1 vpn:(id)a2;
- (BOOL)configureVpnOnDemandRules:(id)a0;
- (id)getConfigurationProtocol;
- (id)initWithDNSSettingsPayload:(id)a0 configurationName:(id)a1 grade:(long long)a2;
- (BOOL)applyChangesToSCServiceInPreferences:(struct __SCPreferences { } *)a0;
- (id)initWithVPNPayload:(id)a0 configurationName:(id)a1 grade:(long long)a2;
- (BOOL)setPayloadInfoIdentityIPSecSharedSecret:(id)a0;
- (BOOL)setContactsDomains:(id)a0 accountIdentifiers:(id)a1;
- (id)getPendingCertificateUUIDsVPN:(id)a0;
- (unsigned long long)hash;
- (BOOL)setPayloadInfoIdentityPIN:(id)a0;
- (BOOL)ingestPPPData:(id)a0 vnpType:(id)a1;
- (BOOL)setMailDomains:(id)a0;
- (BOOL)setCertificatesVPN:(id)a0;
- (void)copyPasswordsFromSystemKeychain;
- (void)syncWithUserKeychain;
- (id)initWithDNSProxyPayload:(id)a0 configurationName:(id)a1 grade:(long long)a2;
- (BOOL)setCertificatesAOVpn:(id)a0;
- (id)getPendingCertificateUUIDsAOVpn:(id)a0;
- (BOOL)setAppLayerVPNUUID:(id)a0 andSafariDomains:(id)a1;
- (BOOL)configureL2TPWithPPPOptions:(id)a0;
- (BOOL)configurePPPWithVPNOptions:(id)a0 payloadBase:(id)a1;
- (void)clearUserKeychain;

@end
