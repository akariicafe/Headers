@interface SUScriptPurchaseManager : SUScriptObject

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;

- (id)_className;
- (id)init;
- (void)dealloc;
- (void)_purchaseRequestsChangedNotification:(id)a0;
- (id)isPurchasedItemIdentifier:(id)a0;
- (id)isPurchasingItemIdentifier:(id)a0;

@end
