@interface CNKPushToTalkFullScreenViewController : UIViewController {
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundMaterialView;
    void /* unknown type, empty encoding */ conversationControlsManager;
    void /* unknown type, empty encoding */ pttView;
    void /* unknown type, empty encoding */ cancellables;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithConversationControlsManager:(id)a0;

@end
