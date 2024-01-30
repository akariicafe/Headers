@class _TtC12CoreAudioKit16CAAUEQHeaderView, _TtC12CoreAudioKit15CAAUEQGraphView, NSNumberFormatter, _TtC12CoreAudioKit14CAAUEQViewBase;

@interface AUEQViewControllerBase : AUAppleViewControllerBase <CoreAudioKit.CAAUViewParameterDataSource> {
    _TtC12CoreAudioKit16CAAUEQHeaderView *headerView;
    _TtC12CoreAudioKit15CAAUEQGraphView *graphView;
    _TtC12CoreAudioKit14CAAUEQViewBase *eqView;
    NSNumberFormatter *wholeNumberFormatter;
    NSNumberFormatter *decimalFormatter;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } curveFrame;
    long long displayMode;
    struct CGSize { double width; double height; } previousSize;
}

@property struct AudioUnitFrequencyResponseBin { double x0; double x1; } *frequencyData;
@property (nonatomic) unsigned int param1;
@property (nonatomic) unsigned int param2;
@property (nonatomic) unsigned int param3;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)cleanup;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareData;
- (id)nameFor:(unsigned int)a0;
- (id)shortNameFor:(unsigned int)a0;
- (id)unitLabelFor:(unsigned int)a0;
- (float)maxValueFor:(unsigned int)a0;
- (long long)widthTypeFor:(unsigned int)a0;
- (void)updateCurve:(BOOL)a0;
- (float)minValueFor:(unsigned int)a0;
- (float)valueFor:(unsigned int)a0;
- (void)auParameterValueChanged:(id)a0;
- (void)auGraphBeginGesture:(id)a0;
- (void)auGraphEndGesture:(id)a0;
- (struct AudioUnitFrequencyResponseBin { double x0; double x1; } *)prepareDataForDrawing:(struct AudioUnitFrequencyResponseBin { double x0; double x1; } *)a0;
- (void)priv_eventListener:(void *)a0 event:(const struct AudioUnitEvent { unsigned int x0; union { struct AudioUnitParameter { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; struct AudioUnitProperty { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; } x1; } *)a1 value:(float)a2;
- (const struct CGPath { } *)curveIn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setWithParameter:(unsigned int)a0 value:(float)a1;
- (void)handleBeginGesture:(unsigned int)a0;
- (void)handleEndGesture:(unsigned int)a0;

@end
