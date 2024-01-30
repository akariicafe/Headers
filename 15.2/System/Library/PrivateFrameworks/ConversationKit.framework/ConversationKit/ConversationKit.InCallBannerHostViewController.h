@interface ConversationKit.InCallBannerHostViewController : UIViewController {
    void /* unknown type, empty encoding */ inCallBannerDelegate;
    void /* unknown type, empty encoding */ controlsManager;
    void /* unknown type, empty encoding */ controlsType;
    void /* unknown type, empty encoding */ notice;
    void /* unknown type, empty encoding */ captureGroupName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_captureOnlyBackdropView;
    void /* unknown type, empty encoding */ shadowView;
    void /* unknown type, empty encoding */ conversationControlsViewController;
}

@property (nonatomic) BOOL expanded;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
