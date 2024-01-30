@class SRUIFConversation, NSUUID;

@interface SRUIFChildConversationItemList : NSObject

@property (readonly, nonatomic, getter=_conversation) SRUIFConversation *conversation;
@property (readonly, nonatomic, getter=_parentItemIdentifier) NSUUID *parentItemIdentifier;

- (long long)numberOfItems;
- (id)itemWithIdentifier:(id)a0;
- (id)itemAtIndex:(long long)a0;
- (void).cxx_destruct;
- (void)addItemsForAceObjects:(id)a0 type:(long long)a1 dialogPhase:(id)a2 asChildrenOfItemAtIndex:(long long)a3;
- (void)_addItemsForAceObjects:(id)a0 type:(long long)a1 dialogPhase:(id)a2 asChildrenOfItemWithIdentifier:(id)a3;
- (id)_identifierOfItemAtIndex:(long long)a0;
- (id)_indexPathForItemAtIndex:(long long)a0;
- (id)_indexPathForLastRestoredItem;
- (void)addItemsForAceObjects:(id)a0 type:(long long)a1 dialogPhase:(id)a2;
- (id)identifiersForItemsAtIndexes:(id)a0;
- (id)initWithConversation:(id)a0 parentItemIdentifier:(id)a1;
- (BOOL)itemIsRestoredAtIndex:(long long)a0;
- (void)removeItemsAtIndexes:(id)a0;
- (void)removeItemsWithIdentifiers:(id)a0;

@end
