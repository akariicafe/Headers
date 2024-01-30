@class UIImageView, NTKColoringLabel, NSDate, NSNumber, NTKRichComplicationDialView;

@interface NTKTimerRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {
    NTKRichComplicationDialView *_backgroundDial;
    NTKRichComplicationDialView *_foregroundDial;
    UIImageView *_timerImageView;
    NTKColoringLabel *_timerLabel;
    NSDate *_timerDate;
    double _timerDuration;
    NSNumber *_updateToken;
    struct { long long numberTicks; struct CGSize { double width; double height; } tickSize; double dialDiameter; double timerLabelBottom; double timerLabelFontSize; double timerLabelMaxWidth; } _layoutConstants;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_resume;
- (void)_pause;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFamily:(long long)a0;
- (void)_applyPausedUpdate;
- (void)_updateDialProgress;
- (void)makeBackgroundTransparent;

@end
