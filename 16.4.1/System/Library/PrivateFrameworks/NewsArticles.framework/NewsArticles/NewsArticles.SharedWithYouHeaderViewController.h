@interface NewsArticles.SharedWithYouHeaderViewController : UIViewController <SXDocumentSectionItemProvider> {
    void /* unknown type, empty encoding */ attributionView;
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ sharedItem;
    void /* unknown type, empty encoding */ sharedItemManager;
    void /* unknown type, empty encoding */ headerDelegate;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (double)sectionItemHeightForSize:(struct CGSize { double x0; double x1; })a0 traitCollection:(id)a1;
- (id)sectionItemViewController;

@end
