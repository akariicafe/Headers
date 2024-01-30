@class SBAppLayout;

@interface SBInvalidateContinuousExposeIdentifiersEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *transitioningFromAppLayout;
@property (readonly, nonatomic) SBAppLayout *transitioningToAppLayout;
@property (readonly, nonatomic) BOOL animated;

- (long long)type;
- (void).cxx_destruct;
- (id)initWithTransitioningFromAppLayout:(id)a0 transitioningToAppLayout:(id)a1 animated:(BOOL)a2;

@end
