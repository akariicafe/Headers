@class NSData, SASExpressSettingsPrivacyBundle, NSString;

@interface SASExpressSettings : PBCodable <NSCopying> {
    struct { unsigned char appearanceMode : 1; unsigned char displayZoomOption : 1; unsigned char appAnalyticsOptIn : 1; unsigned char deviceAnalyticsOptIn : 1; unsigned char fileVaultEnabled : 1; unsigned char findMyOptIn : 1; unsigned char locationServicesOptIn : 1; unsigned char screenTimeEnabled : 1; unsigned char siriDataSharingOptIn : 1; unsigned char siriOptIn : 1; unsigned char softwareUpdateAutoDownloadEnabled : 1; unsigned char softwareUpdateAutoUpdateEnabled : 1; unsigned char unlockWithWatchEnabled : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasWatchMigrationData;
@property (retain, nonatomic) NSData *watchMigrationData;
@property (readonly, nonatomic) BOOL hasWalletData;
@property (retain, nonatomic) NSData *walletData;
@property (nonatomic) BOOL hasDeviceAnalyticsOptIn;
@property (nonatomic) BOOL deviceAnalyticsOptIn;
@property (nonatomic) BOOL hasAppAnalyticsOptIn;
@property (nonatomic) BOOL appAnalyticsOptIn;
@property (nonatomic) BOOL hasLocationServicesOptIn;
@property (nonatomic) BOOL locationServicesOptIn;
@property (nonatomic) BOOL hasFindMyOptIn;
@property (nonatomic) BOOL findMyOptIn;
@property (nonatomic) BOOL hasSiriOptIn;
@property (nonatomic) BOOL siriOptIn;
@property (nonatomic) BOOL hasScreenTimeEnabled;
@property (nonatomic) BOOL screenTimeEnabled;
@property (nonatomic) BOOL hasSoftwareUpdateAutoUpdateEnabled;
@property (nonatomic) BOOL softwareUpdateAutoUpdateEnabled;
@property (nonatomic) BOOL hasSoftwareUpdateAutoDownloadEnabled;
@property (nonatomic) BOOL softwareUpdateAutoDownloadEnabled;
@property (nonatomic) BOOL hasSiriDataSharingOptIn;
@property (nonatomic) BOOL siriDataSharingOptIn;
@property (nonatomic) BOOL hasAppearanceMode;
@property (nonatomic) int appearanceMode;
@property (readonly, nonatomic) BOOL hasDeviceAnalyticsPrivacyBundle;
@property (retain, nonatomic) SASExpressSettingsPrivacyBundle *deviceAnalyticsPrivacyBundle;
@property (readonly, nonatomic) BOOL hasAppAnalyticsPrivacyBundle;
@property (retain, nonatomic) SASExpressSettingsPrivacyBundle *appAnalyticsPrivacyBundle;
@property (readonly, nonatomic) BOOL hasLocationServicesPrivacyBundle;
@property (retain, nonatomic) SASExpressSettingsPrivacyBundle *locationServicesPrivacyBundle;
@property (readonly, nonatomic) BOOL hasFindMyPrivacyBundle;
@property (retain, nonatomic) SASExpressSettingsPrivacyBundle *findMyPrivacyBundle;
@property (readonly, nonatomic) BOOL hasSiriPrivacyBundle;
@property (retain, nonatomic) SASExpressSettingsPrivacyBundle *siriPrivacyBundle;
@property (retain, nonatomic) NSString *productType;
@property (retain, nonatomic) NSString *deviceClass;
@property (nonatomic) BOOL hasDisplayZoomOption;
@property (nonatomic) int displayZoomOption;
@property (nonatomic) BOOL hasUnlockWithWatchEnabled;
@property (nonatomic) BOOL unlockWithWatchEnabled;
@property (nonatomic) BOOL hasFileVaultEnabled;
@property (nonatomic) BOOL fileVaultEnabled;

- (int)StringAsDisplayZoomOption:(id)a0;
- (id)appearanceModeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsAppearanceMode:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)displayZoomOptionAsString:(int)a0;

@end
