@class NSString, SBAppLayout;

@interface SBInjectVelocitySwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) id velocity;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithVelocity:(id)a0 forKey:(id)a1 appLayout:(id)a2;

@end
