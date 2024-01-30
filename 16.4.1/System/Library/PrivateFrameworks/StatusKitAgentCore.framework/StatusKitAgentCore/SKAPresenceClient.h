@class SKAPresenceClientConnection, NSString, NSSet, SKPresencePayload, NSObject;
@protocol SKAPresenceClientDelegate, SKADatabaseManaging, SKAPresenceManaging, SKAStatusSubscriptionManaging, SKAInvitationManaging, OS_dispatch_queue;

@interface SKAPresenceClient : NSObject <SKPresenceDaemonProtocol, SKAClientConnectionRepresentable, SKAPresenceClientConnectionLifecycleDelegate>

@property (retain, nonatomic) SKAPresenceClientConnection *clientConnection;
@property (weak, nonatomic) id<SKAPresenceClientDelegate> delegate;
@property (retain, nonatomic) id<SKADatabaseManaging> databaseManager;
@property (retain, nonatomic) id<SKAStatusSubscriptionManaging> subscriptionManager;
@property (retain, nonatomic) id<SKAInvitationManaging> invitationManager;
@property (retain, nonatomic) id<SKAPresenceManaging> presenceManager;
@property (nonatomic) BOOL accountCheckCompleted;
@property (readonly, nonatomic) BOOL isPersonal;
@property (nonatomic) BOOL accountIsPresenceCapable;
@property (nonatomic) BOOL activeSubscription;
@property (retain, nonatomic) NSString *activeSubscriptionIdentifier;
@property (nonatomic) BOOL activeAssertion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSSet *lastSeenPresentDevices;
@property (retain, nonatomic) SKPresencePayload *currentPayload;
@property (readonly, copy, nonatomic) NSString *presenceIdenfifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (id)_noChannelError;
+ (id)_accountNotCapableError;
+ (id)_crossAccountError;
+ (id)_noChannelCreatedError;
+ (id)_noClientIDError;
+ (id)_unableToResolveSenderHandleError;
+ (id)oversizeLogger;

- (void)fetchHandleInvitability:(id)a0 fromHandle:(id)a1 forPresenceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)assertPresenceForIdentifier:(id)a0 withPresencePayload:(id)a1 completion:(id /* block */)a2;
- (void)fetchPresenceCapability:(id /* block */)a0;
- (void)inviteHandles:(id)a0 fromSenderHandle:(id)a1 presenceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)invitedHandlesForPresenceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)isHandleInvited:(id)a0 fromSenderHandle:(id)a1 forPresenceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)presentDevicesForPresenceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)registerForDelegateCallbacksWithPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1 completion:(id /* block */)a2;
- (void)releasePresenceForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)releaseTransientSubscriptionAssertionForPresenceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeInvitedHandles:(id)a0 presenceIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)retainTransientSubscriptionAssertionForPresenceIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_shortHashOfClientID:(id)a0;
- (void)accountIsPresenceCapableWithCompletion:(id /* block */)a0;
- (id)clientPrefixedPresenceIdentifierForPresenceIdentifier:(id)a0;
- (void)handleReceivedInvitationForPresenceIdentifier:(id)a0;
- (void)handleReceivedPresentDevicesUpdateForPresenceIdentifier:(id)a0;
- (id)initWithXPCConnection:(id)a0 queue:(id)a1 delegate:(id)a2 subscriptionManager:(id)a3 presenceManager:(id)a4 invitationManager:(id)a5 databaseManager:(id)a6;
- (void)presenceClientConnectionWasInterrupted:(id)a0;
- (void)presenceClientConnectionWasInvalidated:(id)a0;
- (BOOL)presenceIdentifierMatchesClient:(id)a0;
- (id)rawPresenceIdentifierForPrefixedPresenceIdentifier:(id)a0;
- (void)refreshAssertionsForPresenceIdentifier:(id)a0;

@end
