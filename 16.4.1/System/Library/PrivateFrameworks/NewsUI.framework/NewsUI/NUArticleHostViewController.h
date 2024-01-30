@class FCObservable, NSString, UIView, NSHashTable, NUArticleContext, FCIssue, UIResponder, FCArticle, UIViewController, TFMultiDelegate, UIScrollView;
@protocol NUArticleViewControllerFactory, NUArticleHostViewControllerDelegate, NULoadingViewProviding, NUArticleContentSizeManager, NUSettings, NUErrorMessageFactory, NUAnalyticsReporting, NULoadingDelegate;

@interface NUArticleHostViewController : UIViewController <NUArticleViewControllerDelegate, NULoadingDelegate, SXAnalyticsReporting, NUPageable, NUBarCompressible>

@property (readonly, nonatomic) FCArticle *article;
@property (readonly, nonatomic) FCIssue *issue;
@property (readonly, nonatomic) id<NUArticleViewControllerFactory> articleViewControllerFactory;
@property (readonly, copy, nonatomic) id<NUSettings> settings;
@property (retain, nonatomic) UIViewController *contentTypeViewController;
@property (retain, nonatomic) UIView<NULoadingViewProviding> *loadingView;
@property (readonly, nonatomic) TFMultiDelegate *multiLoadingDelegate;
@property (readonly, nonatomic) id<NUErrorMessageFactory> errorMessageFactory;
@property (readonly, nonatomic) id<NUAnalyticsReporting> analyticsReporting;
@property (readonly, nonatomic) id<NUArticleContentSizeManager> contentSizeManager;
@property (readonly, nonatomic) long long relativePriority;
@property (weak, nonatomic) id<NUArticleHostViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) long long contentScale;
@property (readonly, nonatomic) FCObservable *articleViewStyler;
@property (readonly, nonatomic) NSHashTable *loadingListeners;
@property (retain, nonatomic) NUArticleContext *articleContext;
@property (retain, nonatomic) UIResponder *responder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *pageIdentifier;
@property (weak, nonatomic) id<NULoadingDelegate> loadingDelegate;
@property (readonly, nonatomic) UIScrollView *scrollView;

- (BOOL)becomeFirstResponder;
- (void)reload;
- (void)reportEvent:(id)a0;
- (void)viewDidLoad;
- (BOOL)resignFirstResponder;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadingDidStart;
- (id)initWithArticle:(id)a0 issue:(id)a1 articleViewControllerFactory:(id)a2 settings:(id)a3 errorMessageFactory:(id)a4 analyticsReporting:(id)a5 contentSizeManager:(id)a6 relativePriority:(long long)a7;
- (void)loadingDidFinishWithError:(id)a0;
- (void)loadingDidUpdateProgress:(double)a0;
- (void)loadingWillStart;
- (void)articleViewController:(id)a0 didScrollToPosition:(id)a1;
- (void)articleViewControllerDidScrollToBottomOfPrimaryContent:(id)a0;
- (id)initWithArticle:(id)a0 articleViewControllerFactory:(id)a1 settings:(id)a2 errorMessageFactory:(id)a3 contentSizeManager:(id)a4;
- (void)loadArticleAndEmbedArticleViewController;
- (id)loadingTextForArticle:(id)a0;
- (void)updateContentScaleAndSize;

@end
