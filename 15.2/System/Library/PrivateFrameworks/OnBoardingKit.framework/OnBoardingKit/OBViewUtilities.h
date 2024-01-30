@interface OBViewUtilities : NSObject

+ (BOOL)shouldUseAccessibilityLayout;
+ (long long)activeInterfaceOrientationForView:(id)a0;
+ (id)pointImageOfColor:(id)a0;
+ (BOOL)_navigationBarTitleShouldShowForHeaderView:(id)a0 inScrollView:(id)a1;
+ (void)updateNavigationBarWithNavigationItem:(id)a0 forHeaderView:(id)a1 inScrollView:(id)a2 animated:(BOOL)a3;

@end
