@class SBAppLayout;

@interface SBIconOverlayVisibilitySwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (id)initWithAppLayout:(id)a0 visible:(BOOL)a1;

@end
