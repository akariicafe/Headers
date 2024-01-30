@class SBAppLayout;

@interface SBSwitcherModelRemovalResultAction : NSObject {
    id /* block */ _modelMutationBlock;
}

@property (readonly, nonatomic) long long actionType;
@property (readonly, copy, nonatomic) SBAppLayout *replacementAppLayout;

+ (id)replacementActionWithAppLayout:(id)a0 mutationBlock:(id /* block */)a1;
+ (id)hideActionWithMutationBlock:(id /* block */)a0;
+ (id)removeActionWithMutationBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)executeModelMutation;
- (id)_initWithActionType:(long long)a0 modelMutationBlock:(id /* block */)a1;

@end
