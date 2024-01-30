@class NSUUID, SBAppLayout;

@interface SBRequestSystemApertureElementSuppressionEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) NSUUID *invalidationIdentifier;
@property (readonly, nonatomic) BOOL wantsGlobalSuppression;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (void).cxx_destruct;
- (id)initWithAppLayout:(id)a0 wantsGlobalSuppression:(BOOL)a1 invalidationIdentifier:(id)a2;

@end
