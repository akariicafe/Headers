@class IMMessage, NSString, IMChat, IMMessageItem, NSArray, IMScheduledUpdater;
@protocol IMChatItemRules;

@interface IMInlineReplyController : IMItemsController

@property (copy, nonatomic) NSString *threadIdentifier;
@property (weak, nonatomic) IMChat *chat;
@property (retain, nonatomic) IMMessageItem *threadOriginator;
@property (nonatomic) BOOL disableItemInserts;
@property (retain, nonatomic) id<IMChatItemRules> chatItemRules;
@property (retain, nonatomic) IMScheduledUpdater *chatItemsUpdater;
@property (nonatomic) BOOL isUpdatingChatItems;
@property (nonatomic) BOOL hasEarlierMessagesToLoad;
@property (nonatomic) BOOL hasRecentMessagesToLoad;
@property (readonly, nonatomic) IMMessage *firstMessage;
@property (readonly, nonatomic) IMMessage *lastMessage;
@property (readonly, nonatomic) NSArray *chatItems;

- (void)removeItem:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)insertItem:(id)a0;
- (void)updateChatItemsIfNeeded;
- (void)performActionDisallowingItemInsert:(id /* block */)a0;
- (void)_itemsDidChange:(id)a0;
- (void)_updateChatItems;
- (void)replaceItems:(id)a0;
- (void)insertHistoricalMessages:(id)a0 queryID:(id)a1 hasMessagesBefore:(BOOL)a2 hasMessagesAfter:(BOOL)a3 isReplacingItems:(BOOL)a4;
- (void)_updateChatItemsWithReason:(id)a0 block:(id /* block */)a1 shouldPost:(BOOL)a2;
- (void)_updateChatItemsWithReason:(id)a0 block:(id /* block */)a1;
- (id)initWithChat:(id)a0 threadIdentifier:(id)a1 threadOriginator:(id)a2;
- (void)_postIMChatItemsDidChangeNotificationWithInserted:(id)a0 removed:(id)a1 reload:(id)a2 regenerate:(id)a3 oldChatItems:(id)a4 shouldLog:(BOOL)a5;
- (void)_replaceStaleChatItems;
- (void)_setupChatItemRules;
- (BOOL)itemMatchesThread:(id)a0;
- (id)itemsMatchingThread:(id)a0 guids:(id)a1;

@end
