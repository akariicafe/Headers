@class SBActiveAppLayoutFloatingSwitcherModifier;

@interface SBStashedFloatingSwitcherModifier : SBSwitcherModifier {
    SBActiveAppLayoutFloatingSwitcherModifier *_activeModifier;
}

- (BOOL)isSwitcherWindowVisible;
- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)init;
- (void).cxx_destruct;
- (double)shadowOpacityForIndex:(unsigned long long)a0;

@end
