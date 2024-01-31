@interface CoreAudioKit.AURightEdgeControlsBaseViewController : CoreAudioKit.AUAppleViewControllerBase {
    void /* unknown type, empty encoding */ headerView;
    void /* unknown type, empty encoding */ graphView;
    void /* unknown type, empty encoding */ edgeControlSection;
    void /* unknown type, empty encoding */ bandControl;
    void /* unknown type, empty encoding */ gainKnob;
    void /* unknown type, empty encoding */ $__lazy_storage_$_decimalFormatter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_wholeNumberFormatter;
    void /* unknown type, empty encoding */ curveFrame;
    void /* unknown type, empty encoding */ previousSize;
    void /* unknown type, empty encoding */ rightWidthConstraint;
    void /* unknown type, empty encoding */ bandWidthConstraint;
    void /* unknown type, empty encoding */ bandHeightConstraint;
    void /* unknown type, empty encoding */ frequencyData;
}

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)auParameterValueChangedWithNotification:(id)a0;

@end
