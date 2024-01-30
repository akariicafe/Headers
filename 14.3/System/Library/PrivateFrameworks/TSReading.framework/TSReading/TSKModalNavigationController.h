@class UIView;

@interface TSKModalNavigationController : UINavigationController {
    UIView *mTopSeparator;
}

@property (nonatomic) BOOL showTopSeparator;
@property (nonatomic) BOOL isFullscreenViewController;

- (void)dealloc;
- (void)layoutViews;
- (long long)positionForBar:(id)a0;
- (id)initWithRootViewController:(id)a0;
- (void)viewDidLoad;
- (void)p_statusBarWillChange:(id)a0;

@end
