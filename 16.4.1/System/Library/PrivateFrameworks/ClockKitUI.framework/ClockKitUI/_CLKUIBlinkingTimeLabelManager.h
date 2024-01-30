@class UIColor, NSString, CLKTimeFormatter, _CLKUIBasicTimeLabelManager, UIView, UILabel, CLKClockTimerToken;

@interface _CLKUIBlinkingTimeLabelManager : UIView <_CLKUITimeLabelManager, CLKTimeFormatterObserver> {
    CLKTimeFormatter *_timeFormatter;
    _CLKUIBasicTimeLabelManager *_numbersLabelManager;
    _CLKUIBasicTimeLabelManager *_blinkerLabelManager;
    CLKClockTimerToken *_blinkTimerToken;
    BOOL _usesIsolatedBlinkerLabel;
    UILabel *_minutesBlinkerLabel;
    UILabel *_secondsBlinkerLabel;
}

@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicSize;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL animationsPaused;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } opticalInsets;
@property (nonatomic) BOOL showSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMaxWidth:(double)a0;
- (id)viewForLastBaselineLayout;
- (void)dealloc;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setStyle:(id)a0;
- (double)_lastLineBaseline;
- (void)updateTimeText;
- (void)setShowsDesignator:(BOOL)a0;
- (void)timeFormatterReportingLiveTimeDidChange:(id)a0;
- (void)_startBlinking;
- (void)_startOrStopBlinking;
- (void)_stopBlinking;
- (void)_updateBlinkerAlphaForSecondFraction:(double)a0;
- (id)effectiveAttributedText;
- (id)effectiveFont;
- (void)enumerateUnderlyingLabelsWithBlock:(id /* block */)a0;
- (id)initWithForDevice:(id)a0 timeFormatter:(id)a1 options:(unsigned long long)a2 labelFactory:(id /* block */)a3;
- (struct CGSize { double x0; double x1; })sizeThatFits;
- (void)sizeViewToFit;

@end
