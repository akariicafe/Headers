@class NSUUID, SBCoplanarSwitcherModifier, _SBFullScreenAppFloorSwitcherModifier;

@interface SBFullScreenAppLayoutSwitcherModifier : SBSwitcherModifier {
    SBCoplanarSwitcherModifier *_coplanarModifier;
    _SBFullScreenAppFloorSwitcherModifier *_floorModifier;
}

@property (retain, nonatomic) NSUUID *homeAffordanceReuseIdentifier;

- (id)initWithActiveAppLayout:(id)a0 homeAffordanceReuseIdentifier:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullScreenFrameForAppLayout:(id)a0;
- (void).cxx_destruct;
- (id)initWithActiveAppLayout:(id)a0;

@end
