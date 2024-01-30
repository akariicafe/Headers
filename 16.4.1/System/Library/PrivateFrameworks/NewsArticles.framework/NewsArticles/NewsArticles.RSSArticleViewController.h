@class NSArray;

@interface NewsArticles.RSSArticleViewController : UIViewController <NULoadingDelegate, UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ pageDelegate;
    void /* unknown type, empty encoding */ article;
    void /* unknown type, empty encoding */ contentContext;
    void /* unknown type, empty encoding */ webViewControllerFactory;
    void /* unknown type, empty encoding */ contentViewController;
    void /* unknown type, empty encoding */ contentBackgroundColor;
    void /* unknown type, empty encoding */ observableScrollView;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ keyCommandManager;
    void /* unknown type, empty encoding */ completedReadingDebouncer;
}

@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)handleKeyCommandWithKeyCommand:(id)a0;
- (void)loadingDidFinishWithError:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
