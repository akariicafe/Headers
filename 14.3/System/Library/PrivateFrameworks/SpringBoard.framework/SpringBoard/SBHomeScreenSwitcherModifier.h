@class _SBHomeScreenFloorSwitcherModifier, SBCoplanarSwitcherModifier;

@interface SBHomeScreenSwitcherModifier : SBSwitcherModifier {
    _SBHomeScreenFloorSwitcherModifier *_homeScreenFloorModifier;
    SBCoplanarSwitcherModifier *_coplanarModifier;
}

- (id)init;
- (void).cxx_destruct;

@end
