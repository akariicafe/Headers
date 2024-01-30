@class CKConversationList, IMChatRegistry, NSMutableDictionary;

@interface CKConversationListScrollingController : NSObject

@property (readonly, nonatomic) CKConversationList *conversationList;
@property (readonly, nonatomic) IMChatRegistry *chatRegistry;
@property (retain, nonatomic) NSMutableDictionary *filterModeToEarliestFetchedDate;
@property (retain, nonatomic) NSMutableDictionary *filterModeToEarliestReachedDate;
@property (nonatomic, getter=isFetchingOlderConversations) BOOL fetchingOlderConversations;

- (void).cxx_destruct;
- (id)_chatPredicateForFilterMode:(unsigned long long)a0;
- (id)_convertFilterActionDictionaryToConversationListFilterModeDictionary:(id)a0;
- (void)_handleRegistryDidLoadNotification:(id)a0;
- (void)_loadOlderConversationsWithFilterMode:(unsigned long long)a0;
- (void)_loadOlderConversationsWithFilterMode:(unsigned long long)a0 limit:(unsigned long long)a1 iteration:(unsigned long long)a2;
- (void)_resetDateTrackingWithChatRegistry:(id)a0;
- (id)initWithConversationList:(id)a0 chatRegistry:(id)a1;
- (void)reachedConversationWithLastMessageDate:(id)a0 filterMode:(unsigned long long)a1 remainingRows:(long long)a2;

@end
