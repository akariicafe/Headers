@class NSString, NUArticleExcerptView, UIScrollView, NUArticleExcerptTraits;
@protocol FCContentContext, NUWebViewControllerFactoryType, FCHeadlineProviding, NULoadingDelegate;

@interface NUArticleExcerptViewController : UIViewController <UIScrollViewDelegate, WKNavigationDelegate, NULoadable, NUBarCompressible>

@property (readonly, nonatomic) id<FCHeadlineProviding> headline;
@property (readonly, nonatomic) id<NUWebViewControllerFactoryType> webViewControllerFactory;
@property (readonly, nonatomic) id<FCContentContext> contentContext;
@property (retain, nonatomic) NUArticleExcerptTraits *traits;
@property (readonly, nonatomic) NUArticleExcerptView *excerptView;
@property (nonatomic) double currentScrollStartPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NULoadingDelegate> loadingDelegate;
@property (readonly, nonatomic) UIScrollView *scrollView;

- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)initWithHeadline:(id)a0 webViewControllerFactory:(id)a1 contentContext:(id)a2 traits:(id)a3;
- (void)handleReadMoreTapped;
- (void)loadHeadlineImageFromHeadline:(id)a0 completion:(id /* block */)a1;
- (void)loadExcerptFromHeadline:(id)a0 completion:(id /* block */)a1;
- (void)openSafariViewWithURL:(id)a0;
- (BOOL)_handleNavigationToURL:(id)a0 fromURL:(id)a1;
- (void)presentFailedOpenSafariViewWithURL:(id)a0;

@end
