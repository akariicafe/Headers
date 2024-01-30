@class HKIncrementalSearchBar, NSData, WKWebView, UIView, NSMutableArray;

@interface HKCDADocumentReportViewController : HKViewController <HKIncrementalSearchBarDelegate>

@property (readonly) NSData *documentData;
@property (readonly, nonatomic) UIView *disclosureView;
@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) HKIncrementalSearchBar *incrementalSearchBar;
@property (nonatomic) BOOL javascriptSearchInstalled;
@property (nonatomic) BOOL javascriptIsRunning;
@property (nonatomic) BOOL searchInProgress;
@property (nonatomic) long long hitCount;
@property (nonatomic) long long currentHighlightedHit;
@property (retain, nonatomic) NSMutableArray *javascriptOperationQueue;

+ (id)xmlToHTMLTranslator;

- (void).cxx_destruct;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (id)initWithDocumentData:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)startIncrementalSearch;
- (void)searchBarDoneAction:(id)a0;
- (void)_updateMatchDisplayString:(long long)a0 numMatches:(long long)a1;
- (void)searchBarUpAction:(id)a0;
- (void)searchBarDownAction:(id)a0;
- (void)searchBarChangeSearch:(id)a0 searchString:(id)a1;
- (void)hideDisclosure:(id)a0;
- (id)buildDisclosureView;
- (void)_translateXMLInBackground;
- (void)_runJavascriptOperation:(id)a0 clearQueuedCommands:(BOOL)a1;
- (void)_finishJavascriptOperation;
- (void)_updateSearchHits:(long long)a0;
- (void)_runJavascript:(id)a0 clearQueuedCommands:(BOOL)a1 completion:(id /* block */)a2;
- (void)_updateSearchBarState;
- (void)_incrementCurrentHitBy:(long long)a0;

@end
