@interface ConversationKit.ConversationControlsShareCardViewController : UIViewController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ conversationControlsManager;
    void /* unknown type, empty encoding */ foregroundAppCancellable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundMaterialView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topStatusView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_screenShareButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collaborateButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collaborateSubtitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sharePlayDiscoverabilityView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gelatoDiscoverabilityView;
}

@property (nonatomic) long long modalPresentationStyle;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)didTapCloseButton;
- (void)didTapCollaborateButton;
- (void)didTapScreenShareButton;

@end
