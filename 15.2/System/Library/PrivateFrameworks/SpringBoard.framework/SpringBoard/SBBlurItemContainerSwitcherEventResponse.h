@class SBAppLayout;

@interface SBBlurItemContainerSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) BOOL shouldBlur;

- (id)description;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithAppLayout:(id)a0 shouldBlur:(BOOL)a1;

@end
