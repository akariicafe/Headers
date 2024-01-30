@class NSString;

@interface OTEscrowRecordMetadataClientMetadata : PBCodable <NSCopying> {
    struct { unsigned char devicePlatform : 1; unsigned char secureBackupMetadataTimestamp : 1; unsigned char secureBackupNumericPassphraseLength : 1; unsigned char secureBackupUsesComplexPassphrase : 1; unsigned char secureBackupUsesNumericPassphrase : 1; } _has;
}

@property (nonatomic) BOOL hasSecureBackupMetadataTimestamp;
@property (nonatomic) unsigned long long secureBackupMetadataTimestamp;
@property (nonatomic) BOOL hasSecureBackupNumericPassphraseLength;
@property (nonatomic) unsigned long long secureBackupNumericPassphraseLength;
@property (nonatomic) BOOL hasSecureBackupUsesComplexPassphrase;
@property (nonatomic) unsigned long long secureBackupUsesComplexPassphrase;
@property (nonatomic) BOOL hasSecureBackupUsesNumericPassphrase;
@property (nonatomic) unsigned long long secureBackupUsesNumericPassphrase;
@property (readonly, nonatomic) BOOL hasDeviceColor;
@property (retain, nonatomic) NSString *deviceColor;
@property (readonly, nonatomic) BOOL hasDeviceEnclosureColor;
@property (retain, nonatomic) NSString *deviceEnclosureColor;
@property (readonly, nonatomic) BOOL hasDeviceMid;
@property (retain, nonatomic) NSString *deviceMid;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) BOOL hasDeviceModelClass;
@property (retain, nonatomic) NSString *deviceModelClass;
@property (readonly, nonatomic) BOOL hasDeviceModelVersion;
@property (retain, nonatomic) NSString *deviceModelVersion;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) BOOL hasDevicePlatform;
@property (nonatomic) unsigned long long devicePlatform;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
