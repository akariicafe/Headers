@class SBDisplayItem, SBChamoisOverlappingModel, SBAppLayout, SBDisplayItemLayoutAttributes;
@protocol SBContinuousExposeWindowDragDestinationSwitcherModifierDelegate;

@interface SBContinuousExposeWindowDragDestinationSwitcherModifier : SBSwitcherModifier {
    struct CGPoint { double x; double y; } _location;
    struct CGPoint { double x; double y; } _velocity;
    struct CGPoint { double x; double y; } _initialLocation;
    SBDisplayItemLayoutAttributes *_initialSelectedDisplayItemLayoutAttributes;
    BOOL _dragBeganInOtherSwitcher;
    SBChamoisOverlappingModel *_initialOverlappingModel;
    SBAppLayout *_lastAppLayoutForStripCalculation;
}

@property (readonly, nonatomic) SBDisplayItem *selectedDisplayItem;
@property (readonly, nonatomic) SBAppLayout *initialAppLayout;
@property (readonly, weak, nonatomic) id<SBContinuousExposeWindowDragDestinationSwitcherModifierDelegate> destinationDelegate;
@property (readonly, nonatomic) unsigned long long proposedDestination;
@property (readonly, nonatomic) SBAppLayout *proposedAppLayout;

- (void)didMoveToParentModifier:(id)a0;
- (id)_appLayoutContainingDisplayItem:(id)a0;
- (id)proposedAppLayoutForWindowDrag;
- (void).cxx_destruct;
- (BOOL)_anyProposedAppLayoutContainsSelectedDisplayItem;
- (id)_appLayoutByAddingItem:(id)a0 toAppLayout:(id)a1 size:(struct CGSize { double x0; double x1; })a2 center:(struct CGPoint { double x0; double x1; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForSelectedDisplayItem;
- (id)handleGestureEvent:(id)a0;
- (id)initWithSelectedDisplayItem:(id)a0 initialAppLayout:(id)a1 delegate:(id)a2;

@end
