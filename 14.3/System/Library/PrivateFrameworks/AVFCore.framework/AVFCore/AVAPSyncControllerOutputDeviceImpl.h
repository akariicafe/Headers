@class NSString, NSArray, NSData, NSDictionary, NSNumber;
@protocol AVOutputDeviceImpl, AVOutputDeviceImplSupport;

@interface AVAPSyncControllerOutputDeviceImpl : NSObject <AVOutputDeviceImpl> {
    struct OpaqueAPSyncController { } *_syncController;
}

@property (readonly) id<AVOutputDeviceImpl> secondaryImpl;
@property (weak) id<AVOutputDeviceImplSupport> implEventListener;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *ID;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) long long deviceSubType;
@property (readonly, nonatomic) long long clusterType;
@property (readonly, nonatomic) long long configuredClusterSize;
@property (readonly, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSString *modelID;
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *firmwareVersion;
@property (readonly, copy, nonatomic) NSData *identifyingMACAddress;
@property (readonly, nonatomic) NSArray *clusteredDeviceDescriptions;
@property (readonly, nonatomic) BOOL isClusterLeader;
@property (readonly, nonatomic) NSString *clusterID;
@property (readonly, nonatomic) NSNumber *batteryLevel;
@property (readonly, nonatomic) NSNumber *caseBatteryLevel;
@property (readonly, nonatomic) NSNumber *leftBatteryLevel;
@property (readonly, nonatomic) NSNumber *rightBatteryLevel;
@property (readonly, nonatomic) NSNumber *supportsDataOverACLProtocol;
@property (readonly, nonatomic) NSNumber *isInEar;
@property (readonly, nonatomic) NSDictionary *airPlayProperties;
@property (readonly, nonatomic, getter=isInUseByPairedDevice) BOOL inUseByPairedDevice;
@property (readonly, copy, nonatomic) NSArray *connectedPairedDevices;
@property (readonly, nonatomic) unsigned long long deviceFeatures;
@property (readonly, nonatomic) BOOL requiresAuthorization;
@property (readonly, nonatomic) BOOL automaticallyAllowsConnectionsFromPeersInHomeGroup;
@property (readonly, nonatomic) BOOL onlyAllowsConnectionsFromPeersInHomeGroup;
@property (readonly, nonatomic) BOOL canAccessRemoteAssets;
@property (readonly, nonatomic) BOOL canAccessAppleMusic;
@property (readonly, nonatomic) BOOL canAccessiCloudMusicLibrary;
@property (readonly, nonatomic) BOOL supportsBufferedAirPlay;
@property (readonly) float volume;
@property (readonly) BOOL canSetVolume;
@property (readonly) long long volumeControlType;
@property (readonly, nonatomic) BOOL canBeGrouped;
@property (readonly, copy, nonatomic) NSString *groupID;
@property (readonly, copy, nonatomic) NSString *proposedGroupID;
@property (readonly, nonatomic) BOOL canBeGroupLeader;
@property (readonly, nonatomic) BOOL isGroupLeader;
@property (readonly, nonatomic) BOOL participatesInGroupPlayback;
@property (readonly, nonatomic) BOOL groupContainsGroupLeader;
@property (readonly, nonatomic) NSString *logicalDeviceID;
@property (readonly, nonatomic) BOOL isLogicalDeviceLeader;
@property (readonly, nonatomic) BOOL canCommunicateWithAllLogicalDeviceMembers;
@property (readonly, nonatomic) BOOL canRelayCommunicationChannel;
@property (readonly, nonatomic) BOOL canPlayEncryptedProgressiveDownloadAssets;
@property (readonly, nonatomic) BOOL canFetchMediaDataFromSender;
@property (readonly, nonatomic) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property (readonly, nonatomic) BOOL supportsBluetoothSharing;
@property (readonly, nonatomic) long long HAPConformance;
@property (readonly, nonatomic) BOOL supportsHeadTrackedSpatialAudio;
@property (readonly, nonatomic, getter=isHeadTrackedSpatialAudioActive) BOOL headTrackedSpatialAudioActive;
@property (readonly, nonatomic) NSArray *availableBluetoothListeningModes;
@property (readonly, nonatomic) NSString *currentBluetoothListeningMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerLocalDeviceDidChangeListener:(Class)a0;
+ (void)localDeviceWithCompletion:(id /* block */)a0;

- (BOOL)setCurrentBluetoothListeningMode:(id)a0 error:(id *)a1;
- (void)setVolume:(float)a0;
- (void)setSecondDisplayEnabled:(BOOL)a0;
- (void)setSecondDisplayMode:(id)a0 completionHandler:(id /* block */)a1;
- (void)configureUsingBlock:(id /* block */)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_volumeDidChangeForEndpointWithID:(struct __CFString { } *)a0;
- (void)dealloc;
- (id)initWithSyncController:(struct OpaqueAPSyncController { } *)a0 secondaryImpl:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)_volumeControlSupportedDidChangeForEndpointWithID:(struct __CFString { } *)a0;
- (void)_volumeControlTypeDidChangeForEndpointWithID:(struct __CFString { } *)a0;
- (void)_proposedGroupIDDidChangeForEndpointWithID:(struct __CFString { } *)a0;

@end
