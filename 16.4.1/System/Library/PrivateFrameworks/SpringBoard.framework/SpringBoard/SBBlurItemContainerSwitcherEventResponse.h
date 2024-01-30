@class SBBlurItemContainerParameters, SBAppLayout;

@interface SBBlurItemContainerSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) BOOL shouldBlur;
@property (readonly, nonatomic) SBBlurItemContainerParameters *blurParameters;
@property (readonly, nonatomic) long long animationUpdateMode;

- (long long)type;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAppLayout:(id)a0 shouldBlur:(BOOL)a1 animationUpdateMode:(long long)a2;
- (id)initWithAppLayout:(id)a0 shouldBlur:(BOOL)a1 blurParameters:(id)a2 animationUpdateMode:(long long)a3;

@end
