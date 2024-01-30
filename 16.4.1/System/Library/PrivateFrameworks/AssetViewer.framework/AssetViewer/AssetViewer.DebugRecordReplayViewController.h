@interface AssetViewer.DebugRecordReplayViewController : UIViewController <ARSessionDelegate> {
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ arqlVC;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ shouldShowRenderingOverlay;
    void /* unknown type, empty encoding */ renderingEffectsData;
    void /* unknown type, empty encoding */ currentConfig;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ focalDataForRecording;
    void /* unknown type, empty encoding */ modelURL;
    void /* unknown type, empty encoding */ arRecordingURL;
    void /* unknown type, empty encoding */ command;
    void /* unknown type, empty encoding */ blinkTimer;
    void /* unknown type, empty encoding */ optionsToBlink;
    void /* unknown type, empty encoding */ blinkShouldEnable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_replayObserver;
}

- (void)session:(id)a0 didFailWithError:(id)a1;
- (void)session:(id)a0 didUpdateFrame:(id)a1;
- (void)sessionWasInterrupted:(id)a0;
- (void)sessionInterruptionEnded:(id)a0;
- (void)session:(id)a0 didUpdateAnchors:(id)a1;
- (void)session:(id)a0 cameraDidChangeTrackingState:(id)a1;
- (void)session:(id)a0 didAddAnchors:(id)a1;
- (void)session:(id)a0 didRemoveAnchors:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)blinkButtonPressed;
- (void)helpDismissVC;
- (void)playButtonPressed;
- (void)recordButtonPressed;
- (void)resetButtonPressed;
- (void)tappedWithRecognizer:(id)a0;

@end
