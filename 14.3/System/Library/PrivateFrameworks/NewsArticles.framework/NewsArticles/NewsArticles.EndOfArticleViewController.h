@interface NewsArticles.EndOfArticleViewController : UIViewController <TUDeselectable, TUKeyCommandTraversable, TUKeyCommandParentTraversable, SXDocumentSectionItemProvider, NAArticleFooterType, NAEndOfArticleResultProviderType> {
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

- (void)viewDidLayoutSubviews;
- (void)deselect;
- (void)startTraversingWithDirection:(long long)a0;
- (void)childTraversable:(id)a0 didExitTraversalWithDirection:(long long)a1;
- (void)childTraversable:(id)a0 didExcludeScrollKeyCommand:(id)a1 flags:(long long)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (double)sectionItemHeightForSize:(struct CGSize { double x0; double x1; })a0 traitCollection:(id)a1;
- (id)sectionItemViewController;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
