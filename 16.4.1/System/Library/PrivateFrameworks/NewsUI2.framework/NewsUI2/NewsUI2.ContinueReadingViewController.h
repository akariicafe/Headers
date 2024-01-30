@interface NewsUI2.ContinueReadingViewController : AMSUIToastViewController <AMSUIMessageViewControllerDelegate> {
    void /* unknown type, empty encoding */ content;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ dialogRequestFactory;
    void /* unknown type, empty encoding */ relativeTabBarController;
    void /* unknown type, empty encoding */ styler;
}

- (void)messageViewController:(id)a0 didSelectActionWithDialogResult:(id)a1;
- (void)messageViewController:(id)a0 didUpdateSize:(struct CGSize { double x0; double x1; })a1;
- (void)messageViewController:(id)a0 didFailWithError:(id)a1;
- (void)messageViewController:(id)a0 didLoadDialogRequest:(id)a1;
- (void)messageViewControllerDidDismiss:(id)a0;
- (id)initWithRequest:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 bag:(id)a1 account:(id)a2;

@end
