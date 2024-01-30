@class NSString, NSArray, MRAVOutputDevice;

@interface MPAVOutputDeviceRoute : MPAVRoute {
    NSArray *_clusterMembers;
    NSArray *_clusterCompositionMembers;
}

@property (class, readonly, copy, nonatomic) NSString *localDeviceUID;

@property (readonly, nonatomic, getter=isPhoneLocalRoute) BOOL phoneLocalRoute;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) void *logicalLeaderOutputDevice;
@property (readonly, nonatomic) MRAVOutputDevice *outputDevice;
@property (readonly, nonatomic, getter=isGroupLeader) BOOL groupLeader;
@property (readonly, nonatomic) NSArray *dnsNames;
@property (readonly, nonatomic) NSArray *clusterMembers;

+ (void *)logicalLeaderFromOutputDevices:(id)a0;
+ (long long)pickableRouteTypeForOutputDevice:(void *)a0;

- (BOOL)canAccessRemoteAssets;
- (BOOL)supportsGrouping;
- (BOOL)canFetchMediaDataFromSender;
- (long long)routeType;
- (long long)clusterType;
- (id)clusterComposition;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (BOOL)supportsHeadTrackedSpatialAudio;
- (id)groupUID;
- (id)productIdentifier;
- (BOOL)isAppleAccessory;
- (BOOL)isPicked;
- (BOOL)isVolumeControlAvailable;
- (BOOL)isKnown;
- (id)playingPairedDeviceName;
- (BOOL)requiresPassword;
- (id)initWithOutputDevices:(id)a0;
- (BOOL)isProxyGroupPlayer;
- (BOOL)isMacRoute;
- (BOOL)supportsWirelessDisplay;
- (BOOL)isSplitterCapable;
- (BOOL)_anyOutputDevicePassesTest:(id /* block */)a0;
- (BOOL)isClusterRoute;
- (long long)pickableRouteType;
- (BOOL)isPhoneRoute;
- (BOOL)supportsAirPlayGrouping;
- (BOOL)headTrackedSpatialAudioEnabled;
- (BOOL)isCarplayRoute;
- (BOOL)isHomePodRoute;
- (id)routeUID;
- (BOOL)isLowFidelityRoute;
- (BOOL)isHomeTheaterRoute;
- (id)subRoutes;
- (id)designatedGroupLeaderRouteUID;
- (id)clusterCompositionRoutes;
- (BOOL)isB520Route;
- (BOOL)isLowLatencyRoute;
- (id)initWithOutputDevices:(id)a0 parentRoute:(id)a1;
- (BOOL)isDeviceSpeakerRoute;
- (long long)routeSubtype;
- (BOOL)isPickedOnPairedDevice;
- (id)routeName;
- (BOOL)isDeviceRoute;
- (BOOL)isAppleTVRoute;
- (BOOL)isPickable;
- (BOOL)isStereoPair;
- (BOOL)isNearby;
- (BOOL)_anyOutputDevicePassesMRFunction:(void /* function */ *)a0;
- (id)description;
- (long long)originalRouteSubtype;
- (BOOL)isAirPlayRoute;
- (void).cxx_destruct;

@end
