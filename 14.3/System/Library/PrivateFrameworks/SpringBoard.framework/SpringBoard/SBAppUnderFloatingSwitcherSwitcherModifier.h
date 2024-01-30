@class SBFullScreenAppLayoutSwitcherModifier;

@interface SBAppUnderFloatingSwitcherSwitcherModifier : SBSwitcherModifier {
    SBFullScreenAppLayoutSwitcherModifier *_fullScreenAppLayoutModifier;
}

- (id)liveContentRasterizationAttributesForAppLayout:(id)a0;
- (void).cxx_destruct;
- (id)appLayoutsToResignActive;
- (BOOL)wantsAsynchronousSurfaceRetentionAssertion;
- (id)initWithActiveAppLayout:(id)a0;
- (id)keyboardSuppressionMode;
- (BOOL)isHomeGrabberVisibleForIndex:(unsigned long long)a0;

@end
