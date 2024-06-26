@class NSString, _MRAVOutputDeviceSourceInfoProtobuf, NSData, NSMutableArray;

@interface _MRAVOutputDeviceDescriptorProtobuf : PBCodable <NSCopying> {
    struct { unsigned char batteryLevel : 1; unsigned char clusterType : 1; unsigned char configuredClusterSize : 1; unsigned char deviceSubType : 1; unsigned char deviceType : 1; unsigned char hostDeviceClass : 1; unsigned char volume : 1; unsigned char volumeCapabilities : 1; unsigned char canAccessAppleMusic : 1; unsigned char canAccessRemoteAssets : 1; unsigned char canAccessiCloudMusicLibrary : 1; unsigned char canFetchMediaDataFromSender : 1; unsigned char canPlayEncryptedProgressiveDownloadAssets : 1; unsigned char canRelayCommunicationChannel : 1; unsigned char groupContainsGroupLeader : 1; unsigned char isAddedToHomeKit : 1; unsigned char isAirPlayReceiverSessionActive : 1; unsigned char isDeviceGroupable : 1; unsigned char isGroupLeader : 1; unsigned char isGroupable : 1; unsigned char isLocalDevice : 1; unsigned char isProxyGroupPlayer : 1; unsigned char isRemoteControllable : 1; unsigned char isVolumeControlAvailable : 1; unsigned char parentGroupContainsDiscoverableLeader : 1; unsigned char presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets : 1; unsigned char producesLowFidelityAudio : 1; unsigned char requiresAuthorization : 1; unsigned char shouldForceRemoteControlabillity : 1; unsigned char supportsBufferedAirPlay : 1; unsigned char supportsExternalScreen : 1; unsigned char supportsHAP : 1; unsigned char supportsMultiplayer : 1; unsigned char supportsRapportRemoteControlTransport : 1; unsigned char supportsSharePlayHandoff : 1; unsigned char usingJSONProtocol : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) BOOL hasGroupID;
@property (retain, nonatomic) NSString *groupID;
@property (readonly, nonatomic) BOOL hasModelID;
@property (retain, nonatomic) NSString *modelID;
@property (readonly, nonatomic) BOOL hasMacAddress;
@property (retain, nonatomic) NSData *macAddress;
@property (nonatomic) BOOL hasCanAccessRemoteAssets;
@property (nonatomic) BOOL canAccessRemoteAssets;
@property (nonatomic) BOOL hasIsRemoteControllable;
@property (nonatomic) BOOL isRemoteControllable;
@property (nonatomic) BOOL hasIsGroupLeader;
@property (nonatomic) BOOL isGroupLeader;
@property (nonatomic) BOOL hasIsGroupable;
@property (nonatomic) BOOL isGroupable;
@property (nonatomic) BOOL hasDeviceType;
@property (nonatomic) int deviceType;
@property (nonatomic) BOOL hasDeviceSubType;
@property (nonatomic) int deviceSubType;
@property (readonly, nonatomic) BOOL hasModelSpecificInfoData;
@property (retain, nonatomic) NSData *modelSpecificInfoData;
@property (nonatomic) BOOL hasBatteryLevel;
@property (nonatomic) float batteryLevel;
@property (nonatomic) BOOL hasIsLocalDevice;
@property (nonatomic) BOOL isLocalDevice;
@property (nonatomic) BOOL hasSupportsExternalScreen;
@property (nonatomic) BOOL supportsExternalScreen;
@property (nonatomic) BOOL hasRequiresAuthorization;
@property (nonatomic) BOOL requiresAuthorization;
@property (nonatomic) BOOL hasShouldForceRemoteControlabillity;
@property (nonatomic) BOOL shouldForceRemoteControlabillity;
@property (readonly, nonatomic) BOOL hasSourceInfo;
@property (retain, nonatomic) _MRAVOutputDeviceSourceInfoProtobuf *sourceInfo;
@property (nonatomic) BOOL hasIsDeviceGroupable;
@property (nonatomic) BOOL isDeviceGroupable;
@property (nonatomic) BOOL hasCanRelayCommunicationChannel;
@property (nonatomic) BOOL canRelayCommunicationChannel;
@property (readonly, nonatomic) BOOL hasLogicalDeviceID;
@property (retain, nonatomic) NSString *logicalDeviceID;
@property (nonatomic) BOOL hasIsProxyGroupPlayer;
@property (nonatomic) BOOL isProxyGroupPlayer;
@property (readonly, nonatomic) BOOL hasFirmwareVersion;
@property (retain, nonatomic) NSString *firmwareVersion;
@property (nonatomic) BOOL hasVolume;
@property (nonatomic) float volume;
@property (nonatomic) BOOL hasIsVolumeControlAvailable;
@property (nonatomic) BOOL isVolumeControlAvailable;
@property (nonatomic) BOOL hasCanAccessAppleMusic;
@property (nonatomic) BOOL canAccessAppleMusic;
@property (nonatomic) BOOL hasCanAccessiCloudMusicLibrary;
@property (nonatomic) BOOL canAccessiCloudMusicLibrary;
@property (nonatomic) BOOL hasGroupContainsGroupLeader;
@property (nonatomic) BOOL groupContainsGroupLeader;
@property (nonatomic) BOOL hasSupportsBufferedAirPlay;
@property (nonatomic) BOOL supportsBufferedAirPlay;
@property (nonatomic) BOOL hasCanPlayEncryptedProgressiveDownloadAssets;
@property (nonatomic) BOOL canPlayEncryptedProgressiveDownloadAssets;
@property (nonatomic) BOOL hasCanFetchMediaDataFromSender;
@property (nonatomic) BOOL canFetchMediaDataFromSender;
@property (nonatomic) BOOL hasPresentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property (nonatomic) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property (nonatomic) BOOL hasIsAirPlayReceiverSessionActive;
@property (nonatomic) BOOL isAirPlayReceiverSessionActive;
@property (readonly, nonatomic) BOOL hasParentGroupIdentifier;
@property (retain, nonatomic) NSString *parentGroupIdentifier;
@property (nonatomic) BOOL hasParentGroupContainsDiscoverableLeader;
@property (nonatomic) BOOL parentGroupContainsDiscoverableLeader;
@property (nonatomic) BOOL hasIsAddedToHomeKit;
@property (nonatomic) BOOL isAddedToHomeKit;
@property (nonatomic) BOOL hasVolumeCapabilities;
@property (nonatomic) int volumeCapabilities;
@property (readonly, nonatomic) BOOL hasBluetoothID;
@property (retain, nonatomic) NSString *bluetoothID;
@property (nonatomic) BOOL hasSupportsHAP;
@property (nonatomic) BOOL supportsHAP;
@property (nonatomic) BOOL hasUsingJSONProtocol;
@property (nonatomic) BOOL usingJSONProtocol;
@property (retain, nonatomic) NSMutableArray *clusterCompositions;
@property (nonatomic) BOOL hasClusterType;
@property (nonatomic) unsigned int clusterType;
@property (readonly, nonatomic) BOOL hasPrimaryUID;
@property (retain, nonatomic) NSString *primaryUID;
@property (nonatomic) BOOL hasConfiguredClusterSize;
@property (nonatomic) unsigned int configuredClusterSize;
@property (nonatomic) BOOL hasSupportsRapportRemoteControlTransport;
@property (nonatomic) BOOL supportsRapportRemoteControlTransport;
@property (readonly, nonatomic) BOOL hasCurrentBluetoothListeningMode;
@property (retain, nonatomic) NSString *currentBluetoothListeningMode;
@property (retain, nonatomic) NSMutableArray *availableBluetoothListeningModes;
@property (nonatomic) BOOL hasSupportsMultiplayer;
@property (nonatomic) BOOL supportsMultiplayer;
@property (nonatomic) BOOL hasProducesLowFidelityAudio;
@property (nonatomic) BOOL producesLowFidelityAudio;
@property (nonatomic) BOOL hasHostDeviceClass;
@property (nonatomic) int hostDeviceClass;
@property (readonly, nonatomic) BOOL hasAirPlayGroupID;
@property (retain, nonatomic) NSString *airPlayGroupID;
@property (nonatomic) BOOL hasSupportsSharePlayHandoff;
@property (nonatomic) BOOL supportsSharePlayHandoff;

+ (Class)clusterCompositionType;
+ (Class)availableBluetoothListeningModesType;

- (unsigned long long)clusterCompositionsCount;
- (void)addAvailableBluetoothListeningModes:(id)a0;
- (int)StringAsDeviceType:(id)a0;
- (int)StringAsDeviceSubType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearAvailableBluetoothListeningModes;
- (id)description;
- (id)deviceSubTypeAsString:(int)a0;
- (id)clusterCompositionAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)deviceTypeAsString:(int)a0;
- (void)writeTo:(id)a0;
- (id)hostDeviceClassAsString:(int)a0;
- (id)availableBluetoothListeningModesAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)availableBluetoothListeningModesCount;
- (void)addClusterComposition:(id)a0;
- (unsigned long long)hash;
- (void)clearClusterCompositions;
- (int)StringAsHostDeviceClass:(id)a0;
- (id)dictionaryRepresentation;

@end
