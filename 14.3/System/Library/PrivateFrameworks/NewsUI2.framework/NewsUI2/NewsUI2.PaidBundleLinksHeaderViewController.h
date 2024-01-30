@interface NewsUI2.PaidBundleLinksHeaderViewController : UIViewController <UITextViewDelegate, SXDocumentSectionItemProvider> {
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ viewProvider;
    void /* unknown type, empty encoding */ headerDelegate;
}

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)requestDismissal;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (double)sectionItemHeightForSize:(struct CGSize { double x0; double x1; })a0 traitCollection:(id)a1;
- (id)sectionItemViewController;

@end
