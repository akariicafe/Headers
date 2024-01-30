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
- (void)addHomeKitCameraUserSettings:(id)a0;
- (void)addHomeKitCameraSettings:(id)a0;
- (unsigned long long)homeKitCameraUserSettingsCount;
- (void)clearHomeKitCameraUserSettings;
- (id)homeKitCameraUserSettingsAtIndex:(unsigned long long)a0;
- (unsigned long long)homeKitCameraSettingsCount;
- (void)clearHomeKitCameraSettings;
- (id)homeKitCameraSettingsAtIndex:(unsigned long long)a0;

@end
