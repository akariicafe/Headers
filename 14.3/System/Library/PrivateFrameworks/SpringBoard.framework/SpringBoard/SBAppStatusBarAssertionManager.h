@class NSMutableSet, NSString, NSMutableDictionary, NSMutableOrderedSet, NSHashTable, NSPointerArray, SBAppStatusBarSettings;
@protocol BSInvalidatable;

@interface SBAppStatusBarAssertionManager : NSObject <BSDescriptionProviding, UIStatusBarManager> {
    NSHashTable *_disableAlphaChangeAssertions;
    NSHashTable *_disableUserInteractionChangeAssertions;
    NSMutableOrderedSet *_windowLevelOverrideReasons;
    NSMutableDictionary *_windowLevelOverrideMap;
    NSPointerArray *_statusBarSettingsAssertionsByLevel[11];
    SBAppStatusBarSettings *_currentStatusBarSettings;
    NSMutableDictionary *_edgeInsetsDictionary;
    NSMutableSet *_activeLayoutLayers;
    NSMutableDictionary *_orientationWindowDictionary;
    double _defaultWindowLevel;
    id<BSInvalidatable> _stateCaptureAssertion;
    NSHashTable *_observers;
    BOOL _changingStatusBarStyle;
    BOOL _changingStatusBarAlpha;
    unsigned long long _statusBarAlphaAnimationCount;
}

@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } statusBarEdgeInsets;
@property (readonly, nonatomic) unsigned long long topmostActiveLayoutLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setDefaultWindowLevel:(double)a0;
- (void)_evaluateSettingsWithStyleAnimations:(id)a0;
- (void)_removeStatusBarSettingsAssertion:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (int)statusBar:(id)a0 effectiveStyleOverridesForRequestedStyle:(long long)a1 overrides:(int)a2;
- (void)_statusBarUpdatedFromSettings:(id)a0 toSettings:(id)a1 withAnimations:(id)a2;
- (void)removeObserver:(id)a0;
- (id)statusBarSettingsForLevel:(unsigned long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)statusBar:(id)a0 shouldRequestStyleAttributes:(id)a1 animationParameters:(id)a2 forced:(BOOL)a3;
- (void)dealloc;
- (id)effectiveStatusBarStyleRequestWithSettings:(id)a0;
- (BOOL)statusBar:(id)a0 shouldSetAlpha:(double)a1;
- (void)_cleanUpAllStatusBarSettingsAssertions;
- (void)_removeDisableAppStatusBarAlphaChangesAssertion:(id)a0;
- (void)_setStatusBarValueForPropertyWithAssertions:(id)a0 setter:(id /* block */)a1;
- (void)_applyEdgeInsetsToStatusBar;
- (void)addObserver:(id)a0;
- (void)_addDisableAppStatusBarUserInteractionChangesAssertion:(id)a0;
- (void)addActiveLayoutLayer:(unsigned long long)a0;
- (id)orientationWindowForLayoutLayer:(unsigned long long)a0;
- (id)succinctDescription;
- (void)removeWindowLevelOverrideReason:(id)a0;
- (void)_addStatusBarSettingsAssertion:(id)a0 withAnimationParameters:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_removeDisableAppStatusBarUserInteractionChangesAssertion:(id)a0;
- (void)setStatusBarUserInteractionEnabled:(BOOL)a0;
- (id)effectiveStatusBarStyleRequestForLevel:(unsigned long long)a0;
- (id)_styleRequestForSettings:(id)a0;
- (BOOL)isStatusBarHidden;
- (void)_modifiedStatusBarSettingsAssertion:(id)a0;
- (id)currentStatusBarSettings;
- (id)succinctDescriptionBuilder;
- (void)_addStatusBarSettingsAssertion:(id)a0;
- (BOOL)isStatusBarUserInteractionEnabled;
- (void)_removeStatusBarSettingsAssertion:(id)a0 withAnimationParameters:(id)a1;
- (void)setStatusBarEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 forLayoutLayer:(unsigned long long)a1;
- (void)removeActiveLayoutLayer:(unsigned long long)a0;
- (void)_updateWindowLevel;
- (void)setOrientationWindow:(id)a0 forStatusBarLayoutLayer:(unsigned long long)a1;
- (void)_resolveEffectiveStatusBarStyleForSettings:(id)a0;
- (void)setWindowLevel:(double)a0 forOverrideReason:(id)a1;
- (void)_addDisableAppStatusBarAlphaChangesAssertion:(id)a0;
- (BOOL)statusBar:(id)a0 shouldRequestStyle:(long long)a1 animationParameters:(id)a2 forced:(BOOL)a3;
- (id)currentEffectiveStatusBarStyleRequest;
- (BOOL)statusBarOrientationShouldFollowWindow:(id)a0;
- (void)_modifiedStatusBarSettingsAssertion:(id)a0 withAnimationParameters:(id)a1;
- (id)_descriptionForPropertyWithAssertions:(id)a0;
- (void)_enumerateAssertionsToLevel:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)_updateStatusBarOrientationForTopMostActiveLayer;

@end
