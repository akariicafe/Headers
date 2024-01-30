@class SBAppLayout;

@interface SBAppUnderFloatingSwitcherSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_appLayout;
}

- (id)keyboardSuppressionMode;
- (BOOL)wantsAsynchronousSurfaceRetentionAssertion;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)appLayoutsToResignActive;
- (void).cxx_destruct;
- (id)initWithActiveAppLayout:(id)a0;

@end
