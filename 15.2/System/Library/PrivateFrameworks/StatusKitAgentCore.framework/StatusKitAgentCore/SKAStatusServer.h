@class NSXPCListener, NSString, NSMutableArray, NSObject;
@protocol SKAStatusEncryptionManaging, SKAStatusReceivingManaging, SKAInvitationManaging, SKAMessagingProviding, SKADatabaseManaging, OS_dispatch_queue, SKADatabaseProviding, SKAChannelManaging, SKAStatusSubscriptionManaging, SKAStatusPublishingManaging;

@interface SKAStatusServer : NSObject <NSXPCListenerDelegate, SKADatabaseProvidingDelegate, SKAMessagingProvidingDelegate, SKAChannelManagingDelegate, SKAStatusReceivingManagingDelegate, SKADatabaseManagingDelegate, SKAInvitationManagingDelegate, SKAStatusPublishingServiceClientDelegate, SKAStatusSubscriptionServiceClientDelegate>

@property (retain, nonatomic) NSXPCListener *publishingServiceListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *publishingServiceConnectionQueue;
@property (retain, nonatomic) NSMutableArray *publishingServiceConnectedClients;
@property (retain, nonatomic) NSXPCListener *subscriptionServiceListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *subscriptionServiceConnectionQueue;
@property (retain, nonatomic) NSMutableArray *subscriptionServiceConnectedClients;
@property (retain, nonatomic) id<SKADatabaseProviding> databaseProvider;
@property (retain, nonatomic) id<SKADatabaseManaging> databaseManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *invitationManagerMessagingQueue;
@property (retain, nonatomic) id<SKAMessagingProviding> invitationMessagingProvider;
@property (retain, nonatomic) id<SKAInvitationManaging> invitationManager;
@property (retain, nonatomic) id<SKAChannelManaging> channelManager;
@property (retain, nonatomic) id<SKAStatusPublishingManaging> publishingManager;
@property (retain, nonatomic) id<SKAStatusSubscriptionManaging> subscriptionManager;
@property (retain, nonatomic) id<SKAStatusEncryptionManaging> encryptionManager;
@property (retain, nonatomic) id<SKAStatusReceivingManaging> statusReceivingManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (id)sharedInstance;

- (id)_senderHandlesForChannel:(id)a0;
- (void)statusReceivingManager:(id)a0 didReceiveStatusUpdate:(id)a1 onChannel:(id)a2;
- (void)publishingServiceClientWasInvalidated:(id)a0;
- (void)donateReceivedStatusToBiomeOnChannel:(id)a0;
- (void)logState;
- (void)channelManager:(id)a0 didReceiveData:(id)a1 onChannel:(id)a2 dateReceived:(id)a3 dateExpired:(id)a4;
- (void)shutdown;
- (void)databaseManager:(id)a0 didCreateChannel:(id)a1;
- (void)invitationManager:(id)a0 didRevokeInvitationOnChannel:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)subscriptionServiceClientWasInvalidated:(id)a0;
- (void)service:(id)a0 didReceiveIncomingMessage:(id)a1 fromID:(id)a2 toID:(id)a3 messageGuid:(id)a4;
- (void)invitationManager:(id)a0 didReceiveInvitation:(id)a1 forChannel:(id)a2;
- (BOOL)_subscriptionServiceListener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)_shouldDonateToBiomeForStatusTypeIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)channelManager:(id)a0 failedToSubscribeToChannel:(id)a1 withError:(id)a2;
- (void)databaseDidReceiveRemoteChangesForChannels:(id)a0;
- (void)_setupMaintenanceActivity;
- (BOOL)_kettleFeatureEnabled;
- (void)networkBecameReachable;
- (BOOL)_publishingServiceListener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
