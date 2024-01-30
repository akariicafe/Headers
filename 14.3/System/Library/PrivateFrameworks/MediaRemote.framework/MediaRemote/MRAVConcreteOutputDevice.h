@class AVOutputDevice, MRAVOutputDeviceSourceInfo, NSString, NSData, NSObject, NSDictionary;
@protocol OS_dispatch_queue;

@interface MRAVConcreteOutputDevice : MRAVOutputDevice {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    AVOutputDevice *_avOutputDevice;
    MRAVOutputDeviceSourceInfo *_sourceInfo;
    NSString *_uid;
    BOOL _overrideUID;
    NSString *_modelID;
    NSString *_firmwareVersion;
    NSString *_logicalDeviceID;
    NSString *_groupID;
    BOOL _overrideGroupID;
    NSData *_MACAddress;
    NSDictionary *_modelSpecificInfo;
    NSString *_playingPairedDeviceName;
}

@property (retain, nonatomic, setter=setAVOutputDevice:) AVOutputDevice *avOutputDevice;
@property (retain, nonatomic) MRAVOutputDeviceSourceInfo *sourceInfo;
@property (readonly, nonatomic) BOOL supportsHeadTrackedSpatialAudio;
@property (readonly, nonatomic, getter=isHeadTrackedSpatialAudioActive) BOOL headTrackedSpatialAudioActive;

- (id)clusterComposition;
- (BOOL)canAccessiCloudMusicLibrary;
- (BOOL)requiresAuthorization;
- (BOOL)hasBatteryLevel;
- (id)currentBluetoothListeningMode;
- (float)volume;
- (id)MACAddress;
- (BOOL)setCurrentBluetoothListeningMode:(id)a0 error:(id *)a1;
- (unsigned int)clusterType;
- (id)modelSpecificInfo;
- (BOOL)canRelayCommunicationChannel;
- (unsigned long long)configuredClusterSize;
- (void)setVolume:(float)a0;
- (BOOL)isDeviceGroupable;
- (BOOL)supportsHAP;
- (unsigned int)volumeCapabilities;
- (BOOL)groupContainsGroupLeader;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (id)parentGroupIdentifier;
- (BOOL)isGroupable;
- (unsigned int)deviceType;
- (BOOL)isAddedToHomeKit;
- (BOOL)supportsBluetoothSharing;
- (BOOL)supportsExternalScreen;
- (id)bluetoothID;
- (float)batteryLevel;
- (BOOL)isRemoteControllable;
- (BOOL)isAirPlayReceiverSessionActive;
- (id)uid;
- (id)logicalDeviceID;
- (id)availableBluetoothListeningModes;
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
- (id)initWithAVOutputDevice:(id)a0 sourceInfo:(id)a1;
- (void).cxx_destruct;
- (id)groupID;
- (id)modelID;
- (void)setGroupID:(id)a0;
- (BOOL)isPickedOnPairedDevice;
- (BOOL)supportsRapport;
- (id)name;
- (id)playingPairedDeviceName;

@end
