@class NSSArticleInternal, NSSArticleView, UIActivityIndicatorView;

@interface NSSArticleViewControllerInternal : UIViewController

@property (retain, nonatomic) NSSArticleView *articleView;
@property (nonatomic) BOOL articleLoading;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) NSSArticleInternal *article;

- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNotification:(id)a0;
- (void)_tickleArticleView;
- (void)_tickleSpinner;
- (id)initWithArticle:(id)a0;
- (id)initWithSpotlightIdentifier:(id)a0;
- (void)presentArticle:(id)a0 completion:(id /* block */)a1;

@end
