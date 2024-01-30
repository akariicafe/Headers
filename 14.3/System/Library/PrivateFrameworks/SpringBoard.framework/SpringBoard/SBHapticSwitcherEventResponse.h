@interface SBHapticSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) long long hapticType;
@property (readonly, nonatomic) long long phase;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (id)initWithHapticType:(long long)a0 phase:(long long)a1;

@end
