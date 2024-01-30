@interface ConversationKit.ConversationNoticeViewController : UIViewController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ controlsManager;
    void /* unknown type, empty encoding */ recipe;
    void /* unknown type, empty encoding */ presentationSize;
    void /* unknown type, empty encoding */ expanded;
    void /* unknown type, empty encoding */ menuPresented;
    void /* unknown type, empty encoding */ pillView;
}

- (void)handleTapGesture;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
