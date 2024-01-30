@class NSXPCListener, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ANPlaybackSessionServiceListener : NSObject <ANLocalPlaybackSessionServiceInterface, ANRemotePlaybackSessionServiceInterface, NSXPCListenerDelegate, ANAnnouncementCoordinatorDelegate, ANRemotePlaybackStatusProvider>

@property (readonly, nonatomic) NSXPCListener *localPlaybackSessionListener;
@property (readonly, nonatomic) NSXPCListener *remotePlaybackSessionListener;
@property (readonly, nonatomic) BOOL remoteSessionsActive;
@property (retain) NSMutableSet *remotePlaybackClients;
@property (retain) NSMutableSet *localPlaybackClients;
@property (readonly) NSObject<OS_dispatch_queue> *playbackClientsSerialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_removeConnection:(id)a0;
- (void)cleanForExit;
- (void)coordinator:(id)a0 didUpdatePlaybackState:(unsigned long long)a1 forEndpointID:(id)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)setPlaybackStoppedForAnnouncement:(id)a0;
- (void)_setTimersActive:(BOOL)a0 forEndPointID:(id)a1;
- (void)startSessionForGroupID:(id)a0 reply:(id /* block */)a1;
- (void)setPlaybackStartedForAnnouncement:(id)a0;
- (BOOL)isExternalPlaybackActiveForEndpointID:(id)a0;
- (void)sendPlaybackCommand:(id)a0 forEndpointID:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_endSessionForConnection:(id)a0;
- (void)endSessionWithReply:(id /* block */)a0;
- (void)coordinator:(id)a0 didUpdateAnnouncements:(id)a1 forGroupID:(id)a2 forEndpointID:(id)a3;
- (void)coordinator:(id)a0 didFinishPlayingAnnouncementsForEndpointID:(id)a1;
- (void)playbackStateForEndpointID:(id)a0 completionHandler:(id /* block */)a1;
- (id)_clientForConnection:(id)a0;
- (void)coordinator:(id)a0 didReceiveAnnouncement:(id)a1 forGroupID:(id)a2 forEndpointID:(id)a3;
- (void)lastPlayedAnnouncementInfoForEndpointID:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)coordinator:(id)a0 didStartPlayingAnnouncementsAtMachAbsoluteTime:(unsigned long long)a1 forEndpointID:(id)a2;
- (void).cxx_destruct;
- (void)resumeWithEndpointID:(id)a0 completionHandler:(id /* block */)a1;

@end
