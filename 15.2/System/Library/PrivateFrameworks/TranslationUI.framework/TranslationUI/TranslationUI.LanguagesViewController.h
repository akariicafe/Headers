@interface TranslationUI.LanguagesViewController : UIViewController {
    void /* unknown type, empty encoding */ segmentedControl;
    void /* unknown type, empty encoding */ showsCloseButton;
    void /* unknown type, empty encoding */ requireOnDevice;
    void /* unknown type, empty encoding */ selectionModel;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ subscriptions;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)updateSelectedTarget;
- (void)closeActionWithSender:(id)a0;

@end
