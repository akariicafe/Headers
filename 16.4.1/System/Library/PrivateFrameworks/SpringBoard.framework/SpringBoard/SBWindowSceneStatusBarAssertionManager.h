@class NSString, NSPointerArray, NSHashTable, SBStatusBarSettings, SBWindowScene;
@protocol BSInvalidatable;

@interface SBWindowSceneStatusBarAssertionManager : NSObject <BSDescriptionProviding, UIStatusBarManager> {
    NSHashTable *_disableAlphaChangeAssertions;
    NSHashTable *_disableUserInteractionChangeAssertions;
    NSHashTable *_hideStatusBarAssertions;
    NSPointerArray *_statusBarSettingsAssertionsByLevel[13];
    SBStatusBarSettings *_currentStatusBarSettings;
    id<BSInvalidatable> _stateCaptureAssertion;
    NSHashTable *_observers;
    BOOL _changingStatusBarStyle;
    BOOL _changingStatusBarAlpha;
    unsigned long long _statusBarAlphaAnimationCount;
    SBWindowScene *_windowScene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWindowScene:(id)a0;
- (void)_evaluateSettingsWithStyleAnimations:(id)a0;
- (id)effectiveStatusBarStyleRequestForLevel:(unsigned long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_modifiedStatusBarSettingsAssertion:(id)a0;
- (void)_statusBarUpdatedFromSettings:(id)a0 toSettings:(id)a1 withAnimations:(id)a2;
- (id)succinctDescriptionBuilder;
- (id)_descriptionForPropertyWithAssertions:(id)a0;
- (void)addObserver:(id)a0;
- (id)_styleRequestForSettings:(id)a0;
- (long long)effectiveStatusBarStyleForRequestedStyle:(long long)a0 styleOverridesToSuppress:(unsigned long long)a1;
- (BOOL)statusBar:(id)a0 shouldSetAlpha:(double)a1;
- (void)_enumerateAssertionsToLevel:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (id)newSettingsAssertionWithSettings:(id)a0 atLevel:(unsigned long long)a1 reason:(id)a2;
- (id)acquireHideFrontmostStatusBarAssertionForReason:(id)a0;
- (void)_addStatusBarSettingsAssertion:(id)a0;
- (id)newSettingsAssertionWithStatusBarHidden:(BOOL)a0 atLevel:(unsigned long long)a1 reason:(id)a2;
- (id)currentEffectiveStatusBarStyleRequest;
- (BOOL)statusBar:(id)a0 shouldRequestStyle:(long long)a1 animationParameters:(id)a2 forced:(BOOL)a3;
- (id)acquireDisableAlphaChangesAssertionWithReason:(id)a0;
- (id)acquireDisableUserInteractionChangesAssertionWithReason:(id)a0;
- (BOOL)isFrontmostStatusBarPartHidden:(long long)a0;
- (id)currentStatusBarSettings;
- (void)_resolveEffectiveStatusBarStyleForSettings:(id)a0;
- (void)dealloc;
- (void)_setStatusBarValueForPropertyWithAssertions:(id)a0 setter:(id /* block */)a1;
- (void)removeObserver:(id)a0;
- (void)_removeStatusBarSettingsAssertion:(id)a0 withAnimationParameters:(id)a1;
- (void)_removeDisableWindowSceneStatusBarUserInteractionChangesAssertion:(id)a0;
- (void)_addStatusBarSettingsAssertion:(id)a0 withAnimationParameters:(id)a1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_removeStatusBarSettingsAssertion:(id)a0;
- (unsigned long long)statusBar:(id)a0 effectiveStyleOverridesForRequestedStyle:(long long)a1 overrides:(unsigned long long)a2;
- (void)_addDisableWindowSceneStatusBarUserInteractionChangesAssertion:(id)a0;
- (void)_cleanUpAllStatusBarSettingsAssertions;
- (void)_addDisableWindowSceneStatusBarAlphaChangesAssertion:(id)a0;
- (BOOL)statusBar:(id)a0 shouldRequestStyleAttributes:(id)a1 animationParameters:(id)a2 forced:(BOOL)a3;
- (void)_removeDisableWindowSceneStatusBarAlphaChangesAssertion:(id)a0;
- (BOOL)isFrontmostStatusBarHidden;
- (void).cxx_destruct;
- (id)statusBarSettingsForLevel:(unsigned long long)a0;
- (void)_modifiedStatusBarSettingsAssertion:(id)a0 withAnimationParameters:(id)a1;
- (id)effectiveStatusBarStyleRequestWithSettings:(id)a0;

@end
