@interface NewsUI2.SearchMoreTagsViewController : UIViewController <TSSearchResultsPanable> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ searchContentType;
    void /* unknown type, empty encoding */ toolbarManager;
}

@property (nonatomic, readonly) BOOL isSearchResultsPane;

- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
