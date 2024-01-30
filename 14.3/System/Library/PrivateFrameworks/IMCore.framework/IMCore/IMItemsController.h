@class NSArray;

@interface IMItemsController : NSObject {
    struct __CFArray { } *_items;
}

@property (readonly, copy, nonatomic) NSArray *_items;
@property (nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) BOOL isMoreToLoad;

+ (id)_charactersToIgnoreWhenParsingTextContent;

- (id)init;
- (unsigned long long)_indexOfItem:(id)a0;
- (void)dealloc;
- (void)_removeItem:(id)a0;
- (id)_member:(id)a0;
- (void)_removeAllItems;
- (id)_itemForGUID:(id)a0;
- (id)_initWithItems:(id)a0;
- (BOOL)_trimIfNeeded;
- (void)_itemsDidChange:(id)a0;
- (void)assignSortIDsToItems:(id)a0 shouldRecalculateSortIDForAllMessages:(BOOL)a1;
- (BOOL)_shouldPinUnsentMessagesToBottom;
- (void)assignSortIDsToItems:(id)a0;
- (void)_replaceStaleTypingMessage;
- (void)_replaceItems:(id)a0;
- (id)_lastIncomingFinishedMessageWithTextContent;
- (void)_handleItem:(id)a0 forChatStyle:(unsigned char)a1;
- (void)_resortItems;
- (void)_setSortID:(id)a0;
- (id)_typingMessage;
- (id)_firstMessage;
- (id)_lastMessage;
- (id)_lastSentMessage;
- (id)_lastFinishedMessage;
- (id)_lastIncomingMessage;
- (id)_lastIncomingFinishedMessage;
- (id)_lastRelatedIncomingFinishedMessageTextContentWithLimit:(long long)a0;
- (id)_appendArchivedItemsToItemsArray:(id)a0;
- (void)_didReplaceItem:(struct __CFArray { } *)a0 oldItem:(id)a1 idx:(long long)a2;

@end
