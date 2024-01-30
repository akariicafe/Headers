@class NSData;

@interface BYBackupMetadata : PBCodable <NSCopying> {
    struct { unsigned char userInterfaceStyleMode : 1; unsigned char appAnalyticsOptIn : 1; unsigned char deviceAnalyticsOptIn : 1; unsigned char homeButtonHapticKind : 1; unsigned char autoDownloadEnabled : 1; unsigned char autoUpdateEnabled : 1; unsigned char didSeeTrueTonePane : 1; unsigned char findMyiPhoneOptIn : 1; unsigned char locationServicesOptIn : 1; unsigned char screenTimeEnabled : 1; unsigned char siriOptIn : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasNanoRegistryData;
@property (retain, nonatomic) NSData *nanoRegistryData;
@property (nonatomic) BOOL hasHomeButtonHapticKind;
@property (nonatomic) unsigned int homeButtonHapticKind;
@property (nonatomic) BOOL hasDeviceAnalyticsOptIn;
@property (nonatomic) unsigned int deviceAnalyticsOptIn;
@property (nonatomic) BOOL hasAppAnalyticsOptIn;
@property (nonatomic) unsigned int appAnalyticsOptIn;
@property (nonatomic) BOOL hasLocationServicesOptIn;
@property (nonatomic) BOOL locationServicesOptIn;
@property (nonatomic) BOOL hasFindMyiPhoneOptIn;
@property (nonatomic) BOOL findMyiPhoneOptIn;
@property (nonatomic) BOOL hasSiriOptIn;
@property (nonatomic) BOOL siriOptIn;
@property (nonatomic) BOOL hasScreenTimeEnabled;
@property (nonatomic) BOOL screenTimeEnabled;
@property (nonatomic) BOOL hasAutoUpdateEnabled;
@property (nonatomic) BOOL autoUpdateEnabled;
@property (nonatomic) BOOL hasDidSeeTrueTonePane;
@property (nonatomic) BOOL didSeeTrueTonePane;
@property (nonatomic) BOOL hasUserInterfaceStyleMode;
@property (nonatomic) long long userInterfaceStyleMode;
@property (readonly, nonatomic) BOOL hasWalletData;
@property (retain, nonatomic) NSData *walletData;
@property (nonatomic) BOOL hasAutoDownloadEnabled;
@property (nonatomic) BOOL autoDownloadEnabled;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
