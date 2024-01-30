@interface StocksUI.ManageWatchlistsViewController : UIViewController <UIAdaptivePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ contentMode;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ descriptionLabel;
}

- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)viewWillLayoutSubviews;
- (void)presentationController:(id)a0 prepareAdaptivePresentationController:(id)a1;
- (void)handleDone;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
