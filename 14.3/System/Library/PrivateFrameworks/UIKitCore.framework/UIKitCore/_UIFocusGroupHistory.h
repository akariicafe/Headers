@class NSMapTable;

@interface _UIFocusGroupHistory : NSObject {
    NSMapTable *_groupToItemMap;
}

- (id)init;
- (void).cxx_destruct;
- (void)_uiktest_clearHistory;
- (id)lastFocusedItemForGroup:(id)a0;
- (void)setLastFocusedItem:(id)a0 forGroup:(id)a1;

@end
