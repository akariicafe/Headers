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

- (BOOL)isCellularDataRestrictedForStoreApps;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (id)initWithListenerEndpointProvider:(id)a0;
- (BOOL)isCellularDataRestrictedForVideos;
- (BOOL)canShowCloudVideo;
- (BOOL)canShowCloudMusic;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (BOOL)isCellularDataRestricted;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (void).cxx_destruct;
- (id)_xpcConnectionWithListenerEndpoint:(id)a0;

@end
