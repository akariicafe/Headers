@class _PASLRUCache;

@interface SGContactAggregator : NSObject {
    _PASLRUCache *_cachedContacts;
}

+ (id)mergeContact:(id)a0 withContact:(id)a1;
+ (id)messageIdentifiersGeneratingContact:(id)a0;
+ (id)replaceDetailsInContact:(id)a0 onDiskContact:(id)a1;

- (void)removeContact:(id)a0;
- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (id)augmentSuggestedContactWithContact:(id)a0 conversationId:(id)a1 store:(id)a2 handle:(id)a3;
- (void)clearContactsWithConversationIdentifier:(id)a0;

@end
