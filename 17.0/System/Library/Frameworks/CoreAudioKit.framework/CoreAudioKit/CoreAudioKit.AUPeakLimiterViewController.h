@interface CoreAudioKit.AUPeakLimiterViewController : CoreAudioKit.AURealtimeDrawingBaseViewController {
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_graphView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_controlsView;
    void /* unknown type, empty encoding */ viewContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_attackKnob;
    void /* unknown type, empty encoding */ $__lazy_storage_$_releaseKnob;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gainKnob;
    void /* unknown type, empty encoding */ $__lazy_storage_$_wholeNumberFormatter;
    void /* unknown type, empty encoding */ v3AU;
    void /* unknown type, empty encoding */ compressionAmountParam;
    void /* unknown type, empty encoding */ minCompressionValue;
    void /* unknown type, empty encoding */ maxCompressionValue;
    void /* unknown type, empty encoding */ temporaryConstraints;
    void /* unknown type, empty encoding */ previousSize;
    void /* unknown type, empty encoding */ displayMode;
    void /* unknown type, empty encoding */ attackSpacer;
    void /* unknown type, empty encoding */ gainSpacer;
    void /* unknown type, empty encoding */ loopIndex;
    void /* unknown type, empty encoding */ maxPeak;
}

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)knobReleasedWithNotification:(id)a0;
- (void)knobTouchedWithNotification:(id)a0;
- (void)knobValueChangedWithNotification:(id)a0;

@end
