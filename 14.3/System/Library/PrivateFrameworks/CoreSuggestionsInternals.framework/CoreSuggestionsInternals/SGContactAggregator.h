@class _PASLRUCache;

@interface SGContactAggregator : NSObject {
    _PASLRUCache *_cachedContacts;
}

+ (id)mergeContact:(id)a0 withContact:(id)a1;
+ (id)messageIdentifiersGeneratingContact:(id)a0;

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (void)removeContact:(id)a0;
- (void)clearContactsWithConversationIdentifier:(id)a0;
- (id)augmentSuggestedContactWithContact:(id)a0 conversationId:(id)a1 handle:(id)a2;

@end
