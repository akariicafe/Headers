@class NSArray, NSMutableOrderedSet;

@interface WBSHistoryTopicTag : WBSHistoryTag {
    NSMutableOrderedSet *_taggedItems;
}

@property (readonly, copy, nonatomic) NSArray *historyItems;

+ (void)initialize;

- (void)_historyItemsWereRemoved:(id)a0;
- (void).cxx_destruct;
- (id)initWithTag:(id)a0 historyItems:(id)a1;
- (void)groupHistoryItemsBySessionWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (id)initWithTitle:(id)a0 identifier:(id)a1 databaseID:(long long)a2 modificationTimestamp:(double)a3 level:(long long)a4;
- (void)tagHistoryItem:(id)a0;
- (BOOL)containsHistoryItem:(id)a0;
- (void)removeHistoryItems:(id)a0;

@end
