@class NNMKSyncSessionController, NNMKBatchRequestHandler, NNMKSyncController;
@protocol NNMKSyncStateManager, NNMKDeviceRegistryHolder;

@interface NNMKSyncPersistenceHandler : NSObject

@property (weak, nonatomic) id<NNMKDeviceRegistryHolder> delegate;
@property (weak, nonatomic) id<NNMKSyncStateManager> syncStateManager;
@property (retain, nonatomic) NNMKSyncController *syncController;
@property (retain, nonatomic) NNMKBatchRequestHandler *batchRequestHandler;
@property (retain, nonatomic) NNMKSyncSessionController *sessionController;

- (id)addAccountAuthenticationStatusRequest:(double)a0;
- (void).cxx_destruct;
- (id)addMoreConversationSpecificMessages:(id)a0 conversationId:(id)a1 mailbox:(id)a2 isProtectedData:(BOOL)a3;
- (id)updateMessagesStatus:(id)a0 mailbox:(id)a1;
- (id)addMessages:(id)a0 containsNewMessages:(BOOL)a1 mailbox:(id)a2;
- (id)addMessageContent:(id)a0 forMessage:(id)a1 mailbox:(id)a2 isProtectedData:(BOOL)a3;
- (id)updateMessagesFromConversation:(id)a0 withNotifyConversationState:(BOOL)a1 mailbox:(id)a2;
- (id)addMessagesToResend:(id)a0 mailbox:(id)a1 isProtectedData:(BOOL)a2;
- (id)currentDeviceRegistry;
- (id)persistAccounts:(id)a0;
- (id)addMoreMessages:(id)a0 mailbox:(id)a1 isProtectedData:(BOOL)a2;
- (id)updateMailboxListForAccount:(id)a0 mailboxListChanged:(BOOL *)a1;
- (id)addStandaloneAccountIdentity:(id)a0;
- (void)_createDefaultMailbox:(id)a0;
- (id)protoMessageFromMessage:(id)a0;
- (id)deleteMessagesWithIds:(id)a0 mailbox:(id)a1;

@end
