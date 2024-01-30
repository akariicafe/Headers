@class NSString, NSObject;
@protocol SKADatabaseManaging, SKAAccountProviding, SKAMessagingProviding, SKAInvitationManagingDelegate, OS_dispatch_queue, SKAChannelManaging;

@interface SKAInvitationManager : NSObject <SKAInvitationManaging>

@property (retain, nonatomic) id<SKADatabaseManaging> databaseManager;
@property (retain, nonatomic) id<SKAMessagingProviding> messagingProvider;
@property (retain, nonatomic) id<SKAChannelManaging> channelManager;
@property (retain, nonatomic) id<SKAAccountProviding> accountProvider;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundCleanupQueue;
@property (weak, nonatomic) id<SKAInvitationManagingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (id)_invalidInvitedHandlesError;
+ (id)_invalidSenderHandleError;
+ (id)_noPersonalChannelErrorForStatusTypeIdentifier:(id)a0;
+ (id)_keyRollFailedErrorWithUnderlyingError:(id)a0;
+ (id)_unableToFindAnyExistingInvitationToDeleteError;
+ (id)_unableToFindExistingInvitationForHandlesError:(id)a0;

- (id)_ratchetEncryptionKeyForwardOrKeyRollForPersonalChannel:(id)a0 databaseContext:(id)a1 invitationWasSentViaKeyRoll:(BOOL *)a2 error:(id *)a3;
- (void)handleIncomingInvitationMessage:(id)a0 fromHandle:(id)a1 toHandle:(id)a2 messageGuid:(id)a3;
- (BOOL)_sendInvitationMessageForChannel:(id)a0 toInvitedUsers:(id)a1 subscriptionKeys:(id)a2 error:(id *)a3;
- (id)_addInvitedHandles:(id)a0 senderHandle:(id)a1 toDatabaseForPersonalChannel:(id)a2 withInvitationPayload:(id)a3 databaseContext:(id)a4;
- (BOOL)_rollEncryptionKeyForChannel:(id)a0 databaseContext:(id)a1 error:(id *)a2;
- (BOOL)_shouldReauthForError:(id)a0;
- (id)_validateInvitedHandles:(id)a0;
- (id)resolveSenderHandleWithPreferredSenderHandle:(id)a0;
- (void)revokeInvitationFromPersonalChannelWithStatusTypeIdentifier:(id)a0 forHandles:(id)a1 completion:(id /* block */)a2;
- (id)_updateOrCreateInvitedUserWithHandle:(id)a0 senderHandle:(id)a1 onChannel:(id)a2 withInvitationPayload:(id)a3 databaseContext:(id)a4;
- (BOOL)_validateInvitedHandle:(id)a0;
- (void)_isHandleInviteable:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)fetchHandleInvitability:(id)a0 fromHandle:(id)a1 forStatusTypeIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)sendInvitationForPersonalChannelWithStatusTypeIdentifier:(id)a0 toHandles:(id)a1 fromSenderHandle:(id)a2 withInvitationPayload:(id)a3 completion:(id /* block */)a4;
- (void)isHandleInviteable:(id)a0 fromHandle:(id)a1 completion:(id /* block */)a2;
- (void)_findOrCreatePersonalChannelForStatusTypeIdentifier:(id)a0 databaseContext:(id)a1 completion:(id /* block */)a2;
- (void)rollPersonalChannelWithStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)revokeAllInvitationsFromPersonalChannelWithStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)rollEncryptionKeyForPersonalChannelWithStatusTypeIdentifier:(id)a0 error:(id *)a1;
- (id)initWithMessagingProvider:(id)a0 databaseManager:(id)a1 accountProvider:(id)a2 channelManager:(id)a3;
- (void)_createPersonalChannelForStatusTypeIdentifier:(id)a0 databaseContext:(id)a1 completion:(id /* block */)a2;

@end
