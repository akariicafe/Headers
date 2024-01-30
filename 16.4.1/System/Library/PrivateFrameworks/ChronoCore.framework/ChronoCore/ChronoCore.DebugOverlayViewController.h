@interface ChronoCore.DebugOverlayViewController : UIViewController {
    void /* unknown type, empty encoding */ debugView;
    void /* unknown type, empty encoding */ debugText;
    void /* unknown type, empty encoding */ animationsPaused;
    void /* unknown type, empty encoding */ isSnapshotting;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)_didExitAlwaysOn;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)_willEnterAlwaysOn;
- (void)viewWillAppear:(BOOL)a0;

@end
