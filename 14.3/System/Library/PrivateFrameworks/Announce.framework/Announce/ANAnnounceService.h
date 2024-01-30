@class NSString, ANParticipant;
@protocol ANAnnounceServiceDelegate, ANIDSConnectionProvider, ANRapportConnectionProvider;

@interface ANAnnounceService : NSObject <ANConnectionDelegate>

@property (readonly, nonatomic) id<ANRapportConnectionProvider> rapportConnection;
@property (readonly, nonatomic) id<ANIDSConnectionProvider> idsConnection;
@property (weak, nonatomic) id<ANAnnounceServiceDelegate> delegate;
@property (readonly, nonatomic) ANParticipant *localParticipant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_performPreflightChecksForSendingContent:(id)a0 toHome:(id)a1;
+ (id)_performPreflightChecksForSendingToRooms:(id)a0 zones:(id)a1;
+ (id)performBasicValidationForAnnouncement:(id)a0;
+ (id)performIDSValidationForAnnouncement:(id)a0 withSenderContext:(id)a1;
+ (id)performRapportValidationForAnnouncement:(id)a0 withSenderContext:(id)a1;
+ (id)performPreflightChecksForSendingContent:(id)a0 toHome:(id)a1 rooms:(id)a2 zones:(id)a3;
+ (void)purgeTemporaryFiles;
+ (BOOL)_isAnnouncerAdminInAnnouncement:(id)a0 home:(id)a1;
+ (id)announcementForUser:(id)a0 inHome:(id)a1 fromAnnouncement:(id)a2;
+ (void)_setIdentifiersForIDSService:(id)a0 inLocation:(id)a1 home:(id)a2;
+ (id)createAnnouncementWithContent:(id)a0 fromSource:(id)a1 forLocation:(id)a2 inHome:(id)a3 isReply:(BOOL)a4 error:(id *)a5;
+ (id)announcementForDevice:(id)a0 inHome:(id)a1 fromAnnouncement:(id)a2;
+ (id)announcementForAccessory:(id)a0 inHome:(id)a1 fromAnnouncement:(id)a2;
+ (id)locationForHome:(id)a0 rooms:(id)a1 zones:(id)a2 idsService:(id)a3;
+ (id)locationForReplyToAnnouncement:(id)a0 home:(id)a1 idsService:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)cleanForExit;
- (void)mockAnnouncement:(id)a0 forHome:(id)a1 playbackDeadline:(id)a2 sentHandler:(id /* block */)a3;
- (id)getScanningDeviceCandidates;
- (void)sendAnnouncement:(id)a0 fromSource:(id)a1 toHome:(id)a2 rooms:(id)a3 zones:(id)a4 sentHandler:(id /* block */)a5;
- (void)sendReply:(id)a0 fromSource:(id)a1 forAnnouncement:(id)a2 completion:(id /* block */)a3;
- (void)broadcastReply:(id)a0 fromSource:(id)a1 forAnnouncement:(id)a2 completion:(id /* block */)a3;
- (void)forwardAnnouncementToCompanion:(id)a0;
- (void)connection:(id)a0 failedDeliveryForMessage:(id)a1 withError:(id)a2;
- (void)connection:(id)a0 didReceiveMessage:(id)a1 fromSender:(id)a2 senderContext:(id)a3 handler:(id /* block */)a4;
- (id)connectionDidReceiveRequestForHomeLocationStatus:(id)a0;
- (id)initWithIDSConnection:(id)a0 rapportConnection:(id)a1;
- (void)_relayAnnouncementThroughHomePod:(id)a0 inHome:(id)a1 rooms:(id)a2 zones:(id)a3 sentHandler:(id /* block */)a4;
- (void)_sendAnnouncement:(id)a0 toDestination:(id)a1 sentHandler:(id /* block */)a2;
- (void)_logDebugInfoForHome:(id)a0;
- (void)_forwardRelayRequest:(id)a0 withSenderContext:(id)a1 sentHandler:(id /* block */)a2;
- (void)_fulfillRelayRequest:(id)a0 withSenderContext:(id)a1 sentHandler:(id /* block */)a2;

@end
