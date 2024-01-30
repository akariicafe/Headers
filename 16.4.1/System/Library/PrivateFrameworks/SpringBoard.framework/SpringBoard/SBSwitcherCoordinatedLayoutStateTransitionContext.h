@class NSSet, SBAppLayout, NSString, SBSwitcherController;

@interface SBSwitcherCoordinatedLayoutStateTransitionContext : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) long long fromFloatingConfiguration;
@property (readonly, nonatomic) long long fromCenterConfiguration;
@property (readonly, copy, nonatomic) NSSet *displayItems;
@property (readonly, nonatomic) SBSwitcherController *fromSwitcherController;
@property (readonly, nonatomic) SBSwitcherController *toSwitcherController;
@property (readonly, nonatomic) SBAppLayout *fromAppLayout;
@property (readonly, nonatomic) SBAppLayout *toAppLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coordinatedLayoutStateTransitionContextForMovingDisplayItems:(id)a0 fromSwitcherController:(id)a1 fromAppLayout:(id)a2 toSwitcherController:(id)a3 withApplicationController:(id)a4;
+ (id)coordinatedLayoutStateTransitionContextForMovingDisplayItems:(id)a0 toSwitcherController:(id)a1 withApplicationController:(id)a2;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fromFrameInFromSwitcherForDisplayItem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fromFrameInToSwitcherForDisplayItem:(id)a0;
- (BOOL)hasTransitioningDisplayItemsForAppLayout:(id)a0;
- (BOOL)hasTransitioningDisplayItemsForSwitcherController:(id)a0;
- (id)initWithDisplayItems:(id)a0 fromSwitcherController:(id)a1 toSwitcherController:(id)a2 fromAppLayout:(id)a3 toAppLayout:(id)a4;
- (BOOL)isDisplayItemTransitioning:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })toFrameInFromSwitcherForDisplayItem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })toFrameInToSwitcherForDisplayItem:(id)a0;

@end
