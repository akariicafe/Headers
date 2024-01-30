@class NSString, MPAVRouteConnection, MPMRAVEndpointWrapper, NSObject, MRAVEndpoint;
@protocol OS_dispatch_queue;

@interface MPAVEndpointRoute : MPAVRoute {
    MPAVRouteConnection *_connection;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSString *_sortName;
}

@property (retain, nonatomic) MPAVRouteConnection *connection;
@property (readonly, nonatomic) void *endpoint;
@property (readonly, nonatomic) MRAVEndpoint *endpointObject;
@property (retain, nonatomic) MPMRAVEndpointWrapper *endpointWrapper;
@property (readonly, nonatomic) NSString *sortName;
@property (readonly, nonatomic) BOOL canModifyGroupMembership;

+ (BOOL)supportsSecureCoding;
+ (void)getActiveEndpointRouteWithCompletion:(id /* block */)a0;

- (BOOL)isPhoneRoute;
- (BOOL)isClusterRoute;
- (BOOL)supportsAirPlayGrouping;
- (BOOL)isB520Route;
- (id)designatedGroupLeaderRouteUID;
- (BOOL)isSplitRoute;
- (long long)numberOfOutputDevices;
- (id)designatedGroupLeaderName;
- (BOOL)supportsRemoteControl;
- (void)encodeWithCoder:(id)a0;
- (id)groupLeaderAirplayIdentifier;
- (id)clusterComposition;
- (BOOL)isDeviceRoute;
- (BOOL)isAirPlayingToDevice;
- (BOOL)isRoutingToWirelessDevice;
- (BOOL)isStereoPair;
- (long long)clusterType;
- (id)routeUID;
- (long long)routeSubtype;
- (BOOL)isHomeTheaterRoute;
- (id)description;
- (id)routeName;
- (BOOL)canAccessRemoteAssets;
- (id)initWithEndpoint:(void *)a0;
- (BOOL)isMacRoute;
- (BOOL)isProxyGroupPlayer;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isTVRoute;
- (BOOL)isHomePodRoute;
- (long long)routeType;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)isLowFidelityRoute;
- (BOOL)isDeviceSpeakerRoute;
- (BOOL)isSplitterCapable;
- (BOOL)isAppleTVRoute;
- (void)dealloc;
- (BOOL)isLowLatencyRoute;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (id)routeNames;
- (BOOL)canFetchMediaDataFromSender;
- (id)groupUID;
- (void)establishGroup;
- (long long)originalRouteSubtype;
- (void)_endpointDidChange:(id)a0;
- (void)_endpointOutputDevicesDidChange:(id)a0;
- (id)effectiveGroupLeader;
- (BOOL)_groupLeaderIsOfDeviceSubtype:(unsigned int)a0;
- (unsigned long long)_outputDevicesComposition;
- (BOOL)supportsGrouping;

@end
