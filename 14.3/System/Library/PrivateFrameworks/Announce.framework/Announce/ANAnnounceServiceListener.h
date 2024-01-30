@class NSXPCListener, ANAnnounceService, NSString;

@interface ANAnnounceServiceListener : NSObject <ANAnnounceServiceInterface, ANAnnounceServiceDelegate, NSXPCListenerDelegate>

@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) ANAnnounceService *announceService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)prewarm:(id /* block */)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)sendRequest:(id)a0 completion:(id /* block */)a1;
- (void)cleanForExit;
- (void)localParticipant:(id /* block */)a0;
- (void)sendRequestLegacy:(id)a0 completion:(id /* block */)a1;
- (void)mockAnnouncement:(id)a0 forHomeWithName:(id)a1 playbackDeadline:(id)a2 completion:(id /* block */)a3;
- (void)receivedAnnouncementIDs:(id /* block */)a0;
- (void)announcementForID:(id)a0 reply:(id /* block */)a1;
- (void)getReceivedAnnouncementsWithCompletionHandler:(id /* block */)a0;
- (void)getUnplayedAnnouncementsWithCompletionHandler:(id /* block */)a0;
- (void)lastPlayedAnnouncementInfo:(id /* block */)a0;
- (void)getScanningDeviceCandidates:(id /* block */)a0;
- (void)contextFromAnnouncement:(id)a0 reply:(id /* block */)a1;
- (void)homeNamesForContext:(id)a0 reply:(id /* block */)a1;
- (void)isLocalDeviceInRoom:(id)a0 reply:(id /* block */)a1;
- (void)isAnnounceEnabledForAnyAccessoryInHome:(id)a0 reply:(id /* block */)a1;
- (void)isAnnounceEnabledForAnyAccessoryOrUserInHome:(id)a0 reply:(id /* block */)a1;
- (void)_translateSentHandlerResponseAnnouncement:(id)a0 error:(id)a1 toRequestSentHandler:(id /* block */)a2;
- (void)_sendRequestWithNames:(id)a0 completion:(id /* block */)a1;
- (void)_sendRequestWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)_sendReplyRequest:(id)a0 completion:(id /* block */)a1;
- (void)_handleError:(long long)a0 requestSentCompletionHandler:(id /* block */)a1;
- (void)_handleError:(long long)a0 sentCompletionHandler:(id /* block */)a1;
- (void)receivedAnnouncement:(id)a0;
- (void)failedToDeliverAnnouncement:(id)a0 error:(id)a1;

@end
