@interface SUDownloadMetadata : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isAutoDownload) BOOL autoDownload;
@property (nonatomic, getter=isDownloadOnly) BOOL downloadOnly;
@property (nonatomic) int activeDownloadPolicyType;
@property (nonatomic, getter=isEnabledFor2G) BOOL enabledFor2G;
@property (nonatomic, getter=isEnabledFor3G) BOOL enabledFor3G;
@property (nonatomic, getter=isEnabledFor4G) BOOL enabledFor4G;
@property (nonatomic, getter=isEnabledForWifi) BOOL enabledForWifi;
@property (nonatomic, getter=isEnabledOnBatteryPower) BOOL enabledOnBatteryPower;
@property (nonatomic, getter=isEnabledForCellularRoaming) BOOL enabledForCellularRoaming;
@property (nonatomic) int downloadFeeAgreementStatus;
@property (nonatomic) int termsAndConditionsAgreementStatus;
@property (nonatomic) BOOL enforceWifiOnlyOverride;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)_stringForBool:(BOOL)a0;
- (id)activeDownloadPolicy:(id)a0;
- (void)applyDownloadPolicy:(id)a0;
- (id)availableDownloadPolicyIfDifferentFromActive:(id)a0;
- (BOOL)isEnabledForNetworkType:(int)a0;
- (BOOL)matchesDownloadPolicy:(id)a0;

@end
