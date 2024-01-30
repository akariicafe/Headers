@class NSString, SBAppExposeGridSwitcherModifier;

@interface SBAppExposeToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    NSString *_bundleIdentifier;
    SBAppExposeGridSwitcherModifier *_appExposeModifier;
}

- (double)plusButtonAlpha;
- (id)transitionWillBegin;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isEffectivelyHome;
- (id)transitionDidEnd;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 bundleIdentifier:(id)a2 appExposeModifier:(id)a3;
- (id)_newAppExposeModifier;

@end
