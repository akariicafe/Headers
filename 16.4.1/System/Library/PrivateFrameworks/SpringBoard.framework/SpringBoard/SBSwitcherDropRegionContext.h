@class NSString, SBAppLayout;

@interface SBSwitcherDropRegionContext : NSObject <BSDescriptionProviding>

@property (nonatomic) unsigned long long currentDropRegion;
@property (readonly, nonatomic) unsigned long long currentDropAction;
@property (readonly, nonatomic) SBAppLayout *draggingAppLayout;
@property (readonly, nonatomic) long long draggingLayoutRole;
@property (readonly, nonatomic) SBAppLayout *draggingLeafAppLayout;
@property (retain, nonatomic) SBAppLayout *intersectingAppLayout;
@property (nonatomic) long long intersectingLayoutRole;
@property (readonly, nonatomic) SBAppLayout *intersectingLeafAppLayout;
@property (nonatomic) struct CGSize { double width; double height; } scaledIntersectingAppLayoutSize;
@property (nonatomic) struct CGSize { double width; double height; } unscaledIntersectingAppLayoutSize;
@property (nonatomic) long long intersectingAppLayoutConfiguration;
@property (nonatomic) BOOL intersectingAppLayoutIsOnFirstRow;
@property (retain, nonatomic) SBAppLayout *closestVisibleAppLayout;
@property (retain, nonatomic) SBAppLayout *remainingAppLayout;
@property (retain, nonatomic) SBAppLayout *evictedAppLayout;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)displayItemsToReloadSnapshots;
- (id)droppedLeafAppLayout;
- (long long)effectiveDroppingAppLayoutConfiguration;
- (id)finalTargetAppLayout;
- (id)initWithDraggingLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isSwap;

@end
