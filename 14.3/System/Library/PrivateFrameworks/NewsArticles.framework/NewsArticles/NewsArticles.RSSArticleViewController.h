@class NSArray;

@interface NewsArticles.RSSArticleViewController : UIViewController <NULoadingDelegate> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ article;
    void /* unknown type, empty encoding */ contentContext;
    void /* unknown type, empty encoding */ contentViewController;
    void /* unknown type, empty encoding */ contentBackgroundColor;
    void /* unknown type, empty encoding */ observableScrollView;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ keyCommandManager;
}

@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)handleKeyCommandWithKeyCommand:(id)a0;
- (void)loadingDidFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
