@class _SBHomeScreenFloorSwitcherModifier, SBCoplanarSwitcherModifier;

@interface SBHomeScreenSwitcherModifier : SBSwitcherModifier {
    _SBHomeScreenFloorSwitcherModifier *_homeScreenFloorModifier;
    SBCoplanarSwitcherModifier *_coplanarModifier;
}

- (void).cxx_destruct;
- (id)init;

@end
