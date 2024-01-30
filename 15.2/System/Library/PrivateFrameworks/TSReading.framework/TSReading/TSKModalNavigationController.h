@class UIView;

@interface TSKModalNavigationController : UINavigationController {
    UIView *mTopSeparator;
}

@property (nonatomic) BOOL showTopSeparator;
@property (nonatomic) BOOL isFullscreenViewController;

- (void)layoutViews;
- (id)initWithRootViewController:(id)a0;
- (void)viewDidLoad;
- (long long)positionForBar:(id)a0;
- (void)dealloc;
- (void)p_statusBarWillChange:(id)a0;

@end
