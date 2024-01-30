@class NSArray, NSPointerArray, NSString, NSObject, CPCoreXPCServiceClient;
@protocol OS_dispatch_queue;

@interface CPCoreClient : NSObject <CPCoreServiceObserver>

@property (nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (retain, nonatomic) CPCoreXPCServiceClient *serviceClient;
@property (retain, nonatomic) NSPointerArray *observers;
@property (readonly, nonatomic) NSArray *participants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)_destroySharedInstance;

- (void)_addObserver:(id)a0;
- (void)_removeObserver:(id)a0;
- (void)sessionDidEnd:(id)a0;
- (id)initWithObserver:(id)a0;
- (void)didFailWithError:(id)a0;
- (id)localParticipant;
- (void).cxx_destruct;
- (id)_allParticipants;
- (void)_activeSession:(id /* block */)a0;
- (void)resetPriorityForUnreliableLink:(unsigned int)a0;
- (void)_activeSceneSharingRequestsWithReply:(id /* block */)a0;
- (void)_activeSharingRequestsWithReply:(id /* block */)a0;
- (void)_currentlySharedAppsWithReply:(id /* block */)a0;
- (void)_getSessionStatusEx:(id /* block */)a0;
- (BOOL)_isLoggedIn;
- (id)_localParticipant;
- (void)_sendAppSharingRequest:(id)a0 completion:(id /* block */)a1;
- (void)_sendModelSyncData:(id)a0 toParticipants:(id)a1 completion:(id /* block */)a2;
- (void)didInitiateAppSharingRequest:(id)a0;
- (void)didReceiveAppSharingRequestFrom:(id)a0 sharingRequest:(id)a1;
- (void)didReceiveData:(id)a0 ofType:(unsigned char)a1 fromParticipant:(id)a2;
- (void)didReceiveModelSyncData:(id)a0 fromParticipant:(id)a1;
- (id)initWithObserver:(id)a0 queue:(id)a1;
- (id)initWithObserver:(id)a0 queue:(id)a1 serviceClient:(id)a2;
- (void)participantDidJoinSession:(id)a0;
- (void)participantDidLeaveSession:(id)a0;
- (void)participantProcessConnectedFrom:(id)a0;
- (void)participantProcessDisconnectedFrom:(id)a0;
- (void)resetPriorityForReliableLink:(unsigned int)a0;
- (void)sendDataReliably:(id)a0 toParticipants:(id)a1 completion:(id /* block */)a2;
- (void)sendDataReliablyToAllParticipants:(id)a0 completion:(id /* block */)a1;
- (void)sendDataUnreliably:(id)a0 toParticipants:(id)a1 completion:(id /* block */)a2;
- (void)sendDataUnreliablyToAllParticipants:(id)a0 completion:(id /* block */)a1;
- (void)sessionDidChange:(id)a0;
- (void)sessionDidStart:(id)a0;
- (void)willInitiateAppSharingRequest:(id)a0 sharingHandler:(id /* block */)a1;

@end
