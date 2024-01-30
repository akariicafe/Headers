@class NSSArticleInternal, NSSArticleView, UIActivityIndicatorView;

@interface NSSArticleViewControllerInternal : UIViewController

@property (retain, nonatomic) NSSArticleView *articleView;
@property (nonatomic) BOOL articleLoading;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) NSSArticleInternal *article;

- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)initWithNotification:(id)a0;
- (void).cxx_destruct;
- (id)initWithSpotlightIdentifier:(id)a0;
- (void)_tickleSpinner;
- (void)_tickleArticleView;
- (id)initWithArticle:(id)a0;
- (void)presentArticle:(id)a0 completion:(id /* block */)a1;

@end
