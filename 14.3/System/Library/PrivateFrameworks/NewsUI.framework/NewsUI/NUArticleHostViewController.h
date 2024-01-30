@class FCObservable, NSString, UIView, NSHashTable, NUArticleContext, NFMultiDelegate, FCIssue, UIResponder, FCArticle, UIViewController, UIScrollView;
@protocol NUArticleViewControllerFactory, NUAnalyticsReporting, NUArticleContentSizeManager, NULoadingDelegate, NULoadingViewProviding, NUSettings, NUErrorMessageFactory;

@interface NUArticleHostViewController : UIViewController <NULoadingDelegate, SXAnalyticsReporting, NUPageable, NUBarCompressible>

@property (readonly, nonatomic) FCArticle *article;
@property (readonly, nonatomic) FCIssue *issue;
@property (readonly, nonatomic) id<NUArticleViewControllerFactory> articleViewControllerFactory;
@property (readonly, copy, nonatomic) id<NUSettings> settings;
@property (retain, nonatomic) UIViewController *contentTypeViewController;
@property (retain, nonatomic) UIView<NULoadingViewProviding> *loadingView;
@property (readonly, nonatomic) NFMultiDelegate *multiLoadingDelegate;
@property (readonly, nonatomic) id<NUErrorMessageFactory> errorMessageFactory;
@property (readonly, nonatomic) id<NUAnalyticsReporting> analyticsReporting;
@property (readonly, nonatomic) id<NUArticleContentSizeManager> contentSizeManager;
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
- (BOOL)resignFirstResponder;
- (void)reload;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)reportEvent:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)loadingDidFinishWithError:(id)a0;
- (void)loadingWillStart;
- (void)loadingDidStart;
- (void)loadingDidUpdateProgress:(double)a0;
- (id)initWithArticle:(id)a0 issue:(id)a1 articleViewControllerFactory:(id)a2 settings:(id)a3 errorMessageFactory:(id)a4 analyticsReporting:(id)a5 contentSizeManager:(id)a6;
- (id)initWithArticle:(id)a0 articleViewControllerFactory:(id)a1 settings:(id)a2 errorMessageFactory:(id)a3 contentSizeManager:(id)a4;
- (void)loadArticleAndEmbedArticleViewController;
- (id)loadingTextForArticle:(id)a0;
- (void)updateContentScaleAndSize;

@end
