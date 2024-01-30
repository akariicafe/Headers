@class UIView, _TtC12CoreAudioKit21CAAdjustingHeaderView, _TtC12CoreAudioKit16AUDelayGraphView, UISegmentedControl, NSNumberFormatter, UIButton, _TtC12CoreAudioKit13AUKnobControl, NSLayoutConstraint;

@interface AUDelayViewController : AUAppleViewControllerBase <CoreAudioKit.CAAUViewParameterDataSource> {
    _TtC12CoreAudioKit21CAAdjustingHeaderView *headerView;
    UIView *edgeControlSection;
    _TtC12CoreAudioKit16AUDelayGraphView *graphView;
    UISegmentedControl *modeControl;
    NSNumberFormatter *decimalFormatter;
    NSNumberFormatter *timeFormatter;
    UIButton *zoomInButton;
    UIButton *zoomOutButton;
    _TtC12CoreAudioKit13AUKnobControl *mixKnob;
    _TtC12CoreAudioKit13AUKnobControl *cutoffKnob;
    NSLayoutConstraint *rightWidthConstraint;
    float zoomFactor;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)zoomIn:(id)a0;
- (void)zoomOut:(id)a0;
- (void)prepareData;
- (id)accessibilityValueFor:(unsigned int)a0;
- (void)endGestureNotificationForGraph:(id)a0;
- (void)priv_eventListener:(void *)a0 event:(const struct AudioUnitEvent { unsigned int x0; union { struct AudioUnitParameter { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; struct AudioUnitProperty { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; } x1; } *)a1 value:(float)a2;
- (void)auParameterValueChanged:(id)a0;
- (void)beginGestureNotificationForGraph:(id)a0;
- (void)knobReleased:(id)a0;
- (void)knobTouched:(id)a0;
- (void)knobValueChanged:(id)a0;
- (float)maxValueFor:(unsigned int)a0;
- (float)minValueFor:(unsigned int)a0;
- (void)modeControlChanged:(id)a0;
- (id)nameFor:(unsigned int)a0;
- (void)registerParameters;
- (void)setWithParameter:(unsigned int)a0 value:(float)a1;
- (id)shortNameFor:(unsigned int)a0;
- (id)unitLabelFor:(unsigned int)a0;
- (float)valueFor:(unsigned int)a0;

@end
