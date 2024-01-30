@class NSString, NUArticleExcerptView, UIScrollView, NUArticleExcerptTraits;
@protocol NULoadingDelegate, FCHeadlineProviding, FCContentContext;

@interface NUArticleExcerptViewController : UIViewController <UIScrollViewDelegate, WKNavigationDelegate, NULoadable, NUBarCompressible>

@property (readonly, nonatomic) id<FCHeadlineProviding> headline;
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

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (id)initWithHeadline:(id)a0 contentContext:(id)a1 traits:(id)a2;
- (void)handleReadMoreTapped;
- (void)loadHeadlineImageFromHeadline:(id)a0 completion:(id /* block */)a1;
- (void)loadExcerptFromHeadline:(id)a0 completion:(id /* block */)a1;
- (void)openSafariViewWithURL:(id)a0;
- (BOOL)_handleNavigationToURL:(id)a0 fromURL:(id)a1;
- (void)presentFailedOpenSafariViewWithURL:(id)a0;

@end
