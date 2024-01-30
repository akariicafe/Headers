@class SBAppLayout;

@interface SBSwitcherModelRemovalRequestAction : NSObject

@property (readonly, nonatomic) long long actionType;
@property (readonly, copy, nonatomic) SBAppLayout *replacementAppLayout;

+ (id)defaultRemovalPolicyAction;
+ (id)replacementActionWithAppLayout:(id)a0;

- (void).cxx_destruct;
- (id)_initWithActionType:(long long)a0;

@end
