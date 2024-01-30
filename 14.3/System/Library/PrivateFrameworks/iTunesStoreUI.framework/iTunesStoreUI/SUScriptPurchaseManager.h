@interface SUScriptPurchaseManager : SUScriptObject

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;

- (id)init;
- (void)dealloc;
- (id)_className;
- (void)_purchaseRequestsChangedNotification:(id)a0;
- (id)isPurchasedItemIdentifier:(id)a0;
- (id)isPurchasingItemIdentifier:(id)a0;

@end
