@class _MRAVOutputDeviceDescriptorProtobuf, MRAVOutputDeviceSourceInfo, NSDictionary, NSArray;

@interface MRAVDistantOutputDevice : MRAVOutputDevice <NSSecureCoding> {
    _MRAVOutputDeviceDescriptorProtobuf *_protobuf;
    MRAVOutputDeviceSourceInfo *_sourceInfo;
    NSDictionary *_modelSpecificInfo;
    NSArray *_clusterComposition;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)clusterComposition;
- (BOOL)canAccessiCloudMusicLibrary;
- (BOOL)requiresAuthorization;
- (BOOL)hasBatteryLevel;
- (float)volume;
- (id)MACAddress;
- (unsigned int)clusterType;
- (id)modelSpecificInfo;
- (BOOL)canRelayCommunicationChannel;
- (unsigned long long)configuredClusterSize;
- (BOOL)isDeviceGroupable;
- (BOOL)supportsHAP;
- (unsigned int)volumeCapabilities;
- (BOOL)groupContainsGroupLeader;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (id)parentGroupIdentifier;
- (BOOL)isGroupable;
- (unsigned int)deviceType;
- (BOOL)isAddedToHomeKit;
- (id)initWithDescriptor:(id)a0;
- (BOOL)supportsExternalScreen;
- (id)bluetoothID;
- (float)batteryLevel;
- (BOOL)isRemoteControllable;
- (BOOL)isAirPlayReceiverSessionActive;
- (id)uid;
- (id)sourceInfo;
- (id)logicalDeviceID;
- (BOOL)canAccessAppleMusic;
- (BOOL)isGroupLeader;
- (BOOL)parentGroupContainsDiscoverableLeader;
- (BOOL)canAccessRemoteAssets;
- (id)firmwareVersion;
- (BOOL)canFetchMediaDataFromSender;
- (BOOL)isLocalDevice;
- (BOOL)isVolumeControlAvailable;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (unsigned int)deviceSubtype;
- (BOOL)supportsBufferedAirPlay;
- (BOOL)isProxyGroupPlayer;
- (void).cxx_destruct;
- (id)groupID;
- (id)modelID;
- (id)descriptor;
- (id)initWithCoder:(id)a0;
- (id)initWithSkeleton:(id)a0;
- (BOOL)isUsingJSONProtocol;
- (id)description;
- (id)primaryID;
- (id)name;
- (void)encodeWithCoder:(id)a0;

@end
