@interface NewsArticles.EndOfArticleViewController : UIViewController <TUDeselectable, SXDocumentSectionItemProvider, NAArticleFooterType, NAEndOfArticleResultProviderType> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ overriddenTraitCollection;
    void /* unknown type, empty encoding */ gutterViewController;
    void /* unknown type, empty encoding */ bottomSpacerView;
    void /* unknown type, empty encoding */ urlHandler;
}

@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
@property (nonatomic, weak) void /* unknown type, empty encoding */ footerDelegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ resultProviderDelegate;

- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)deselect;
- (double)sectionItemHeightForSize:(struct CGSize { double x0; double x1; })a0 traitCollection:(id)a1;
- (id)sectionItemViewController;
- (void)smartInvertStatusDidChange;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
