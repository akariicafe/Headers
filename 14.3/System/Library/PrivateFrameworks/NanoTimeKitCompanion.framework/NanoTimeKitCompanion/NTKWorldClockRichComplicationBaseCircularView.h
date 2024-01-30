@class UIColor, NTKWorldClockRichComplicationHandsBaseView, WorldClockCity, CLKClockTimerToken, UILabel, NTKRichComplicationDialView;

@interface NTKWorldClockRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {
    struct { double cityNameFontSize; double cityNameBaselineOffsetNorthSide; double cityNameBaselineOffsetSouthSide; double dialDiameter; struct CGSize { double width; double height; } majorTickSize; struct CGSize { double width; double height; } minorTickSize; } _layoutConstants;
    NTKRichComplicationDialView *_dialView;
    UILabel *_cityNameLabel;
    NTKWorldClockRichComplicationHandsBaseView *_handsView;
    WorldClockCity *_city;
    CLKClockTimerToken *_clockTimerToken;
    BOOL _positionLabelNorthSide;
}

@property (retain, nonatomic) UIColor *daytimeBackgroundColor;
@property (retain, nonatomic) UIColor *daytimeHandsColor;
@property (retain, nonatomic) UIColor *daytimeHandsDotColor;
@property (retain, nonatomic) UIColor *nighttimeBackgroundColor;
@property (retain, nonatomic) UIColor *nighttimeHandsColor;
@property (retain, nonatomic) UIColor *nighttimeHandsDotColor;

- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateUI;
- (void)layoutSubviews;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFamily:(long long)a0;
- (void)_applyPausedUpdate;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (long long)tritiumUpdateMode;
- (BOOL)_shouldAnimateWithTemplateUpdateReason:(long long)a0;
- (void)makeBackgroundTransparent;
- (BOOL)_shouldUseDaytimeColoring;

@end
