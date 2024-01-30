@class SBAppLayout;

@interface SBBlurItemContainerSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) BOOL shouldBlur;

- (void).cxx_destruct;
- (id)description;
- (long long)type;
- (id)initWithAppLayout:(id)a0 shouldBlur:(BOOL)a1;

@end
