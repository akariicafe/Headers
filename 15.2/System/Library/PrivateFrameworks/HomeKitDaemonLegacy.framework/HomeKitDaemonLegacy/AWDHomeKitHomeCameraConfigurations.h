@class NSMutableArray;

@interface AWDHomeKitHomeCameraConfigurations : PBCodable <NSCopying> {
    struct { unsigned char enabledResidentsDeviceCapabilities : 1; unsigned char isFaceClassificationEnabled : 1; unsigned char isOwner : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *homeKitCameraUserSettings;
@property (retain, nonatomic) NSMutableArray *homeKitCameraSettings;
@property (nonatomic) BOOL hasEnabledResidentsDeviceCapabilities;
@property (nonatomic) unsigned int enabledResidentsDeviceCapabilities;
@property (nonatomic) BOOL hasIsFaceClassificationEnabled;
@property (nonatomic) BOOL isFaceClassificationEnabled;
@property (nonatomic) BOOL hasIsOwner;
@property (nonatomic) BOOL isOwner;

+ (Class)homeKitCameraUserSettingsType;
+ (Class)homeKitCameraSettingsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)clearHomeKitCameraUserSettings;
- (void)addHomeKitCameraUserSettings:(id)a0;
- (unsigned long long)homeKitCameraUserSettingsCount;
- (id)homeKitCameraUserSettingsAtIndex:(unsigned long long)a0;
- (void)clearHomeKitCameraSettings;
- (void)addHomeKitCameraSettings:(id)a0;
- (unsigned long long)homeKitCameraSettingsCount;
- (id)homeKitCameraSettingsAtIndex:(unsigned long long)a0;

@end
