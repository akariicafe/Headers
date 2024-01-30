@class NTKWorkoutRichComplicationCircularContentView;

@interface NTKWorkoutRichComplicationCornerView : NTKRichComplicationCornerBaseCircularView {
    NTKWorkoutRichComplicationCircularContentView *_richView;
}

- (void).cxx_destruct;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_applyPausedUpdate;
- (id)_circularView;

@end
