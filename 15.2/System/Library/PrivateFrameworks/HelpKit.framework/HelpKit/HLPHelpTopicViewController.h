@class HLPHelpBookController, NSURL, NSMutableDictionary, UIBarButtonItem, NSMutableArray, HLPHelpLoadingView, NSLayoutConstraint, NSString, HLPHelpTopicHistoryItem, WKWebView, TPSURLSessionItem, NSArray, HLPHelpLocale, NSCache;
@protocol HLPHelpTopicViewControllerDelegate;

@interface HLPHelpTopicViewController : UIViewController <UIGestureRecognizerDelegate, WKNavigationDelegate, HLPHelpTopicViewControllerDelegate, HLPHelpLoadingViewDelegate> {
    id _interactivePopGestureRecognizerDelegate;
    BOOL _canShowTOC;
    BOOL _webViewLoaded;
    BOOL _RTL;
    NSMutableArray *_topicHistory;
    UIBarButtonItem *_tocBarButtonItem;
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_forwardBarButtonItem;
    NSLayoutConstraint *_loadingViewTopConstraint;
}

@property (nonatomic) BOOL darkModeEnabled;
@property (retain, nonatomic) TPSURLSessionItem *URLSessionItem;
@property (retain, nonatomic) NSCache *topicCache;
@property (retain, nonatomic) NSArray *searchTerms;
@property (retain, nonatomic) NSMutableDictionary *webViewRequestsMap;
@property (weak, nonatomic) id<HLPHelpTopicViewControllerDelegate> delegate;
@property (nonatomic) BOOL supportsDarkMode;
@property (nonatomic) BOOL displayHelpTopicsOnly;
@property (nonatomic) BOOL hideDoneButton;
@property (nonatomic) BOOL showTopicNameAsTitle;
@property (retain, nonatomic) NSURL *helpBookURL;
@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) HLPHelpLocale *locale;
@property (retain, nonatomic) HLPHelpBookController *helpBookController;
@property (retain, nonatomic) HLPHelpTopicHistoryItem *currentTopicHistoryItem;
@property (retain, nonatomic) HLPHelpLoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBackgroundColor;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)dismiss;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)updateDoneButton;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void)updateNavigationButtons;
- (void)loadHelpTopicItem:(id)a0 searchTerms:(id)a1 anchor:(id)a2;
- (void)loadWithInfo:(id)a0;
- (void)showHelpBookInfo:(id)a0;
- (void)reloadCurrentTopic;
- (void)helpTopicViewController:(id)a0 traitCollectionChanged:(id)a1;
- (void)helpTopicViewControllerShowHelpBookInfo:(id)a0;
- (void)helpTopicViewControllerDoneButtonTapped:(id)a0;
- (void)helpTopicViewController:(id)a0 topicLoaded:(id)a1;
- (void)helpTopicViewController:(id)a0 failToLoadWithError:(id)a1;
- (void)helpTopicViewControllerCurrentTopicIsPassionPoint:(id)a0;
- (void)showWebViewDelay;
- (void)showTableOfContent;
- (void)backButtonTapped;
- (void)forwardButtonTapped;
- (void)updateScrollPositionForCurrentTopicItem;
- (void)saveCurrentTopicItem;
- (void)_loadWithInfo:(id)a0;
- (void)loadHTMLString:(id)a0 anchor:(id)a1;
- (void)updateHTMLStringPath:(id)a0 tag:(id)a1 attribute:(id)a2;
- (void)updateHTMLStringPath:(id)a0 tag:(id)a1 attribute:(id)a2 useScheme:(BOOL)a3;

@end
