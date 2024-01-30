@class NSUUID, NSString, NEContentFilter, NEPathController, NEAppPush, NEVPNApp, NEDNSProxy, NEAOVPN, NEProfileIngestionPayloadInfo, NEDNSSettingsBundle, NEVPN;

@interface NEConfiguration : NSObject <NEProfilePayloadHandlerDelegate, NEProfileIngestionPluginDelegate, NEConfigurationValidating, NSSecureCoding, NSCopying> {
    long long _appPermissionType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *pluginType;
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
+ (id)configurationWithProfilePayload:(id)a0 grade:(long long)a1;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (void)applyOverrides;
- (BOOL)setCertificates:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)setExcludedDomains:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)setPerAppRuleSettings:(id)a0 withAppIdentifier:(id)a1;
- (id)getPendingCertificateInfo:(id)a0;
- (void)copyPasswordsFromSystemKeychain;
- (BOOL)setMailDomains:(id)a0 accountIdentifiers:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)setAppLayerVPNUUID:(id)a0 andSafariDomains:(id)a1;
- (BOOL)setAssociatedDomains:(id)a0;
- (id)descriptionWithOptions:(unsigned long long)a0;
- (BOOL)setPayloadInfoIdentity:(id)a0;
- (BOOL)setPayloadInfoCommon:(id)a0 payloadOrganization:(id)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)setCalendarDomains:(id)a0;
- (BOOL)setSMBDomains:(id)a0;
- (unsigned long long)hash;
- (BOOL)setContactsDomains:(id)a0;
- (BOOL)setMailDomains:(id)a0;
- (id)getConfigurationIdentifier;
- (id)getCertificates;
- (id)getPendingCertificateUUIDs:(id)a0;
- (BOOL)setPerAppUUID:(id)a0 andSafariDomains:(id)a1;
- (BOOL)setProfileInfo:(id)a0;
- (id)description;
- (id)initWithName:(id)a0 grade:(long long)a1;
- (void)clearSystemKeychain;
- (BOOL)setCalendarDomains:(id)a0 accountIdentifiers:(id)a1;
- (void).cxx_destruct;
- (BOOL)setRestrictDomains:(BOOL)a0;
- (BOOL)setContactsDomains:(id)a0 accountIdentifiers:(id)a1;
- (id)generateSignature;

@end
