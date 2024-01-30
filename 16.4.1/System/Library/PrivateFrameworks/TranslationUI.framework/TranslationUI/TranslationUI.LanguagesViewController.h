@interface TranslationUI.LanguagesViewController : UIViewController {
    void /* unknown type, empty encoding */ segmentedControl;
    void /* unknown type, empty encoding */ showsCloseButton;
    void /* unknown type, empty encoding */ requireOnDevice;
    void /* unknown type, empty encoding */ selectionModel;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ subscriptions;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)closeActionWithSender:(id)a0;
- (void)updateSelectedTarget;

@end
