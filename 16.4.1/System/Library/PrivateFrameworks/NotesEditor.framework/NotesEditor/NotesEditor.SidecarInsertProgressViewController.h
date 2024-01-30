@interface NotesEditor.SidecarInsertProgressViewController : UIViewController <UIAdaptivePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ $__lazy_storage_$_deviceImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_progressTitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dividerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cancelButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stackView;
    void /* unknown type, empty encoding */ didTapCancel;
}

- (void)presentationControllerDidDismiss:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)cancelButtonDidTouchUpInsideButton:(id)a0;

@end
