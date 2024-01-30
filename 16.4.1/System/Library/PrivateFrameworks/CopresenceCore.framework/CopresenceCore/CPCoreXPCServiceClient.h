@class NSString, NSXPCConnection, NSMutableDictionary, CPBroadcastLink, CPParticipant, NSObject;
@protocol CPCoreService, CPCoreServiceObserver, OS_dispatch_source, OS_dispatch_queue;

@interface CPCoreXPCServiceClient : NSObject <CPConnectionProviding, CPParticipantDelegate, CPLinkDelegate, CPCoreService, CPCoreServiceObserver> {
    NSXPCConnection *_connection;
    NSMutableDictionary *_participantControllers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _participantsLock;
    unsigned long long _connectionRetryCount;
    NSObject<OS_dispatch_source> *_timer;
    CPParticipant *_cachedLocalParticipant;
    CPBroadcastLink *_broadcastLink;
}

@property (class, readonly, nonatomic) BOOL _hasEntitlements;
@property (class, copy, nonatomic) id /* block */ xpcConnectionInterfaceConfigurator;

@property (weak, nonatomic) id<CPCoreServiceObserver> observer;
@property (readonly, nonatomic) id<CPCoreService> remoteObjectProxy;
@property (nonatomic) unsigned int reliableLinkPriority;
@property (nonatomic) unsigned int unreliableLinkPriority;
@property (readonly, nonatomic) CPParticipant *localParticipant;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *networkQueue;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)clientXPCInterface;
- (void)sessionDidEnd:(id)a0;
- (id)initWithObserver:(id)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)didFailWithError:(id)a0;
- (id)serverXPCInterface;
- (id)machServiceName;
- (void)dealloc;
- (void)removeSessionObserver:(id)a0;
- (void)_retryConnection;
- (void).cxx_destruct;
- (id)allParticipants;
- (oneway void)activeSharingRequestsWithReply:(id /* block */)a0;
- (void)participant:(id)a0 didBecomeAvailable:(BOOL)a1;
- (void)resetPriorityForUnreliableLink:(unsigned int)a0;
- (void)_closeBroadcastLink;
- (id)_connectedParticipantsUnsafe;
- (id)_createDispatchTimer:(double)a0 queue:(id)a1 block:(id /* block */)a2;
- (void)_getConnectedParticipantsWithReply:(id /* block */)a0;
- (void)_participantDidJoinSession:(id)a0;
- (void)_participantDidLeaveSession:(id)a0;
- (void)_participantProcessConnectedFrom:(id)a0;
- (void)_participantProcessDisconnectedFrom:(id)a0;
- (void)_setupBroadcastLink;
- (void)_tearDownParticipants;
- (void)_tearDownTimer;
- (oneway void)activeSceneSharingRequestsWithReply:(id /* block */)a0;
- (oneway void)activeSession:(id /* block */)a0;
- (void)broadcastUnreliableData:(id)a0 completion:(id /* block */)a1;
- (id)connectedParticipants;
- (oneway void)currentlySharedAppsWithReply:(id /* block */)a0;
- (void)didInitiateAppSharingRequest:(id)a0;
- (void)didReceiveAppSharingRequestFrom:(id)a0 sharingRequest:(id)a1;
- (void)didReceiveBroadcastData:(id)a0 from:(id)a1;
- (void)didReceiveData:(id)a0 ofType:(unsigned char)a1 from:(id)a2;
- (oneway void)getConnectedParticipantsWithReply:(id /* block */)a0;
- (oneway void)isConnectedToSession:(id /* block */)a0;
- (BOOL)isLoggedIn;
- (oneway void)localAccountName:(id /* block */)a0;
- (void)participantDidJoinSession:(id)a0;
- (void)participantDidLaunchSharedApp:(id)a0 appBundleId:(id)a1;
- (void)participantDidLeaveSession:(id)a0;
- (void)prefetchParticipants;
- (id)reLinkForRemoteParticipant:(id)a0 ofType:(unsigned char)a1;
- (void)requestBroadcastConnectionForService:(id)a0 completion:(id /* block */)a1;
- (oneway void)requestConnectionObjectForRemoteParticipant:(id)a0 linkType:(unsigned char)a1 completion:(id /* block */)a2;
- (void)requestConnectionObjectForRemoteParticipantSync:(id)a0 linkType:(unsigned char)a1 completion:(id /* block */)a2;
- (id)reservedLinkForRemoteParticipant:(id)a0 ofType:(unsigned char)a1;
- (void)resetPriorityForReliableLink:(unsigned int)a0;
- (oneway void)sendAppSharingRequest:(id)a0 completion:(id /* block */)a1;
- (void)sendUnicastData:(id)a0 ofType:(unsigned char)a1 toParticipants:(id)a2 completion:(id /* block */)a3;
- (void)sessionDidChange:(id)a0;
- (void)sessionDidStart:(id)a0;
- (BOOL)supportsLinkOfType:(unsigned char)a0;
- (void)willInitiateAppSharingRequest:(id)a0 sharingHandler:(id /* block */)a1;

@end
