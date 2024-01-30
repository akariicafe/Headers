@class NSCountedSet, NSMutableDictionary, IMDoubleLinkedList;

@interface CKCurrentConversationsManager : NSObject

@property (retain, nonatomic) NSCountedSet *currentConversations;
@property (retain, nonatomic) NSMutableDictionary *idToNodeDictionary;
@property (retain, nonatomic) IMDoubleLinkedList *orderedKeys;
@property (readonly, nonatomic) unsigned long long cacheSize;

+ (id)sharedInstance;

- (void)pruneCache;
- (void).cxx_destruct;
- (BOOL)_canDumpConversationFromCache:(id)a0;
- (void)_prepareToDumpCachedConversation:(id)a0;
- (void)addConversation:(id)a0;
- (void)loadHistoryForConversation:(id)a0 keepAllCurrentlyLoadedMessages:(BOOL)a1;
- (void)pruneCacheToSize:(unsigned long long)a0;
- (void)purgeConversation:(id)a0;
- (void)purgeConversations:(id)a0;
- (void)removeConversation:(id)a0;

@end
