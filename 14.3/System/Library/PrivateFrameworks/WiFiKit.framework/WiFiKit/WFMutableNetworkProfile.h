@class NSArray, NSDictionary, NSString, NSDate;

@interface WFMutableNetworkProfile : WFNetworkProfile {
    BOOL _adhoc;
    BOOL _carrierBased;
    BOOL _personalHotspot;
    NSString *_HS20AccountName;
    NSString *_HS20Badge;
}

@property (retain, nonatomic) NSArray *certificateChain;
@property (retain, nonatomic) NSDictionary *enterpriseProfile;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *bssid;
@property (retain, nonatomic) NSString *ssid;
@property (retain, nonatomic) NSDictionary *scanAttributes;
@property (nonatomic, getter=isManaged) BOOL managed;
@property (nonatomic, getter=isCaptive) BOOL captive;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isAutoJoinEnabled) BOOL autoJoinEnabled;
@property (nonatomic, getter=isAutoLoginEnabled) BOOL autoLoginEnabled;
@property (nonatomic, getter=isInSaveDataMode) BOOL isInSaveDataMode;
@property (retain, nonatomic) NSDate *lastAssociationDate;
@property (nonatomic) long long securityMode;
@property (nonatomic) long long securityModeExt;
@property (nonatomic) struct __SecIdentity { } *TLSIdentity;
@property (copy, nonatomic) NSString *originatorBundleIdentifier;
@property (nonatomic, getter=isHS20Network) BOOL HS20Network;
@property (nonatomic, getter=isHS20NetworkProvisioned) BOOL HS20NetworkProvisioned;
@property (nonatomic) BOOL userProvidedPassword;
@property (retain, nonatomic) NSString *previousPassword;
@property (nonatomic, getter=isInstantHotspotJoin) BOOL instantHotspotJoin;
@property (retain, nonatomic) NSString *hotspotDeviceIdentifier;
@property (copy, nonatomic) NSString *randomMACAddress;
@property (nonatomic, getter=isRandomMACAddressEnabled) BOOL randomMACAddressEnabled;

+ (id)mutableProfileForNetwork:(id)a0;

- (void)removePassword;
- (BOOL)isPersonalHotspot;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isAdhoc;
- (id)initWithNetwork:(id)a0;
- (BOOL)isCarrierBased;
- (id)HS20AccountName;
- (id)HS20Badge;

@end
