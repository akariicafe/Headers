@interface NewsUI2.SearchMoreViewController : UIViewController <TSSearchResultsPanable> {
    void /* unknown type, empty encoding */ searchContentType;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ toolbarManager;
    void /* unknown type, empty encoding */ sharingActivityProviderFactory;
}

@property (nonatomic, readonly) BOOL isSearchResultsPane;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
