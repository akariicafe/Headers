@class NSString, UIImageView, CLKUIColoringLabel, NSNumber, NTKRichComplicationDialView;
@protocol CLKMonochromeFilterProvider;

@interface NTKStopwatchRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView <CLKMonochromeComplicationView> {
    UIImageView *_stopwatchImageView;
    CLKUIColoringLabel *_timeLabel;
    NTKRichComplicationDialView *_frontDial;
    NTKRichComplicationDialView *_backDial;
    NSNumber *_updateToken;
    struct { double stopwatchImageConfigPointSize; double timeLabelFontSize; double timeLabelMaxWidth; double timeLabelBottom; double dialDiameter; struct CGSize { double width; double height; } largeTickSize; struct CGSize { double width; double height; } smallTickSize; } _layoutConstants;
    BOOL _showPlatter;
}

@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithFamily:(long long)a0;
- (void)_applyPausedUpdate;
- (long long)_backgroundFilterStyle;
- (void)_editingDidEnd;
- (long long)_foregroundFilterStyle;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (double)_stopwatchCurrentTime;
- (void)_updateDialProgress;
- (void)makeBackgroundTransparent;
- (BOOL)templateWantsPlatter;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
