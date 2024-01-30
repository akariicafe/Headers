@class NSString;

@interface HMProtoResidentCapabilities : PBCodable <NSCopying> {
    struct { unsigned char supports32d3d60dfb651cd70e55 : 1; unsigned char supportsAccessCodes : 1; unsigned char supportsAnnounce : 1; unsigned char supportsCHIP : 1; unsigned char supportsCameraActivityZones : 1; unsigned char supportsCameraPackageDetection : 1; unsigned char supportsCameraRecording : 1; unsigned char supportsCameraRecordingReachabilityNotifications : 1; unsigned char supportsCameraSignificantEventNotifications : 1; unsigned char supportsCustomMediaApplicationDestination : 1; unsigned char supportsFaceClassification : 1; unsigned char supportsFirmwareUpdate : 1; unsigned char supportsHomeHub : 1; unsigned char supportsLockNotificationContext : 1; unsigned char supportsMediaActions : 1; unsigned char supportsNaturalLighting : 1; unsigned char supportsResidentFirmwareUpdate : 1; unsigned char supportsResidentFirstAccessoryCommunication : 1; unsigned char supportsRouterManagement : 1; unsigned char supportsShortcutActions : 1; unsigned char supportsSiriEndpointSetup : 1; unsigned char supportsThreadBorderRouter : 1; unsigned char supportsUnifiedMediaNotifications : 1; unsigned char supportsWakeOnLAN : 1; unsigned char supportsWalletKey : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTag;
@property (retain, nonatomic) NSString *tag;
@property (nonatomic) BOOL hasSupportsCameraRecording;
@property (nonatomic) BOOL supportsCameraRecording;
@property (nonatomic) BOOL hasSupportsRouterManagement;
@property (nonatomic) BOOL supportsRouterManagement;
@property (nonatomic) BOOL hasSupportsShortcutActions;
@property (nonatomic) BOOL supportsShortcutActions;
@property (nonatomic) BOOL hasSupportsMediaActions;
@property (nonatomic) BOOL supportsMediaActions;
@property (nonatomic) BOOL hasSupportsCameraSignificantEventNotifications;
@property (nonatomic) BOOL supportsCameraSignificantEventNotifications;
@property (nonatomic) BOOL hasSupportsFirmwareUpdate;
@property (nonatomic) BOOL supportsFirmwareUpdate;
@property (nonatomic) BOOL hasSupportsResidentFirmwareUpdate;
@property (nonatomic) BOOL supportsResidentFirmwareUpdate;
@property (nonatomic) BOOL hasSupportsCameraActivityZones;
@property (nonatomic) BOOL supportsCameraActivityZones;
@property (nonatomic) BOOL hasSupportsFaceClassification;
@property (nonatomic) BOOL supportsFaceClassification;
@property (nonatomic) BOOL hasSupportsNaturalLighting;
@property (nonatomic) BOOL supportsNaturalLighting;
@property (nonatomic) BOOL hasSupportsCameraRecordingReachabilityNotifications;
@property (nonatomic) BOOL supportsCameraRecordingReachabilityNotifications;
@property (nonatomic) BOOL hasSupportsAnnounce;
@property (nonatomic) BOOL supportsAnnounce;
@property (nonatomic) BOOL hasSupportsWakeOnLAN;
@property (nonatomic) BOOL supportsWakeOnLAN;
@property (nonatomic) BOOL hasSupportsLockNotificationContext;
@property (nonatomic) BOOL supportsLockNotificationContext;
@property (nonatomic) BOOL hasSupportsWalletKey;
@property (nonatomic) BOOL supportsWalletKey;
@property (nonatomic) BOOL hasSupportsCameraPackageDetection;
@property (nonatomic) BOOL supportsCameraPackageDetection;
@property (nonatomic) BOOL hasSupportsAccessCodes;
@property (nonatomic) BOOL supportsAccessCodes;
@property (nonatomic) BOOL hasSupportsCHIP;
@property (nonatomic) BOOL supportsCHIP;
@property (nonatomic) BOOL hasSupportsThreadBorderRouter;
@property (nonatomic) BOOL supportsThreadBorderRouter;
@property (nonatomic) BOOL hasSupportsSiriEndpointSetup;
@property (nonatomic) BOOL supportsSiriEndpointSetup;
@property (nonatomic) BOOL hasSupportsCustomMediaApplicationDestination;
@property (nonatomic) BOOL supportsCustomMediaApplicationDestination;
@property (nonatomic) BOOL hasSupportsUnifiedMediaNotifications;
@property (nonatomic) BOOL supportsUnifiedMediaNotifications;
@property (nonatomic) BOOL hasSupportsHomeHub;
@property (nonatomic) BOOL supportsHomeHub;
@property (nonatomic) BOOL hasSupportsResidentFirstAccessoryCommunication;
@property (nonatomic) BOOL supportsResidentFirstAccessoryCommunication;
@property (nonatomic) BOOL hasSupports32d3d60dfb651cd70e55;
@property (nonatomic) BOOL supports32d3d60dfb651cd70e55;

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
