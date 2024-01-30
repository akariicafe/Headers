@class SBAppLayout;

@interface SBNotifyIconWillZoomDownSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout;

- (void).cxx_destruct;
- (id)initWithAppLayout:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;

@end
