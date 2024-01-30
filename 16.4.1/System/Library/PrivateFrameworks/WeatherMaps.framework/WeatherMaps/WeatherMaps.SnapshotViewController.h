@interface WeatherMaps.SnapshotViewController : UIViewController {
    void /* unknown type, empty encoding */ snapshotConfiguration;
    void /* unknown type, empty encoding */ snapshotView;
    void /* unknown type, empty encoding */ initialLayoutHappened;
    void /* unknown type, empty encoding */ initialTraitCollectionIsAssigned;
    void /* unknown type, empty encoding */ willEnterForegroundObserver;
    void /* unknown type, empty encoding */ weatherMapNetworkReachabilityStateDidChangeObserver;
    void /* unknown type, empty encoding */ snapshotSizeOverride;
}

- (void)handleInvertColorsStatusDidChangeWithNotification:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)handleVoiceOverStatusDidChangeWithNotification:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;

@end
