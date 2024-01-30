@interface IKDOMChildrenBindingStrategy : IKDOMBindingStrategy

- (void)_regenerateChildDOMElements:(id)a0 withItems:(id)a1 usedPrototypesByIdentifier:(id)a2;
- (void)_updateChildDOMElements:(id)a0 withItems:(id)a1 usedPrototypesByIdentifier:(id)a2 changeSet:(id)a3;
- (id)initWithDOMBindingController:(id)a0;
- (void)willUpdateWithItems:(id)a0 indexTitles:(id)a1 usedPrototypesByIdentifier:(id)a2 changeSet:(id)a3;

@end
