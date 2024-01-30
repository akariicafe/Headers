@interface SBUpdateLayoutSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) long long updateMode;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (id)initWithOptions:(unsigned long long)a0 updateMode:(long long)a1;

@end
