@interface CoreAudioKit.AUDynamicsProcessorViewController : CoreAudioKit.AURealtimeDrawingBaseViewController {
    void /* unknown type, empty encoding */ headerView;
    void /* unknown type, empty encoding */ viewContainer;
    void /* unknown type, empty encoding */ graphView;
    void /* unknown type, empty encoding */ edgeControlSection;
    void /* unknown type, empty encoding */ inputLabel;
    void /* unknown type, empty encoding */ outputLabel;
    void /* unknown type, empty encoding */ meterLabel;
    void /* unknown type, empty encoding */ meter;
    void /* unknown type, empty encoding */ attackKnob;
    void /* unknown type, empty encoding */ releaseKnob;
    void /* unknown type, empty encoding */ gainKnob;
    void /* unknown type, empty encoding */ frequencyData;
    void /* unknown type, empty encoding */ curveFrame;
    void /* unknown type, empty encoding */ previousSize;
    void /* unknown type, empty encoding */ rightWidthConstraint;
}

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)auParameterValueChangedWithNotification:(id)a0;
- (void)graphControlTouchedWithNotification:(id)a0;
- (void)knobReleasedWithNotification:(id)a0;
- (void)knobTouchedWithNotification:(id)a0;
- (void)knobValueChangedWithNotification:(id)a0;

@end
