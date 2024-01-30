@class NSMapTable, NSString, NSArray, NSObject, SKPresenceDaemonConnection;
@protocol OS_dispatch_queue;

@interface SKPresence : NSObject <SKPresenceDaemonDelegateProtocol, SKPresenceConnectionDelegateProtocol>

@property (retain, nonatomic) SKPresenceDaemonConnection *daemonConnection;
@property (retain, nonatomic) NSMapTable *delegates;
@property (nonatomic) BOOL registeredForDelegateCallbacks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateWorkQueue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } delegateLock;
@property (readonly, nonatomic) NSString *presenceIdentifier;
@property (readonly, nonatomic) BOOL isPersonal;
@property (readonly, nonatomic) NSArray *presentDevices;
@property (readonly, nonatomic) NSArray *invitedHandles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_logger;
+ (id)_oversizeLogger;

- (void)_registerForDelegateCallbacksIfNecessary;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)_simulateCrashIfNecessaryForError:(id)a0;
- (void)fetchHandleInvitabilityFromPrimaryAccountHandle:(id)a0 completion:(id /* block */)a1;
- (void)removeInvitedHandles:(id)a0 completion:(id /* block */)a1;
- (void)isHandleInvitedFromPrimaryAccountHandle:(id)a0 completion:(id /* block */)a1;
- (BOOL)isHandleInvited:(id)a0 fromSenderHandle:(id)a1;
- (void)fetchHandleInvitability:(id)a0 fromSenderHandle:(id)a1 completion:(id /* block */)a2;
- (BOOL)_isHandleInvited:(id)a0 fromSenderHandle:(id)a1;
- (void)isHandleInvited:(id)a0 fromSenderHandle:(id)a1 completion:(id /* block */)a2;
- (BOOL)isHandleInvitedFromPrimaryAccountHandle:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)_fetchHandleInvitability:(id)a0 fromSenderHandle:(id)a1 completion:(id /* block */)a2;
- (void)_delegatesPerformOnResponseQueueForGroup:(id)a0 block:(id /* block */)a1;
- (void)removeInvitedHandle:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_isHandleInvited:(id)a0 fromSenderHandle:(id)a1 completion:(id /* block */)a2;
- (void)releaseTransientSubscriptionAssertionWithCompletion:(id /* block */)a0;
- (void)retainTransientSubscriptionAssertionWithCompletion:(id /* block */)a0;
- (void)assertPresenceWithCompletion:(id /* block */)a0;
- (void)assertPresenceWithPresencePayload:(id)a0 completion:(id /* block */)a1;
- (id)initWithPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1;
- (void)inviteHandleFromPrimaryAccountHandle:(id)a0 completion:(id /* block */)a1;
- (void)inviteHandlesFromPrimaryAccountHandle:(id)a0 completion:(id /* block */)a1;
- (void)releasePresenceWithCompletion:(id /* block */)a0;
- (void)_inviteHandle:(id)a0 fromSenderHandle:(id)a1 completion:(id /* block */)a2;
- (void)_inviteHandles:(id)a0 fromSenderHandle:(id)a1 completion:(id /* block */)a2;
- (void)fetchPresenceCapability:(id /* block */)a0;
- (id)initWithPresenceIdentifier:(id)a0;
- (void)inviteHandle:(id)a0 fromSenderHandle:(id)a1 completion:(id /* block */)a2;
- (void)inviteHandles:(id)a0 fromSenderHandle:(id)a1 completion:(id /* block */)a2;
- (void)invitedHandlesChangedForPresenceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)presenceDaemonConnectionDidDisconnect:(id)a0;
- (void)presentHandlesChangedForPresenceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)releaseDaemonConnection;

@end
