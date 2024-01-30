@class NSNumberFormatter, NSLayoutConstraint, _TtC12CoreAudioKit18CANBandEQGraphView, _TtC12CoreAudioKit24AUVerticalSegmentControl, UIView, _TtC12CoreAudioKit21CAAUNBandEQHeaderView, _TtC12CoreAudioKit13AUKnobControl;

@interface AURightEdgeControlsBaseViewController : AUAppleViewControllerBase <CoreAudioKit.CAAUViewParameterDataSource> {
    _TtC12CoreAudioKit21CAAUNBandEQHeaderView *headerView;
    _TtC12CoreAudioKit18CANBandEQGraphView *graphView;
    UIView *edgeControlSection;
    _TtC12CoreAudioKit24AUVerticalSegmentControl *bandControl;
    _TtC12CoreAudioKit13AUKnobControl *gainKnob;
    NSNumberFormatter *wholeNumberFormatter;
    NSNumberFormatter *decimalFormatter;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } curveFrame;
    struct CGSize { double width; double height; } previousSize;
    NSLayoutConstraint *rightWidthConstraint;
    NSLayoutConstraint *bandWidthConstraint;
    NSLayoutConstraint *bandHeightConstraint;
}

@property struct AudioUnitFrequencyResponseBin { double x0; double x1; } *frequencyData;

- (void)cleanup;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)prepareData;
- (void)auParameterValueChanged:(id)a0;
- (const struct CGPath { } *)curveIn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)maxValueFor:(unsigned int)a0;
- (float)minValueFor:(unsigned int)a0;
- (id)nameFor:(unsigned int)a0;
- (struct AudioUnitFrequencyResponseBin { double x0; double x1; } *)prepareDataForDrawing:(struct AudioUnitFrequencyResponseBin { double x0; double x1; } *)a0;
- (void)setWithParameter:(unsigned int)a0 value:(float)a1;
- (id)shortNameFor:(unsigned int)a0;
- (id)stringValuesFor:(unsigned int)a0;
- (id)unitLabelFor:(unsigned int)a0;
- (void)updateCurve:(BOOL)a0;
- (float)valueFor:(unsigned int)a0;
- (long long)widthTypeFor:(unsigned int)a0;

@end
