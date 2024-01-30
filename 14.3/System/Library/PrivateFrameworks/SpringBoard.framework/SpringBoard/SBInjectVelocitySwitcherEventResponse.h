@class NSString, SBAppLayout;

@interface SBInjectVelocitySwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) id velocity;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (id)initWithVelocity:(id)a0 forKey:(id)a1 appLayout:(id)a2;

@end
