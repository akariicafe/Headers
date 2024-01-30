@class NSString, SBAppExposeGridSwitcherModifier;

@interface SBAppExposeToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    NSString *_bundleIdentifier;
    SBAppExposeGridSwitcherModifier *_appExposeModifier;
}

- (id)liveContentRasterizationAttributesForAppLayout:(id)a0;
- (BOOL)_isEffectivelyHome;
- (void).cxx_destruct;
- (id)transitionWillBegin;
- (id)transitionDidEnd;
- (double)plusButtonAlpha;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 bundleIdentifier:(id)a2 appExposeModifier:(id)a3;
- (id)_newAppExposeModifier;

@end
