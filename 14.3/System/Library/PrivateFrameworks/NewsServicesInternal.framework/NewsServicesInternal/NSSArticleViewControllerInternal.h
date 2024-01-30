@class NSSArticleInternal, NSSArticleView, UIActivityIndicatorView;

@interface NSSArticleViewControllerInternal : UIViewController

@property (retain, nonatomic) NSSArticleView *articleView;
@property (nonatomic) BOOL articleLoading;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) NSSArticleInternal *article;

- (BOOL)prefersStatusBarHidden;
- (void).cxx_destruct;
- (id)initWithSpotlightIdentifier:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNotification:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_tickleSpinner;
- (void)_tickleArticleView;
- (id)initWithArticle:(id)a0;
- (void)presentArticle:(id)a0 completion:(id /* block */)a1;

@end
