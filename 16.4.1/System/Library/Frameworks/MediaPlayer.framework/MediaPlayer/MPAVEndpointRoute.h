@class MPAVOutputDeviceRoute, NSString, MPAVRouteConnection, MPMRAVEndpointWrapper, NSObject, MRAVEndpoint;
@protocol OS_dispatch_queue;

@interface MPAVEndpointRoute : MPAVRoute {
    MPAVRouteConnection *_connection;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSString *_sortName;
}

@property (retain, nonatomic) MPAVRouteConnection *connection;
@property (readonly, nonatomic) MPAVOutputDeviceRoute *predictedOutputDevice;
@property (readonly, nonatomic) void *endpoint;
@property (readonly, nonatomic) MRAVEndpoint *endpointObject;
@property (retain, nonatomic) MPMRAVEndpointWrapper *endpointWrapper;
@property (readonly, nonatomic) NSString *sortName;
@property (readonly, nonatomic) BOOL canModifyGroupMembership;

+ (void)getActiveEndpointRouteWithCompletion:(id /* block */)a0;
+ (BOOL)supportsSecureCoding;

- (BOOL)canAccessRemoteAssets;
- (BOOL)supportsGrouping;
- (BOOL)canFetchMediaDataFromSender;
- (long long)routeType;
- (long long)clusterType;
- (id)clusterComposition;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (id)groupUID;
- (void)resetPredictedOutputDevice;
- (id)productIdentifier;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isProxyGroupPlayer;
- (BOOL)isMacRoute;
- (id)initWithCoder:(id)a0;
- (BOOL)isSplitterCapable;
- (BOOL)isClusterRoute;
- (BOOL)isPhoneRoute;
- (BOOL)supportsAirPlayGrouping;
- (id)initWithEndpoint:(void *)a0;
- (BOOL)isHomePodRoute;
- (id)routeUID;
- (void)dealloc;
- (id)routeNames;
- (BOOL)isLowFidelityRoute;
- (BOOL)isHomeTheaterRoute;
- (id)designatedGroupLeaderRouteUID;
- (BOOL)isSplitRoute;
- (BOOL)isB520Route;
- (BOOL)isLowLatencyRoute;
- (BOOL)isDeviceSpeakerRoute;
- (long long)routeSubtype;
- (id)routeName;
- (BOOL)isDeviceRoute;
- (BOOL)isAppleTVRoute;
- (BOOL)isPickable;
- (BOOL)isStereoPair;
- (id)description;
- (long long)originalRouteSubtype;
- (void).cxx_destruct;
- (void)_endpointDidChange:(id)a0;
- (void)_endpointOutputDevicesDidChange:(id)a0;
- (void)_endpointPredictedOutputDeviceDidChange:(id)a0;
- (BOOL)_groupLeaderIsOfDeviceSubtype:(unsigned int)a0;
- (unsigned long long)_outputDevicesComposition;
- (id)designatedGroupLeaderName;
- (id)effectiveGroupLeader;
- (void)establishGroup;
- (id)groupLeaderAirplayIdentifier;
- (BOOL)isAirPlayingToDevice;
- (BOOL)isRoutingToWirelessDevice;
- (BOOL)isTVRoute;
- (long long)numberOfOutputDevices;
- (BOOL)supportsRemoteControl;

@end
