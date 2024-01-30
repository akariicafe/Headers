@class _MRAVOutputDeviceDescriptorProtobuf, MRAVOutputDeviceSourceInfo, NSDictionary, NSArray;

@interface MRAVDistantOutputDevice : MRAVOutputDevice <NSSecureCoding> {
    _MRAVOutputDeviceDescriptorProtobuf *_protobuf;
    MRAVOutputDeviceSourceInfo *_sourceInfo;
    NSDictionary *_modelSpecificInfo;
    NSArray *_clusterComposition;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *protobuf;

- (id)sourceInfo;
- (BOOL)isLocalDevice;
- (float)batteryLevel;
- (id)firmwareVersion;
- (id)groupID;
- (id)modelID;
- (id)uid;
- (float)volume;
- (unsigned int)deviceType;
- (unsigned int)volumeCapabilities;
- (id)currentBluetoothListeningMode;
- (BOOL)canAccessAppleMusic;
- (id)parentGroupIdentifier;
- (BOOL)isAddedToHomeKit;
- (id)availableBluetoothListeningModes;
- (void)encodeWithCoder:(id)a0;
- (id)clusterComposition;
- (long long)hostDeviceClass;
- (unsigned int)clusterType;
- (BOOL)supportsExternalScreen;
- (BOOL)hasBatteryLevel;
- (BOOL)supportsBufferedAirPlay;
- (id)description;
- (BOOL)producesLowFidelityAudio;
- (BOOL)canAccessRemoteAssets;
- (BOOL)parentGroupContainsDiscoverableLeader;
- (unsigned long long)configuredClusterSize;
- (BOOL)isVolumeControlAvailable;
- (BOOL)isProxyGroupPlayer;
- (BOOL)isAirPlayReceiverSessionActive;
- (BOOL)isRemoteControllable;
- (BOOL)requiresAuthorization;
- (void).cxx_destruct;
- (BOOL)canAccessiCloudMusicLibrary;
- (id)primaryID;
- (BOOL)isUsingJSONProtocol;
- (id)logicalDeviceID;
- (id)initWithCoder:(id)a0;
- (id)airPlayGroupID;
- (BOOL)supportsMultiplayer;
- (BOOL)isGroupLeader;
- (BOOL)isGroupable;
- (id)descriptor;
- (id)bluetoothID;
- (BOOL)canRelayCommunicationChannel;
- (id)modelSpecificInfo;
- (BOOL)supportsHAP;
- (id)name;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)supportsRapportRemoteControlTransport;
- (BOOL)isDeviceGroupable;
- (id)initWithSkeleton:(id)a0;
- (id)initWithDescriptor:(id)a0;
- (id)MACAddress;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (BOOL)supportsSharePlayHandoff;
- (BOOL)canFetchMediaDataFromSender;
- (BOOL)groupContainsGroupLeader;
- (unsigned int)deviceSubtype;

@end
