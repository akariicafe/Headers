@class UIColor;

@interface NUArticleViewStyler : NSObject <NUArticleViewStyler>

@property (retain, nonatomic) UIColor *tabBarTintColor;
@property (retain, nonatomic) UIColor *toolbarTintColor;
@property (readonly, nonatomic) UIColor *mainBackgroundColor;
@property (readonly, nonatomic) UIColor *topContentColor;
@property (readonly, nonatomic) long long statusBarStyle;
@property (readonly, nonatomic) long long topBackgroundStatusBarStyle;

- (void).cxx_destruct;
- (id)initWithBackgroundColor:(id)a0 topBackgroundColor:(id)a1;
- (long long)statusBarStyleForBackgroundColor:(id)a0;
- (void)styleTabBar:(id)a0;
- (void)styleToolbar:(id)a0;
- (void)unstyleTabBar:(id)a0 overrideRestoreColor:(id)a1;
- (void)unstyleToolbar:(id)a0 overrideRestoreColor:(id)a1;

@end
