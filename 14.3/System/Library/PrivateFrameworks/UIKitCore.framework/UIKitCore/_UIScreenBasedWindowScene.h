@class UIScreen, UIMutableApplicationSceneSettings;
@protocol NSCopying;

@interface _UIScreenBasedWindowScene : UIWindowScene {
    UIScreen *_screen;
    UIMutableApplicationSceneSettings *_synthesizedSettings;
    BOOL _invalidationHandlerRegistered;
    id<NSCopying> _lookupKey;
}

+ (id)unassociationCache;
+ (id)unassociationCacheAccessQueue;
+ (BOOL)autoinvalidates;
+ (id)_unassociatedWindowSceneForScreen:(id)a0 create:(BOOL)a1;
+ (BOOL)alwaysKeepContexts;
+ (BOOL)shouldAllowComponents;

- (id)screen;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceBoundsForOrientation:(long long)a0;
- (BOOL)_shouldAllowFencing;
- (void)_openURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceBounds;
- (id)_synthesizedSettings;
- (void)_setKeepContextAssociationInBackground:(BOOL)a0;
- (void)_detachWindow:(id)a0;
- (void)_attachWindow:(id)a0;
- (void)_updateClientSettingsToInterfaceOrientation:(long long)a0 withAnimationDuration:(double)a1;
- (id)_displayInfoProvider;
- (void)setDelegate:(id)a0;
- (void)_screenDisconnected:(id)a0;
- (id)initWithScreen:(id)a0 session:(id)a1 lookupKey:(id)a2;

@end
