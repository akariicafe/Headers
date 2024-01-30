@class SKAStatusSubscriptionServiceClientConnection, NSString, NSObject;
@protocol SKAStatusSubscriptionServiceClientDelegate, SKADatabaseManaging, SKAStatusSubscriptionManaging, OS_dispatch_queue, SKAStatusEncryptionManaging;

@interface SKAStatusSubscriptionServiceClient : NSObject <SKStatusSubscriptionDaemonProtocol, SKAClientConnectionRepresentable, SKAStatusSubscriptionServiceClientConnectionLifecycleDelegate>

@property (retain, nonatomic) SKAStatusSubscriptionServiceClientConnection *clientConnection;
@property (weak, nonatomic) id<SKAStatusSubscriptionServiceClientDelegate> delegate;
@property (retain, nonatomic) id<SKADatabaseManaging> databaseManager;
@property (retain, nonatomic) id<SKAStatusSubscriptionManaging> subscriptionManager;
@property (nonatomic) BOOL accountCheckCompleted;
@property (nonatomic) BOOL accountIsStatusKitCapable;
@property (retain, nonatomic) id<SKAStatusEncryptionManaging> encryptionManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL trafficModeEnabled;
@property (readonly, copy, nonatomic) NSString *statusTypeIdenfifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (id)_inTrafficError;
+ (id)_accountNotCapableError;
+ (id)_genericMissingSubscriptionEntitlmentError;
+ (id)_missingEntitlmentErrorForStatusTypeIdentifier:(id)a0;
+ (id)_subscriptionIdentifierNotFoundError:(id)a0;

- (void)releasePersistentSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 applicationIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)retainPersistentSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 applicationIdentifier:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)allStatusSubscriptionsWithPersistentSubscriptionAssertionForApplicationIdentifier:(id)a0 statusTypeIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)allSubscriptionMetadatasForStatusTypeIdentifier:(id)a0 includingPersonalSubscription:(BOOL)a1 completion:(id /* block */)a2;
- (void)allSubscriptionMetadatasWithActiveAssertionsForStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)allSubscriptionMetadatasWithActiveSubscriptionsForStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)deleteSubscriptionWithIdentifier:(id)a0 statusTypeIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)registerForDelegateCallbacksWithStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)releaseTransientSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)retainTransientSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)subscriptionMetadataForHandle:(id)a0 statusTypeIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)subscriptionMetadataForPersonalSubscriptionWithStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)subscriptionValidationTokensForHandle:(id)a0 statusTypeIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)validatePersonalStatusSubscriptionMatchesSubscriptionValidationTokens:(id)a0 fromSender:(id)a1 statusTypeIdentifier:(id)a2 completion:(id /* block */)a3;
- (id)_currentStatusForChannel:(id)a0;
- (id)_handlesAssociatedWithChannel:(id)a0;
- (id)_subscriptionMetadataForChannel:(id)a0;
- (BOOL)_validateChannelIsKnownForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 databaseContext:(id)a2;
- (void)accountIsStatusKitCapableWithCompletion:(id /* block */)a0;
- (BOOL)channelMatchesClientStatusTypeIdentifier:(id)a0;
- (void)handleReceivedInvitationForChannel:(id)a0;
- (void)handleReceivedStatusUpdate:(id)a0 onChannel:(id)a1;
- (void)handleRemoteDatabaseChangeForChannels:(id)a0;
- (id)initWithXPCConnection:(id)a0 queue:(id)a1 delegate:(id)a2 databaseManager:(id)a3 subscriptionManager:(id)a4 encryptionManager:(id)a5 inTrafficMode:(BOOL)a6;
- (void)subscriptionServiceClientConnectionWasInterrupted:(id)a0;
- (void)subscriptionServiceClientConnectionWasInvalidated:(id)a0;
- (long long)validatePersonalChannel:(id)a0 matchesEncryptionValidationToken:(id)a1 fromSender:(id)a2;
- (long long)validatePersonalChannel:(id)a0 matchesSubscriptionValidationToken:(id)a1 fromSender:(id)a2;

@end
