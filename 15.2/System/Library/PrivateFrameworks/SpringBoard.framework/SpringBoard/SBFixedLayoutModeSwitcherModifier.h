@interface SBFixedLayoutModeSwitcherModifier : SBSwitcherModifier {
    long long _updateMode;
}

- (id)animationAttributesForLayoutElement:(id)a0;
- (id)initWithUpdateMode:(long long)a0;

@end
