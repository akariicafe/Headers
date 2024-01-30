@interface SBInlineTransitionSwitcherModifierEvent : SBTransitionSwitcherModifierEvent

@property (nonatomic) unsigned long long scrollAxis;
@property (nonatomic) double cardScale;
@property (nonatomic) struct CGSize { double width; double height; } fixedCardSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;

@end
