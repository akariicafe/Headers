@interface _UIInteractiveHighlightEffectWindow : UIWindow

+ (BOOL)_isSystemWindow;

- (BOOL)isInternalWindow;
- (BOOL)_canAffectStatusBarAppearance;
- (BOOL)_isHostingPortalViews;

@end
