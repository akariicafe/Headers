@class SBCoplanarSwitcherModifier, _SBFullScreenAppFloorSwitcherModifier;

@interface SBFullScreenAppLayoutSwitcherModifier : SBSwitcherModifier {
    SBCoplanarSwitcherModifier *_coplanarModifier;
    _SBFullScreenAppFloorSwitcherModifier *_floorModifier;
}

- (void).cxx_destruct;
- (id)initWithActiveAppLayout:(id)a0;

@end
