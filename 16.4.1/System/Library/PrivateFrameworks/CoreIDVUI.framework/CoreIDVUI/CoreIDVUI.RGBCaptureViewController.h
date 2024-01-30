@interface CoreIDVUI.RGBCaptureViewController : UIViewController <UINavigationControllerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomTray;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ interactor;
    void /* unknown type, empty encoding */ captureConfig;
    void /* unknown type, empty encoding */ inWatchModeOnly;
    void /* unknown type, empty encoding */ analyticsReporter;
    void /* unknown type, empty encoding */ proofingFlowManager;
    void /* unknown type, empty encoding */ eligibilityHelper;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ timeoutRestarts;
    void /* unknown type, empty encoding */ stitchDetectedRestarts;
    void /* unknown type, empty encoding */ faceOutOfBoundsRestarts;
    void /* unknown type, empty encoding */ faceTooSmallRestarts;
    void /* unknown type, empty encoding */ sentToBackgroundRestarts;
    void /* unknown type, empty encoding */ activityIndicator;
}

- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)cancelBarButtonClicked;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)primaryButtonTargetAction;

@end
