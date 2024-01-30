@class NSString;

@interface TUNavigationController : UINavigationController <UIViewControllerStatusBarPartStyleProvider>

@property (readonly, nonatomic) long long ts_preferredLeadingStatusBarStyle;
@property (readonly, nonatomic) long long ts_preferredCenterStatusBarStyle;
@property (readonly, nonatomic) long long ts_preferredTrailingStatusBarStyle;
@property (readonly, nonatomic) long long preferredLeadingStatusBarStyle;
@property (readonly, nonatomic) long long preferredTrailingStatusBarStyle;
@property (readonly, nonatomic) long long preferredCenterStatusBarStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootViewController:(id)a0;
- (long long)convert:(long long)a0;
- (id)initWithRootViewController:(id)a0 navigationBarClass:(Class)a1;

@end
