@class UIScreen, UIMutableApplicationSceneSettings, NSMutableSet;
@protocol BSInvalidatable, NSCopying;

@interface _UIScreenBasedWindowScene : UIWindowScene {
    id<NSCopying> _lookupKey;
    UIScreen *_screen;
    UIMutableApplicationSceneSettings *_synthesizedSettings;
    BOOL _invalidationEvaluatorRegistered;
    BOOL _needsInvalidation;
    id<BSInvalidatable> _screenDisconnectionPreventionAssertion;
    NSMutableSet *_autoInvalidationPreventionAssertions;
}

+ (id)unassociationCacheAccessQueue;
+ (BOOL)autoInvalidates;
+ (BOOL)shouldAllowComponents;
+ (id)unassociationCache;
+ (id)_unassociatedWindowSceneForScreen:(id)a0 create:(BOOL)a1;
+ (BOOL)alwaysKeepContexts;

- (id)screen;
- (void)_screenInterfaceOrientationChanged:(id)a0;
- (void)_removeAutoInvalidationPreventionAssertion:(id)a0;
- (id)initWithScreen:(id)a0 session:(id)a1 lookupKey:(id)a2;
- (id)_displayInfoProvider;
- (void)_updateClientSettingsToInterfaceOrientation:(long long)a0 withAnimationDuration:(double)a1;
- (void)_attachWindow:(id)a0;
- (void)_detachWindow:(id)a0;
- (void)_addSubclassDebugDescriptionWithBuilder:(id)a0;
- (id)_synthesizedSettings;
- (void)_screenDisconnected:(id)a0;
- (void)setDelegate:(id)a0;
- (void)_setKeepContextAssociationInBackground:(BOOL)a0;
- (BOOL)_shouldAllowFencing;
- (void)_addSubclassFlagsToDebugDescriptionWithBuilder:(id)a0;
- (void)_openURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceBoundsForOrientation:(long long)a0;
- (void)_invalidate;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceBounds;

@end
