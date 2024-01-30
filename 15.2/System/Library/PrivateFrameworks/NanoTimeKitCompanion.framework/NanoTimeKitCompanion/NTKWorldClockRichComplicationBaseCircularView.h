@class UIColor, NTKWorldClockGraphicCircularView;

@interface NTKWorldClockRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {
    NTKWorldClockGraphicCircularView *_worldClockCircularView;
}

@property (retain, nonatomic) UIColor *daytimeBackgroundColor;
@property (retain, nonatomic) UIColor *daytimeHandsColor;
@property (retain, nonatomic) UIColor *daytimeHandsDotColor;
@property (retain, nonatomic) UIColor *nighttimeBackgroundColor;
@property (retain, nonatomic) UIColor *nighttimeHandsColor;
@property (retain, nonatomic) UIColor *nighttimeHandsDotColor;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (void)dealloc;
- (void)setFilterProvider:(id)a0;
- (long long)tritiumUpdateMode;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFamily:(long long)a0;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (BOOL)_shouldAnimateWithTemplateUpdateReason:(long long)a0;
- (void)_applyPaused;
- (void)makeBackgroundTransparent;

@end
