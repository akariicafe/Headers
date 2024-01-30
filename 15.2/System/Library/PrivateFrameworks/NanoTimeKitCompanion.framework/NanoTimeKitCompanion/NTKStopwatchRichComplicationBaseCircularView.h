@class NSString, UIImageView, NTKColoringLabel, NSNumber, NTKRichComplicationDialView;
@protocol CLKMonochromeFilterProvider;

@interface NTKStopwatchRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView <CLKMonochromeComplicationView> {
    UIImageView *_stopwatchImageView;
    NTKColoringLabel *_timeLabel;
    NTKRichComplicationDialView *_frontDial;
    NTKRichComplicationDialView *_backDial;
    NSNumber *_updateToken;
    struct { double stopwatchImageConfigPointSize; double timeLabelFontSize; double timeLabelMaxWidth; double timeLabelBottom; double dialDiameter; struct CGSize { double width; double height; } largeTickSize; struct CGSize { double width; double height; } smallTickSize; } _layoutConstants;
}

@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFamily:(long long)a0;
- (void)_editingDidEnd;
- (void)_applyPausedUpdate;
- (void)makeBackgroundTransparent;
- (void)_updateDialProgress;
- (double)_stopwatchCurrentTime;

@end
