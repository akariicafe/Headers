@class _TtC12CoreAudioKit17CACompressionView, _TtC12CoreAudioKit18AULabeledMeterView, _TtC12CoreAudioKit13AUKnobControl, NSLayoutConstraint, UIView, _TtC12CoreAudioKit21CAAdjustingHeaderView, UILabel;

@interface AUDynamicsProcessorViewController : AURealtimeDrawingBaseViewController <CoreAudioKit.CAAUViewParameterDataSource, CoreAudioKit.AUCompressionParameterDataSource> {
    _TtC12CoreAudioKit21CAAdjustingHeaderView *headerView;
    UIView *viewContainer;
    _TtC12CoreAudioKit17CACompressionView *graphView;
    UIView *edgeControlSection;
    UILabel *inputLabel;
    UILabel *outputLabel;
    UILabel *meterLabel;
    _TtC12CoreAudioKit18AULabeledMeterView *meter;
    _TtC12CoreAudioKit13AUKnobControl *attackKnob;
    _TtC12CoreAudioKit13AUKnobControl *releaseKnob;
    _TtC12CoreAudioKit13AUKnobControl *gainKnob;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } curveFrame;
    struct CGSize { double width; double height; } previousSize;
    NSLayoutConstraint *rightWidthConstraint;
}

@property struct AudioUnitFrequencyResponseBin { double x0; double x1; } *frequencyData;

- (void)cleanup;
- (void)dealloc;
- (void)viewDidLoad;
- (id)add:(id)a0 to:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)addConstraints;
- (void)prepareData;
- (void)priv_eventListener:(void *)a0 event:(const struct AudioUnitEvent { unsigned int x0; union { struct AudioUnitParameter { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; struct AudioUnitProperty { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; } x1; } *)a1 value:(float)a2;
- (void)auParameterValueChanged:(id)a0;
- (id)colorWithParameter:(unsigned int)a0;
- (void)doRealtimeDrawing;
- (void)graphControlReleased:(id)a0;
- (void)graphControlTouched:(id)a0;
- (void)knobReleased:(id)a0;
- (void)knobTouched:(id)a0;
- (void)knobValueChanged:(id)a0;
- (id)multiply:(id)a0 multiplier:(double)a1;
- (id)nameFor:(unsigned int)a0;
- (struct AudioUnitFrequencyResponseBin { double x0; double x1; } *)prepareDataForDrawing:(struct AudioUnitFrequencyResponseBin { double x0; double x1; } *)a0;
- (void)registerParameters;
- (void)setWithParameter:(unsigned int)a0 value:(float)a1;
- (id)shortNameFor:(unsigned int)a0;
- (id)unitLabelFor:(unsigned int)a0;
- (void)updateCurve:(BOOL)a0;

@end
