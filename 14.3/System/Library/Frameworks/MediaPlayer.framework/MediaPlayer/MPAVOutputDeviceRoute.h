@class NSString, NSArray;

@interface MPAVOutputDeviceRoute : MPAVRoute

@property (class, readonly, copy, nonatomic) NSString *localDeviceUID;

@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) void *logicalLeaderOutputDevice;
@property (readonly, nonatomic, getter=isGroupLeader) BOOL groupLeader;

+ (long long)pickableRouteTypeForOutputDevice:(void *)a0;
+ (void *)logicalLeaderFromOutputDevices:(id)a0;

- (id)clusterComposition;
- (long long)routeType;
- (id)routeName;
- (id)routeUID;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (BOOL)isDeviceRoute;
- (BOOL)_anyOutputDevicePassesTest:(id /* block */)a0;
- (BOOL)isClusterRoute;
- (BOOL)canAccessRemoteAssets;
- (BOOL)canFetchMediaDataFromSender;
- (BOOL)isVolumeControlAvailable;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)supportsGrouping;
- (BOOL)isProxyGroupPlayer;
- (void).cxx_destruct;
- (id)initWithOutputDevices:(id)a0;
- (long long)pickableRouteType;
- (id)productIdentifier;
- (BOOL)isPickedOnPairedDevice;
- (long long)routeSubtype;
- (long long)originalRouteSubtype;
- (id)description;
- (BOOL)isHomePodRoute;
- (BOOL)isStereoPair;
- (BOOL)supportsAirPlayGrouping;
- (BOOL)isHomeTheaterRoute;
- (BOOL)requiresPassword;
- (id)groupUID;
- (BOOL)isLowLatencyRoute;
- (BOOL)_anyOutputDevicePassesMRFunction:(void /* function */ *)a0;
- (BOOL)isCarplayRoute;
- (BOOL)supportsWirelessDisplay;
- (BOOL)isDeviceSpeakerRoute;
- (BOOL)isB520Route;
- (BOOL)isAirPlayRoute;
- (BOOL)isSplitterCapable;
- (id)playingPairedDeviceName;
- (BOOL)isAppleTVRoute;

@end
