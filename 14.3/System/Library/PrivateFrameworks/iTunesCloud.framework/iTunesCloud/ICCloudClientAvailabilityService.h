@class NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, ICCloudServerListenerEndpointProviding;

@interface ICCloudClientAvailabilityService : NSObject <ICCloudAvailability>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, weak, nonatomic) id<ICCloudServerListenerEndpointProviding> listenerEndpointProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShowCloudDownloadButtons;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (BOOL)canShowCloudVideo;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (void).cxx_destruct;
- (BOOL)isCellularDataRestricted;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (id)_xpcConnectionWithListenerEndpoint:(id)a0;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (BOOL)canShowCloudMusic;
- (BOOL)isCellularDataRestrictedForVideos;
- (id)initWithListenerEndpointProvider:(id)a0;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (BOOL)isCellularDataRestrictedForStoreApps;

@end
