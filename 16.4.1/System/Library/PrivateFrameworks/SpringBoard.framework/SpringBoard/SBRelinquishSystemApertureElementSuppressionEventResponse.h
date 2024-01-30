@class NSUUID;

@interface SBRelinquishSystemApertureElementSuppressionEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) NSUUID *invalidationIdentifier;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (void).cxx_destruct;
- (id)initWithInvalidationIdentifier:(id)a0;

@end
