@class NSDictionary, NSString, MRAVOutputDeviceSourceInfo, _MRAVOutputDeviceDescriptorProtobuf, NSArray, NSData, MRAVEndpoint;

@interface MRAVOutputDevice : NSObject

@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *parentGroupIdentifier;
@property (copy, nonatomic) NSString *primaryID;
@property (nonatomic) float volume;
@property (weak, nonatomic) MRAVEndpoint *endpoint;
@property (readonly, nonatomic) MRAVOutputDeviceSourceInfo *sourceInfo;
@property (readonly, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *descriptor;
@property (readonly, nonatomic) NSString *logicalDeviceID;
@property (readonly, nonatomic) BOOL supportsRapport;
@property (readonly, nonatomic) BOOL isAddedToHomeKit;
@property (readonly, nonatomic) NSString *currentBluetoothListeningMode;
@property (readonly, nonatomic) NSArray *availableBluetoothListeningModes;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) NSString *firmwareVersion;
@property (readonly, nonatomic) NSData *MACAddress;
@property (readonly, nonatomic) NSDictionary *modelSpecificInfo;
@property (readonly, nonatomic) NSString *playingPairedDeviceName;
@property (readonly, nonatomic) BOOL canAccessRemoteAssets;
@property (readonly, nonatomic) BOOL canAccessAppleMusic;
@property (readonly, nonatomic) BOOL canAccessiCloudMusicLibrary;
@property (readonly, nonatomic) BOOL canPlayEncryptedProgressiveDownloadAssets;
@property (readonly, nonatomic) BOOL canFetchMediaDataFromSender;
@property (readonly, nonatomic) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property (readonly, nonatomic, getter=isRemoteControllable) BOOL remoteControllable;
@property (readonly, nonatomic, getter=isGroupLeader) BOOL groupLeader;
@property (readonly, nonatomic) BOOL groupContainsGroupLeader;
@property (readonly, nonatomic, getter=isAirPlayReceiverSessionActive) BOOL airPlayReceiverSessionActive;
@property (readonly, nonatomic, getter=isGroupable) BOOL groupable;
@property (readonly, nonatomic) BOOL supportsBluetoothSharing;
@property (readonly, nonatomic, getter=isProxyGroupPlayer) BOOL proxyGroupPlayer;
@property (readonly, nonatomic) BOOL canRelayCommunicationChannel;
@property (readonly, nonatomic) BOOL supportsBufferedAirPlay;
@property (readonly, nonatomic, getter=isDeviceGroupable) BOOL deviceGroupable;
@property (readonly, nonatomic, getter=isPickedOnPairedDevice) BOOL pickedOnPairedDevice;
@property (readonly, nonatomic) unsigned int deviceType;
@property (readonly, nonatomic) unsigned int deviceSubtype;
@property (readonly, nonatomic) NSArray *clusterComposition;
@property (readonly, nonatomic) unsigned long long configuredClusterSize;
@property (readonly, nonatomic) unsigned int clusterType;
@property (readonly, nonatomic) float batteryLevel;
@property (readonly, nonatomic) BOOL hasBatteryLevel;
@property (readonly, nonatomic, getter=isLocalDevice) BOOL localDevice;
@property (readonly, nonatomic) BOOL supportsExternalScreen;
@property (readonly, nonatomic) BOOL requiresAuthorization;
@property (readonly, nonatomic) BOOL parentGroupContainsDiscoverableLeader;
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property (readonly, nonatomic) unsigned int volumeCapabilities;
@property (readonly, nonatomic) BOOL isPersonalRoute;
@property (readonly, nonatomic) NSString *bluetoothID;
@property (readonly, nonatomic) NSString *debugName;
@property (readonly, nonatomic, getter=isUsingJSONProtocol) BOOL usingJSONProtocol;
@property (readonly, nonatomic) BOOL supportsHAP;
@property (readonly, nonatomic) NSString *capabilitiesDescription;
@property (readonly, nonatomic) NSString *composedTypeDescription;
@property (readonly, nonatomic) NSString *roleDescription;
@property (readonly, nonatomic) NSDictionary *jsonEncodableDictionaryRepresentation;

+ (id)localDeviceUID;
+ (id)localDeviceLocalizedName;
+ (id)companionDeviceUID;

- (void).cxx_destruct;
- (BOOL)isEqualToOutputDevice:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsUID:(id)a0;

@end
