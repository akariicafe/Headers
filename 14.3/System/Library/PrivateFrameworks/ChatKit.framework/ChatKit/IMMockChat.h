@class NSArray, IMHandle, IMMessage;

@interface IMMockChat : IMChat

@property (retain, nonatomic) NSArray *mockChatItems;
@property (retain, nonatomic) IMHandle *incomingHandle;
@property (retain, nonatomic) IMHandle *outgoingHandle;
@property (retain, nonatomic) IMMessage *lastMockIMMessage;
@property (retain, nonatomic) NSArray *extraParticipants;
@property (nonatomic) unsigned long long mockUnreadMessageCount;

- (id)lastFinishedMessage;
- (id)init;
- (void).cxx_destruct;
- (id)lastMessage;
- (id)_chatItemFromMockItemInfo:(id)a0 atIndex:(unsigned long long)a1;
- (id)_messageFromMockItemInfo:(id)a0;
- (void)deleteChatItems:(id)a0;
- (void)addExtraParticipants:(id)a0;
- (id)loadMessagesBeforeDate:(id)a0 limit:(unsigned long long)a1 loadImmediately:(BOOL)a2;
- (BOOL)deleteAllHistory;
- (void)setupWithMockItemInfoArray:(id)a0;
- (void)appendMockItemWithInfo:(id)a0;
- (id)lastFinishedMessageDate;
- (unsigned long long)unreadMessageCount;
- (id)chatItems;
- (id)participants;
- (id)recipient;
- (unsigned long long)messageCount;
- (id)displayName;

@end
