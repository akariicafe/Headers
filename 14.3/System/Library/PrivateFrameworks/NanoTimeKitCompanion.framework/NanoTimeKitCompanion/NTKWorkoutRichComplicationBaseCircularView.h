@class NTKWorkoutRichComplicationCircularContentView;

@interface NTKWorkoutRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {
    NTKWorkoutRichComplicationCircularContentView *_richView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFamily:(long long)a0;
- (void)_applyPausedUpdate;
- (id)_workoutImageName;
- (id)_animatedImagesName;

@end
