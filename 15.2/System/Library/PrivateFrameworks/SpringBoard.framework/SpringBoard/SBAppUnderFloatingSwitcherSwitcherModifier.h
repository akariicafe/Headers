@class SBFullScreenAppLayoutSwitcherModifier;

@interface SBAppUnderFloatingSwitcherSwitcherModifier : SBSwitcherModifier {
    SBFullScreenAppLayoutSwitcherModifier *_fullScreenAppLayoutModifier;
}

- (id)appLayoutsToResignActive;
- (BOOL)wantsAsynchronousSurfaceRetentionAssertion;
- (id)keyboardSuppressionMode;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (void).cxx_destruct;
- (id)initWithActiveAppLayout:(id)a0;

@end
