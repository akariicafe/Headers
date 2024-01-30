@class NSMutableOrderedSet;

@interface WFActionSearchRankedCollection : NSObject {
    NSMutableOrderedSet *_itemsWithExactNameMatch;
    NSMutableOrderedSet *_itemsWithNameMatch;
    NSMutableOrderedSet *_itemsWithCategoryMatch;
    NSMutableOrderedSet *_itemsWithKeywordMatch;
}

- (id)init;
- (id)rankedItems;
- (void).cxx_destruct;
- (void)addItem:(id)a0 forType:(unsigned long long)a1;
- (id)orderedSetForType:(unsigned long long)a0;
- (void)prioritizeItem:(id)a0 type:(unsigned long long)a1;

@end
