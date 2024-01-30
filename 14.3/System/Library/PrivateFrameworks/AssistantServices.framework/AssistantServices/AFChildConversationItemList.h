@class AFConversation, NSUUID;

@interface AFChildConversationItemList : NSObject

@property (readonly, nonatomic, getter=_conversation) AFConversation *conversation;
@property (readonly, nonatomic, getter=_parentItemIdentifier) NSUUID *parentItemIdentifier;

- (long long)numberOfItems;
- (id)init;
- (void).cxx_destruct;
- (id)itemAtIndex:(long long)a0;
- (void)removeItemsWithIdentifiers:(id)a0;
- (id)itemWithIdentifier:(id)a0;
- (id)initWithConversation:(id)a0 parentItemIdentifier:(id)a1;
- (id)_indexPathForItemAtIndex:(long long)a0;
- (void)_addItemsForAceObjects:(id)a0 type:(long long)a1 dialogPhase:(id)a2 asChildrenOfItemWithIdentifier:(id)a3;
- (id)_identifierOfItemAtIndex:(long long)a0;
- (id)_indexPathForLastRestoredItem;
- (id)identifiersForItemsAtIndexes:(id)a0;
- (void)addItemsForAceObjects:(id)a0 type:(long long)a1 dialogPhase:(id)a2;
- (void)addItemsForAceObjects:(id)a0 type:(long long)a1 dialogPhase:(id)a2 asChildrenOfItemAtIndex:(long long)a3;
- (void)removeItemsAtIndexes:(id)a0;
- (BOOL)itemIsRestoredAtIndex:(long long)a0;

@end
