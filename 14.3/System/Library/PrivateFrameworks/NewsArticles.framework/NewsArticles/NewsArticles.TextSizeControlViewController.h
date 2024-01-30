@interface NewsArticles.TextSizeControlViewController : UIViewController <UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ divider;
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ increaseButton;
    void /* unknown type, empty encoding */ increaseAction;
    void /* unknown type, empty encoding */ decreaseButton;
    void /* unknown type, empty encoding */ decreaseAction;
}

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;

- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
