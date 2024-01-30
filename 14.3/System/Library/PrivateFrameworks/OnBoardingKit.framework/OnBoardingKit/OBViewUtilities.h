@interface OBViewUtilities : NSObject

+ (long long)interfaceOrientationForKeyWindow;
+ (id)pointImageOfColor:(id)a0;
+ (BOOL)_navigationBarTitleShouldShowForHeaderView:(id)a0 inScrollView:(id)a1;
+ (void)updateNavigationBarWithNavigationItem:(id)a0 forHeaderView:(id)a1 inScrollView:(id)a2 animated:(BOOL)a3;
+ (BOOL)shouldUseAccessibilityLayout;

@end
