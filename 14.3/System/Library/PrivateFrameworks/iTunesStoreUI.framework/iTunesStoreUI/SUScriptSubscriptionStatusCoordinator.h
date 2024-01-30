@interface SUScriptSubscriptionStatusCoordinator : SUScriptObject

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)invalidateLastKnownStatus;

@end
