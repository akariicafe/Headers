@class SBAppLayout;

@interface SBInsertionSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) unsigned long long phase;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithAppLayout:(id)a0 intoIndex:(unsigned long long)a1 phase:(unsigned long long)a2;
- (long long)type;

@end
