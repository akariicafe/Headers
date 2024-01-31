@interface CoreAudioKit.AUAppleViewControllerBase : UIViewController {
    void /* unknown type, empty encoding */ lastRenderedSampleTime;
    void /* unknown type, empty encoding */ eventListener;
    void /* unknown type, empty encoding */ auRendering;
    void /* unknown type, empty encoding */ initialized;
    void /* unknown type, empty encoding */ defaultDrawingInterval;
    void /* unknown type, empty encoding */ needsRealtimeDrawing;
    void /* unknown type, empty encoding */ realtimeDrawingInterval;
    void /* unknown type, empty encoding */ AU;
    void /* unknown type, empty encoding */ topLevelObjects;
    void /* unknown type, empty encoding */ tintColor;
}

- (id)init;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
