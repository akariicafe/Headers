@class NSString, SBHomeGestureDockSwitcherModifier;

@interface SBExternalHomeGestureFloatingSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate> {
    SBHomeGestureDockSwitcherModifier *_dockModifier;
    long long _initialFloatingConfiguration;
    long long _interfaceOrientation;
    BOOL _stashed;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _stashedContainerViewBounds;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationAttributesForLayoutElement:(id)a0;
- (void).cxx_destruct;
- (id)appLayoutsToResignActive;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerViewBounds;
- (void)didMoveToParentModifier:(id)a0;
- (BOOL)isFloatingDockGesturePossible;
- (id)handleGestureEvent:(id)a0;
- (long long)currentFinalDestination;
- (id)initWithGestureID:(id)a0 initialFloatingConfiguration:(long long)a1 interfaceOrientation:(long long)a2;
- (void)_updateForGestureDidBeginOrChangeWithEvent:(id)a0;

@end
