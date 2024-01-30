@class NSUUID, SBAppLayout;

@interface SBInitiateSystemApertureBounceSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) NSUUID *suppressionIdentifierToInvalidate;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (void).cxx_destruct;
- (id)initWithAppLayout:(id)a0 suppressionIdentifierToInvalidate:(id)a1;

@end
