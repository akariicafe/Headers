@class NSMutableDictionary;

@interface CLKComplicationWidgetMigrationObjectProvider : NSObject {
    NSMutableDictionary *_itemsByAppIdentifier;
}

- (id)init;
- (void).cxx_destruct;
- (void)enumerateAppIdentifiersWithBlock:(id /* block */)a0;
- (void)enumerateItemsForAppIdentifier:(id)a0 withBlock:(id /* block */)a1;
- (id)itemForAppIdentifier:(id)a0 key:(id)a1;
- (void)removeItemsForAppIdentifier:(id)a0;
- (void)setItem:(id)a0 forAppIdentifier:(id)a1 key:(id)a2;

@end
