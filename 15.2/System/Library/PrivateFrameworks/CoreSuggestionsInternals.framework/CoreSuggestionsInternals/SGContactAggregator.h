@class _PASLRUCache;

@interface SGContactAggregator : NSObject {
    _PASLRUCache *_cachedContacts;
}

+ (id)replaceDetailsInContact:(id)a0 onDiskContact:(id)a1;
+ (id)mergeContact:(id)a0 withContact:(id)a1;
+ (id)messageIdentifiersGeneratingContact:(id)a0;

- (void)clear;
- (void)removeContact:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearContactsWithConversationIdentifier:(id)a0;
- (id)augmentSuggestedContactWithContact:(id)a0 conversationId:(id)a1 store:(id)a2 handle:(id)a3;

@end
