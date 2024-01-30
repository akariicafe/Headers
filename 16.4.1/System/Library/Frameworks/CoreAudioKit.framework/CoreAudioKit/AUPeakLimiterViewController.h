@class UIView, _TtC12CoreAudioKit18AULimiterGraphView, _TtC12CoreAudioKit21CAAdjustingHeaderView, NSNumberFormatter, _TtC12CoreAudioKit21AULimiterControlsView, NSMutableArray, _TtC12CoreAudioKit13AUKnobControl, NSLayoutConstraint;

@interface AUPeakLimiterViewController : AURealtimeDrawingBaseViewController {
    _TtC12CoreAudioKit21CAAdjustingHeaderView *headerView;
    _TtC12CoreAudioKit18AULimiterGraphView *graphView;
    _TtC12CoreAudioKit21AULimiterControlsView *controlsView;
    UIView *viewContainer;
    _TtC12CoreAudioKit13AUKnobControl *attackKnob;
    _TtC12CoreAudioKit13AUKnobControl *releaseKnob;
    _TtC12CoreAudioKit13AUKnobControl *gainKnob;
    NSNumberFormatter *wholeNumberFormatter;
    NSMutableArray *permanentConstraints;
    NSMutableArray *temporaryConstraints;
    struct CGSize { double width; double height; } previousSize;
    long long displayMode;
    NSLayoutConstraint *attackSpacer;
    NSLayoutConstraint *gainSpacer;
    unsigned int loopIndex;
    float maxPeak;
}

- (void)cleanup;
- (void)setupConstraints;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)prepareData;
- (void)priv_eventListener:(void *)a0 event:(const struct AudioUnitEvent { unsigned int x0; union { struct AudioUnitParameter { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; struct AudioUnitProperty { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; } x1; } *)a1 value:(float)a2;
- (void)configureViewFor:(id)a0;
- (void)doRealtimeDrawing;
- (void)knobReleased:(id)a0;
- (void)knobTouched:(id)a0;
- (void)knobValueChanged:(id)a0;
- (float)limitAmount:(unsigned int)a0;
- (id)nameFor:(unsigned int)a0;
- (void)registerParameters;
- (void)setWithParameter:(unsigned int)a0 value:(float)a1;
- (id)shortNameFor:(unsigned int)a0;
- (id)unitLabelFor:(unsigned int)a0;

@end
