@interface MeasureFoundation.OverlayMetalView : MTKView <MTKViewDelegate> {
    void /* unknown type, empty encoding */ blendingEnabled;
    void /* unknown type, empty encoding */ depthProcessor;
    void /* unknown type, empty encoding */ adProcessor;
    void /* unknown type, empty encoding */ adWindow;
    void /* unknown type, empty encoding */ scene;
    void /* unknown type, empty encoding */ demoModes;
    void /* unknown type, empty encoding */ currentDemoMode;
    void /* unknown type, empty encoding */ swipeUpRecognizer;
    void /* unknown type, empty encoding */ swipeDownRecognizer;
}

- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)drawInMTKView:(id)a0;
- (void)didSwipeWithSender:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 device:(id)a1;

@end
