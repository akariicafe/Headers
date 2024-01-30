@class NSUUID, SBCoplanarSwitcherModifier, _SBFullScreenAppFloorSwitcherModifier;

@interface SBFullScreenAppLayoutSwitcherModifier : SBSwitcherModifier {
    SBCoplanarSwitcherModifier *_coplanarModifier;
    _SBFullScreenAppFloorSwitcherModifier *_floorModifier;
}

@property (retain, nonatomic) NSUUID *homeAffordanceReuseIdentifier;

- (void).cxx_destruct;
- (id)initWithActiveAppLayout:(id)a0;
- (id)initWithActiveAppLayout:(id)a0 homeAffordanceReuseIdentifier:(id)a1;

@end
