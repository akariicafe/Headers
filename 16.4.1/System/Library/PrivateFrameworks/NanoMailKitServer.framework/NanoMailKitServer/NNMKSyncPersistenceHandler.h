@class NNMKSyncSessionController, NNMKBatchRequestHandler, NNMKSyncController;
@protocol NNMKSyncStateManager, NNMKDeviceRegistryHolder;

@interface NNMKSyncPersistenceHandler : NSObject

@property (weak, nonatomic) id<NNMKDeviceRegistryHolder> delegate;
@property (weak, nonatomic) id<NNMKSyncStateManager> syncStateManager;
@property (retain, nonatomic) NNMKSyncController *syncController;
@property (retain, nonatomic) NNMKBatchRequestHandler *batchRequestHandler;
@property (retain, nonatomic) NNMKSyncSessionController *sessionController;

- (id)persistAccounts:(id)a0;
- (id)addMessageContent:(id)a0 forMessage:(id)a1 mailbox:(id)a2 isProtectedData:(BOOL)a3;
- (id)deleteMessagesWithIds:(id)a0 mailbox:(id)a1;
- (id)addMoreMessages:(id)a0 mailbox:(id)a1 isProtectedData:(BOOL)a2;
- (id)addMessagesToResend:(id)a0 mailbox:(id)a1 isProtectedData:(BOOL)a2;
- (id)protoMessageFromMessage:(id)a0;
- (id)addAccountAuthenticationStatusRequest:(double)a0;
- (id)addMoreConversationSpecificMessages:(id)a0 conversationId:(id)a1 mailbox:(id)a2 isProtectedData:(BOOL)a3;
- (id)addMessages:(id)a0 containsNewMessages:(BOOL)a1 mailbox:(id)a2;
- (id)updateMessagesFromConversation:(id)a0 withState:(unsigned long long)a1 include:(BOOL)a2 mailbox:(id)a3;
- (void)_createDefaultMailbox:(id)a0;
- (id)addStandaloneAccountIdentity:(id)a0;
- (id)currentDeviceRegistry;
- (id)updateMailboxListForAccount:(id)a0 mailboxListChanged:(BOOL *)a1;
- (void).cxx_destruct;
- (id)updateMessagesStatus:(id)a0 mailbox:(id)a1;

@end
