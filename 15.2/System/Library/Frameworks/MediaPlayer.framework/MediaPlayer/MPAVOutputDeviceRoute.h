@class NSString, NSArray;

@interface MPAVOutputDeviceRoute : MPAVRoute

@property (class, readonly, copy, nonatomic) NSString *localDeviceUID;

@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) void *logicalLeaderOutputDevice;
@property (readonly, nonatomic, getter=isGroupLeader) BOOL groupLeader;

+ (void *)logicalLeaderFromOutputDevices:(id)a0;
+ (long long)pickableRouteTypeForOutputDevice:(void *)a0;

- (id)playingPairedDeviceName;
- (BOOL)isPhoneRoute;
- (BOOL)isClusterRoute;
- (BOOL)supportsAirPlayGrouping;
- (BOOL)supportsHeadTrackedSpatialAudio;
- (id)productIdentifier;
- (BOOL)_anyOutputDevicePassesTest:(id /* block */)a0;
- (BOOL)isB520Route;
- (id)designatedGroupLeaderRouteUID;
- (id)clusterComposition;
- (BOOL)isDeviceRoute;
- (BOOL)isCarplayRoute;
- (BOOL)isStereoPair;
- (BOOL)requiresPassword;
- (long long)clusterType;
- (id)routeUID;
- (long long)routeSubtype;
- (long long)pickableRouteType;
- (BOOL)isHomeTheaterRoute;
- (BOOL)supportsWirelessDisplay;
- (id)description;
- (id)routeName;
- (BOOL)canAccessRemoteAssets;
- (BOOL)isVolumeControlAvailable;
- (BOOL)isMacRoute;
- (BOOL)isProxyGroupPlayer;
- (void).cxx_destruct;
- (BOOL)headTrackedSpatialAudioEnabled;
- (BOOL)isPickedOnPairedDevice;
- (id)initWithOutputDevices:(id)a0;
- (BOOL)isHomePodRoute;
- (long long)routeType;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)_anyOutputDevicePassesMRFunction:(void /* function */ *)a0;
- (BOOL)isLowFidelityRoute;
- (BOOL)isDeviceSpeakerRoute;
- (BOOL)isSplitterCapable;
- (BOOL)isAppleTVRoute;
- (BOOL)isAirPlayRoute;
- (BOOL)isLowLatencyRoute;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (BOOL)canFetchMediaDataFromSender;
- (id)groupUID;
- (long long)originalRouteSubtype;
- (BOOL)supportsGrouping;

@end
