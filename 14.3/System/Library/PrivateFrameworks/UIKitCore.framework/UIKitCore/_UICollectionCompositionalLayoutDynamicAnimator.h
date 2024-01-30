@class NSArray, NSSet, NSMutableDictionary;

@interface _UICollectionCompositionalLayoutDynamicAnimator : UIDynamicAnimator {
    id /* block */ _invalidationHandler;
    NSMutableDictionary *_itemBehaviors;
}

@property (readonly, nonatomic) NSArray *visibleItems;
@property (readonly, nonatomic) NSArray *visibleItemBehaviors;
@property (readonly, nonatomic) NSSet *visibleItemIdentifiers;

- (void).cxx_destruct;
- (id)initWithReferenceSystem:(id)a0 invalidationHandler:(id /* block */)a1;
- (void)addItemBehavior:(id)a0;
- (id)behaviorForIdentifier:(id)a0;
- (void)removeItemBehaviorForIdentifier:(id)a0;
- (void)updateAllItemsFromCurrentState;
- (BOOL)_animatorStep:(double)a0;

@end
