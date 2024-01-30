@class UIScreen, UIMutableApplicationSceneSettings;
@protocol NSCopying;

@interface _UIScreenBasedWindowScene : UIWindowScene {
    UIScreen *_screen;
    UIMutableApplicationSceneSettings *_synthesizedSettings;
    BOOL _invalidationHandlerRegistered;
    id<NSCopying> _lookupKey;
}

+ (id)_unassociatedWindowSceneForScreen:(id)a0 create:(BOOL)a1;
+ (BOOL)shouldAllowComponents;
+ (BOOL)autoinvalidates;
+ (id)unassociationCache;
+ (BOOL)alwaysKeepContexts;
+ (id)unassociationCacheAccessQueue;

- (void)_setKeepContextAssociationInBackground:(BOOL)a0;
- (id)screen;
- (id)_displayInfoProvider;
- (id)_synthesizedSettings;
- (BOOL)_shouldAllowFencing;
- (void)_invalidate;
- (void)_screenInterfaceOrientationChanged:(id)a0;
- (void)setDelegate:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceBounds;
- (void)_updateClientSettingsToInterfaceOrientation:(long long)a0 withAnimationDuration:(double)a1;
- (void)_detachWindow:(id)a0;
- (id)initWithScreen:(id)a0 session:(id)a1 lookupKey:(id)a2;
- (void)_attachWindow:(id)a0;
- (void).cxx_destruct;
- (void)_openURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceBoundsForOrientation:(long long)a0;
- (void)_screenDisconnected:(id)a0;

@end
