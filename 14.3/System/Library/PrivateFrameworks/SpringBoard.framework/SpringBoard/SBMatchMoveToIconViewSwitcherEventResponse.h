@class SBAppLayout;

@interface SBMatchMoveToIconViewSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic, getter=isActive) BOOL active;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithAppLayout:(id)a0 active:(BOOL)a1;
- (long long)type;

@end
