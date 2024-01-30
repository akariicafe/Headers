@interface NewsArticles.SponsoredHeaderViewController : UIViewController <SXDocumentSectionItemProvider> {
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ headerDelegate;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (double)sectionItemHeightForSize:(struct CGSize { double x0; double x1; })a0 traitCollection:(id)a1;
- (id)sectionItemViewController;

@end
