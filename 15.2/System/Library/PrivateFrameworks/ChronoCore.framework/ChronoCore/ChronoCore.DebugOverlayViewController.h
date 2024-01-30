@interface ChronoCore.DebugOverlayViewController : UIViewController {
    void /* unknown type, empty encoding */ debugView;
    void /* unknown type, empty encoding */ debugText;
    void /* unknown type, empty encoding */ animationsDisabled;
    void /* unknown type, empty encoding */ isSnapshotting;
}

- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
