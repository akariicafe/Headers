@interface MagnifierSupport.CameraTrayViewController : UIViewController {
    void /* unknown type, empty encoding */ captureDelegate;
    void /* unknown type, empty encoding */ settingsDelegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_snapshotButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_settingsButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_snapshotModeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewSnapshotsButton;
    void /* unknown type, empty encoding */ freezeFrameModeSubscription;
    void /* unknown type, empty encoding */ freezeFrameReviewSubscription;
    void /* unknown type, empty encoding */ rotationSubscription;
    void /* unknown type, empty encoding */ $__lazy_storage_$_successfulMultiShotCaptureCount;
}

- (void)didTapDoneButton:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didTapSettingsButton:(id)a0;
- (void)didTapSnapshotModeButton:(id)a0;
- (void)didTapViewSnapshotsButton:(id)a0;
- (void)didTapSnapshotButton:(id)a0;

@end
