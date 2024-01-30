@class NSDate, NSTimeZone, SBFLockScreenAlternateDateLabel;

@interface SBFLockScreenDateSubtitleDateView : SBFLockScreenDateSubtitleView {
    NSTimeZone *_timeZone;
}

@property (retain, nonatomic) SBFLockScreenAlternateDateLabel *alternateDateLabel;
@property (nonatomic) double alignmentPercent;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) BOOL useCompactDateFormat;

+ (id)dateTimeLunarDateFont;
+ (double)subtitleLabelToLunarDateLabelBaselineDifferenceY;
+ (double)scaledFontSize:(double)a0 withMaximumFontSizeCategory:(id)a1;
+ (struct { double x0; double x1; double x2; double x3; })dateTimeLunarDateFontMetrics;

- (void)_setDate:(id)a0 inTimeZone:(id)a1;
- (void)_setupAlternateDateLabel;
- (void)layoutSubviews;
- (id)initWithDate:(id)a0;
- (void)_updateDateLabelForCompact;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alternateDateLabelFrame;
- (void)setLegibilitySettings:(id)a0;
- (void)setStrength:(double)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (double)_lunarDateLabelYOffsetFromDateLabel;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })subtitleLabelFrame;
- (void)_overlayCalendarDidChange;

@end
