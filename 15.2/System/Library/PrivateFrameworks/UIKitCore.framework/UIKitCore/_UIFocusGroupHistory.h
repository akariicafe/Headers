@class NSMapTable;

@interface _UIFocusGroupHistory : NSObject {
    NSMapTable *_groupToItemMap;
}

- (void).cxx_destruct;
- (id)init;
- (id)lastFocusedItemForGroupIdentifier:(id)a0;
- (void)setLastFocusedItem:(id)a0 forGroupIdentifier:(id)a1;
- (void)_uiktest_clearHistory;

@end
