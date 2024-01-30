@class NSXPCListener, NSString;

@interface ANAnnounceServiceListener : NSObject <ANAnnounceServiceInterface, NSXPCListenerDelegate>

@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanForExit;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)isAnnounceEnabledForAnyAccessoryInHome:(id)a0 reply:(id /* block */)a1;
- (void)mockAnnouncement:(id)a0 forHomeWithName:(id)a1 playbackDeadline:(id)a2 completion:(id /* block */)a3;
- (void)lastPlayedAnnouncementInfo:(id /* block */)a0;
- (void)isAnnounceEnabledForAnyAccessoryOrUserInHome:(id)a0 reply:(id /* block */)a1;
- (void)sendRequest:(id)a0 completion:(id /* block */)a1;
- (void)announcementForID:(id)a0 endpointID:(id)a1 reply:(id /* block */)a2;
- (void)receivedAnnouncementIdentifiersForEndpointID:(id)a0 reply:(id /* block */)a1;
- (void)_translateSentHandlerResponseAnnouncement:(id)a0 request:(id)a1 error:(id)a2 toRequestSentHandler:(id /* block */)a3;
- (void)isEndpointWithUUID:(id)a0 inRoomWithName:(id)a1 reply:(id /* block */)a2;
- (void)isLocalDeviceInRoom:(id)a0 reply:(id /* block */)a1;
- (void)getUnplayedAnnouncementsForEndpointID:(id)a0 completionHandler:(id /* block */)a1;
- (void)contextFromAnnouncement:(id)a0 reply:(id /* block */)a1;
- (void)_sendReplyRequest:(id)a0 completion:(id /* block */)a1;
- (void)_handleError:(long long)a0 request:(id)a1 sentCompletionHandler:(id /* block */)a2;
- (void)homeNamesForContext:(id)a0 reply:(id /* block */)a1;
- (void)_sendRequest:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)_handleError:(long long)a0 request:(id)a1 requestSentCompletionHandler:(id /* block */)a2;
- (void)localParticipant:(id /* block */)a0;
- (void)sendRequestLegacy:(id)a0 completion:(id /* block */)a1;
- (void)getReceivedAnnouncementsForEndpointID:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)getScanningDeviceCandidates:(id /* block */)a0;
- (void)prewarm:(id /* block */)a0;

@end
