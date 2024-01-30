@class SKAStatusPublishingServiceClientConnection, NSString, SKAInvitationManager, NSObject;
@protocol SKAStatusPublishingManaging, SKADatabaseManaging, OS_dispatch_queue, SKAMessagingProviding, SKADatabaseProviding, SKAStatusPublishingServiceClientDelegate, SKAChannelManaging;

@interface SKAStatusPublishingServiceClient : NSObject <SKStatusPublishingDaemonProtocol, SKAStatusPublishingServiceClientConnectionLifecycleDelegate>

@property (retain, nonatomic) SKAStatusPublishingServiceClientConnection *clientConnection;
@property (weak, nonatomic) id<SKAStatusPublishingServiceClientDelegate> delegate;
@property (retain, nonatomic) id<SKADatabaseManaging> databaseManager;
@property (retain, nonatomic) id<SKADatabaseProviding> databaseProvider;
@property (retain, nonatomic) id<SKAMessagingProviding> messagingProvider;
@property (retain, nonatomic) SKAInvitationManager *invitationManager;
@property (retain, nonatomic) id<SKAChannelManaging> channelManager;
@property (retain, nonatomic) id<SKAStatusPublishingManaging> publishingManager;
@property (nonatomic) BOOL accountIsStatusKitCapable;
@property (nonatomic) BOOL accountCheckCompleted;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) NSString *statusTypeIdenfifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (id)_noPersonalChannelErrorForStatusTypeIdentifier:(id)a0;
+ (id)_accountNotCapableError;
+ (id)_dateCreatedDriftError;
+ (id)_missingEntitlmentErrorForStatusTypeIdentifier:(id)a0;
+ (id)_noUsersToShareWithError;
+ (id)_unableToResolveSenderHandleError;

- (void)fetchHandleInvitability:(id)a0 fromHandle:(id)a1 forStatusTypeIdentifier:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)inviteHandles:(id)a0 fromSenderHandle:(id)a1 withInvitationPayload:(id)a2 statusTypeIdentifier:(id)a3 completion:(id /* block */)a4;
- (void)invitedHandlesForStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)isHandleInviteable:(id)a0 fromHandle:(id)a1 forStatusTypeIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)isHandleInvited:(id)a0 fromSenderHandle:(id)a1 forStatusTypeIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)publishStatusRequest:(id)a0 statusTypeIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)registerForDelegateCallbacksWithStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeAllInvitedHandlesFromPersonalChannelWithStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeInvitedHandles:(id)a0 statusTypeIdentifier:(id)a1 completion:(id /* block */)a2;
- (double)_unscheduledPublishMaxDelayTime;
- (double)_delayForStatusPublishRequest:(id)a0;
- (double)_randomScheduledPublishDelay;
- (double)_randomSecondaryDeviceRepublishDelay;
- (double)_randomUnscheduledPublishDelay;
- (double)_scheduledPublishMaxDelayTime;
- (double)_secondaryDeviceRepublishMaxDelayTime;
- (double)_secondaryDeviceRepublishMinDelayTime;
- (id)_serverBagNumberForKey:(id)a0;
- (double)_serverBagTimeIntervalForKey:(id)a0 withDefaultValue:(double)a1;
- (void)accountIsStatusKitCapableWithCompletion:(id /* block */)a0;
- (id)initWithXPCConnection:(id)a0 queue:(id)a1 delegate:(id)a2 databaseManager:(id)a3 invitationManager:(id)a4 publishingManager:(id)a5 channelManager:(id)a6;
- (void)publishingServiceClientConnectionWasInterrupted:(id)a0;
- (void)publishingServiceClientConnectionWasInvalidated:(id)a0;

@end
