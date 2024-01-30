@class NSString, NSArray, UIView, NSIndexPath, UITableView;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface _UITableViewCellPromiseRegion : NSObject <_UILegacyFocusRegion, _UIFocusRegionContainer>

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;

- (BOOL)canBecomeFocused;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (BOOL)_isTransparentFocusRegion;
- (id)_preferredFocusRegionCoordinateSpace;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_focusRegionFrame;
- (id)_focusRegionGuides;
- (id)_fulfillPromisedFocusRegion;
- (BOOL)_legacy_isEligibleForFocusInteraction;
- (BOOL)_isPromiseFocusRegion;
- (id)_focusDebugOverlayParentView;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inCoordinateSpace:(id)a1;
- (void)updateFocusIfNeeded;
- (id)_focusRegionView;
- (id)_focusRegionFocusSystem;
- (void)setNeedsFocusUpdate;
- (id)_regionForFocusedItem:(id)a0 inCoordinateSpace:(id)a1;

@end
