@interface _UIInteractiveHighlightEffectWindow : UIWindow

+ (BOOL)_isSystemWindow;

- (BOOL)isInternalWindow;
- (BOOL)_canAffectStatusBarAppearance;
- (id)_roleHint;
- (BOOL)_isHostingPortalViews;

@end
