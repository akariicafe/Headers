@class _TtC12CoreAudioKit17AUVerticalTabView, _TtC12CoreAudioKit16AUDistortionView, _TtC12CoreAudioKit21CAAdjustingHeaderView;

@interface AUDistortionViewController : AUAppleViewControllerBase <CoreAudioKit.CAAUViewParameterDataSource> {
    _TtC12CoreAudioKit21CAAdjustingHeaderView *headerView;
    _TtC12CoreAudioKit17AUVerticalTabView *tabView;
    _TtC12CoreAudioKit16AUDistortionView *distortionView;
}

- (void)cleanup;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)layoutChanged:(id)a0;
- (void)prepareData;
- (void)priv_eventListener:(void *)a0 event:(const struct AudioUnitEvent { unsigned int x0; union { struct AudioUnitParameter { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; struct AudioUnitProperty { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; } x1; } *)a1 value:(float)a2;
- (void)beginGestureNotification:(id)a0;
- (const struct CGPath { } *)curveIn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endGestureNotification:(id)a0;
- (id)imageForTabIndex:(long long)a0;
- (float)maxValueFor:(unsigned int)a0;
- (float)minValueFor:(unsigned int)a0;
- (id)nameFor:(unsigned int)a0;
- (void)registerParameters;
- (void)setWithParameter:(unsigned int)a0 value:(float)a1;
- (id)shortNameFor:(unsigned int)a0;
- (void)tabSelectionChanged:(id)a0;
- (id)unitLabelFor:(unsigned int)a0;
- (float)valueFor:(unsigned int)a0;

@end
