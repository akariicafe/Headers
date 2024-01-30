@interface _UIInteractiveHighlightEffectWindow : UIWindow

+ (BOOL)_isSystemWindow;

- (BOOL)_canAffectStatusBarAppearance;
- (id)_roleHint;
- (BOOL)isInternalWindow;
- (BOOL)_isHostingPortalViews;

@end
