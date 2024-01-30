@class UIView;

@interface TSKModalNavigationController : UINavigationController {
    UIView *mTopSeparator;
}

@property (nonatomic) BOOL showTopSeparator;
@property (nonatomic) BOOL isFullscreenViewController;

- (long long)positionForBar:(id)a0;
- (id)initWithRootViewController:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)layoutViews;
- (void)p_statusBarWillChange:(id)a0;

@end
