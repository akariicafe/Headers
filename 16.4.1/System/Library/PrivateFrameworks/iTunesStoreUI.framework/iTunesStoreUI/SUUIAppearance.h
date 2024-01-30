@class SUControlAppearance, NSDictionary, NSMutableDictionary, SUTabBarAppearance, SUToolbarAppearance;

@interface SUUIAppearance : NSObject <NSCopying> {
    BOOL _isDefaultAppearance;
    NSMutableDictionary *_navigationBarBackgroundImages;
    NSMutableDictionary *_navigationButtonAppearance;
    NSMutableDictionary *_segmentedControlAppearance;
}

@property (copy, nonatomic) SUControlAppearance *backButtonAppearance;
@property (copy, nonatomic) SUControlAppearance *confirmationButtonAppearance;
@property (copy, nonatomic) SUControlAppearance *destructiveButtonAppearance;
@property (copy, nonatomic) SUControlAppearance *exitStoreButtonAppearance;
@property (copy, nonatomic) SUControlAppearance *forwardButtonAppearance;
@property (copy, nonatomic) NSDictionary *navigationBarTitleTextAttributes;
@property (copy, nonatomic) SUTabBarAppearance *tabBarAppearance;
@property (copy, nonatomic) SUToolbarAppearance *toolbarAppearance;

+ (id)defaultAppearance;
+ (id)_defaultForwardButtonAppearance;
+ (id)_defaultShadowWithColor:(id)a0 offset:(struct CGSize { double x0; double x1; })a1;
+ (id)_defaultBackButtonAppearance;
+ (id)_defaultButtonAppearance;
+ (id)_defaultConfirmationButtonAppearance;
+ (id)_defaultDestructiveButtonAppearance;
+ (id)_defaultDoneButtonAppearance;
+ (id)_defaultTabBarAppearance;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)styleBarButtonItem:(id)a0;
- (void)styleTabBar:(id)a0;
- (void)styleToolbar:(id)a0;
- (id)_copySegmentedControlKeyWithStyle:(long long)a0 tintStyle:(long long)a1;
- (void)_styleBackBarButtonItem:(id)a0;
- (id)navigationBarBackgroundImageForBarMetrics:(long long)a0;
- (id)navigationButtonAppearanceForStyle:(long long)a0;
- (id)segmentedControlAppearanceForStyle:(long long)a0 tintStyle:(long long)a1;
- (void)setNavigationBarBackgroundImage:(id)a0 forBarMetrics:(long long)a1;
- (void)setNavigationButtonAppearance:(id)a0 forStyle:(long long)a1;
- (void)setSegmentedControlAppearance:(id)a0 forStyle:(long long)a1 tintStyle:(long long)a2;
- (void)styleConfirmationButtonItem:(id)a0;
- (void)styleDestructiveButton:(id)a0;
- (void)styleExitStoreButtonItem:(id)a0;
- (void)styleForwardButtonItem:(id)a0;
- (void)styleNavigationBar:(id)a0;
- (void)styleSegmentedControl:(id)a0 tintStyle:(long long)a1;
- (void)styleTabBarItem:(id)a0;

@end
