@class NSMutableDictionary;

@interface _UICollectionCompositionalLayoutDynamicAnimator : UIDynamicAnimator {
    id /* block */ _invalidationHandler;
    NSMutableDictionary *_itemBehaviors;
}

- (void).cxx_destruct;
- (BOOL)_animatorStep:(double)a0;

@end
