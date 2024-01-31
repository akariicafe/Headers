@interface CoreAudioKit.AUDelayViewController : CoreAudioKit.AUAppleViewControllerBase {
    void /* unknown type, empty encoding */ headerView;
    void /* unknown type, empty encoding */ edgeControlSection;
    void /* unknown type, empty encoding */ graphView;
    void /* unknown type, empty encoding */ modeControl;
    void /* unknown type, empty encoding */ $__lazy_storage_$_decimalFormatter;
    void /* unknown type, empty encoding */ timeFormatter;
    void /* unknown type, empty encoding */ zoomInButton;
    void /* unknown type, empty encoding */ zoomOutButton;
    void /* unknown type, empty encoding */ mixKnob;
    void /* unknown type, empty encoding */ cutoffKnob;
    void /* unknown type, empty encoding */ rightWidthConstraint;
    void /* unknown type, empty encoding */ zoomFactor;
}

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)zoomOut;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)zoomIn;
- (id)initWithCoder:(id)a0;
- (void)auParameterValueChangedWithNotification:(id)a0;
- (void)knobTouchedWithNotification:(id)a0;
- (void)knobValueChangedWithNotification:(id)a0;
- (void)modeControlChanged;

@end
