@class NSArray, UIDynamicAnimator, NSMutableArray;

@interface UIDynamicBehavior : NSObject {
    UIDynamicAnimator *_context;
    NSMutableArray *_items;
    NSMutableArray *_behaviors;
    NSMutableArray *_addedBehaviors;
}

@property (readonly, copy, nonatomic) NSArray *childBehaviors;
@property (copy, nonatomic) id /* block */ action;
@property (readonly, nonatomic) UIDynamicAnimator *dynamicAnimator;

+ (void)initialize;
+ (BOOL)_isPrimitiveBehavior;

- (id)_context;
- (id)_items;
- (void)_updateAutolayoutEngagementForItemIfNecessary:(id)a0 detach:(BOOL)a1;
- (void)_addItem:(id)a0;
- (id)description;
- (void)_associate;
- (void).cxx_destruct;
- (void)_dissociate;
- (id)init;
- (void)_setContext:(id)a0;
- (void)_removeItem:(id)a0;
- (void)_reevaluate:(unsigned long long)a0;
- (void)_setItems:(id)a0;
- (void)_step;
- (void)_changedParameterForBody:(id)a0;
- (void)willMoveToAnimator:(id)a0;
- (BOOL)allowsAnimatorToStop;
- (void)_reattachAutolayoutToItemIfNecessary:(id)a0;
- (void)_detachAutolayoutFromItemIfNecessary:(id)a0;
- (void)removeChildBehavior:(id)a0;
- (void)addChildBehavior:(id)a0;
- (id)items;
- (id)_itemsDescription;

@end
