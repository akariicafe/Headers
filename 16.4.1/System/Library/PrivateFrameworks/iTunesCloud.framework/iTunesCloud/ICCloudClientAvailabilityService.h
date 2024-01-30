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
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (BOOL)canShowCloudVideo;
- (id)_xpcConnectionWithListenerEndpoint:(id)a0;
- (BOOL)isCellularDataRestrictedForVideos;
- (id)initWithListenerEndpointProvider:(id)a0;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)isCellularDataRestricted;
- (BOOL)canShowCloudMusic;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (void).cxx_destruct;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;

@end
