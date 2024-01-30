@class NSString, MPAVRouteConnection, MPMRAVEndpointWrapper, NSObject;
@protocol OS_dispatch_queue;

@interface MPAVEndpointRoute : MPAVRoute {
    MPAVRouteConnection *_connection;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSString *_sortName;
}

@property (retain, nonatomic) MPAVRouteConnection *connection;
@property (readonly, nonatomic) void *endpoint;
@property (retain, nonatomic) MPMRAVEndpointWrapper *endpointWrapper;
@property (readonly, nonatomic) NSString *sortName;
@property (readonly, nonatomic) BOOL canModifyGroupMembership;

+ (BOOL)supportsSecureCoding;
+ (void)getActiveEndpointRouteWithCompletion:(id /* block */)a0;

- (id)clusterComposition;
- (long long)routeType;
- (id)routeName;
- (id)routeUID;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (BOOL)isDeviceRoute;
- (BOOL)isClusterRoute;
- (BOOL)canAccessRemoteAssets;
- (BOOL)canFetchMediaDataFromSender;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)supportsGrouping;
- (BOOL)isProxyGroupPlayer;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEndpoint:(void *)a0;
- (long long)routeSubtype;
- (id)initWithCoder:(id)a0;
- (long long)originalRouteSubtype;
- (id)description;
- (BOOL)isHomePodRoute;
- (BOOL)isStereoPair;
- (BOOL)supportsAirPlayGrouping;
- (void)establishGroup;
- (void)_endpointDidChange:(id)a0;
- (void)_endpointOutputDevicesDidChange:(id)a0;
- (BOOL)_groupLeaderIsOfDeviceSubtype:(unsigned int)a0;
- (unsigned long long)_outputDevicesComposition;
- (BOOL)isHomeTheaterRoute;
- (id)groupUID;
- (BOOL)isLowLatencyRoute;
- (BOOL)isDeviceSpeakerRoute;
- (BOOL)isTVRoute;
- (BOOL)isB520Route;
- (BOOL)isSplitterCapable;
- (BOOL)isSplitRoute;
- (id)designatedGroupLeaderName;
- (BOOL)isAirPlayingToDevice;
- (id)groupLeaderAirplayIdentifier;
- (BOOL)supportsRemoteControl;
- (long long)numberOfOutputDevices;
- (BOOL)isRoutingToWirelessDevice;
- (id)routeNames;
- (BOOL)isAppleTVRoute;
- (void)encodeWithCoder:(id)a0;

@end
