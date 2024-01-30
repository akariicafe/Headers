@class UIFont, NSString, _UILegibilitySettings, NSDate, UIView, SBFLockScreenDateSubtitleView, SBUILegibilityLabel, CSProminentDisplayViewController, SBFLockScreenDateSubtitleDateView, BSUIVibrancyConfiguration, NSTimeZone, UIColor;

@interface SBFLockScreenDateView : UIView {
    SBUILegibilityLabel *_timeLabel;
    double _timeAlpha;
    double _subtitleAlpha;
    SBFLockScreenDateSubtitleDateView *_dateSubtitleView;
    UIView *_activeSubtitleView;
    NSTimeZone *_timeZone;
}

@property (retain, nonatomic) CSProminentDisplayViewController *prominentDisplayViewController;
@property (nonatomic) BOOL restrictsVibrancy;
@property (nonatomic, getter=isSubtitleHidden) BOOL subtitleHidden;
@property (nonatomic) BOOL useLandscapeTimeFontSize;
@property (nonatomic) BOOL useCompactDateFormat;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double timeLegibilityStrength;
@property (nonatomic) double subtitleLegibilityStrength;
@property (nonatomic) double alignmentPercent;
@property (nonatomic) double dateToTimeStretch;
@property (nonatomic) double maximumSubtitleWidth;
@property (copy, nonatomic) UIFont *customTimeFont;
@property (readonly, nonatomic) struct { double ascender; double descender; double bodyLeading; double capHeight; } customTimeMetrics;
@property (nonatomic) BOOL subtitleOnTop;
@property (copy, nonatomic) NSString *customTimeNumberingSystem;
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (readonly, nonatomic) double timeBaselineOffsetFromOrigin;
@property (readonly, nonatomic) double subtitleBaselineOffsetFromOrigin;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } restingFrame;
@property (readonly, nonatomic) double timeAlpha;
@property (readonly, nonatomic) double subtitleAlpha;
@property (retain, nonatomic) SBFLockScreenDateSubtitleView *customSubtitleView;
@property (retain, nonatomic) UIView *inlineComplicationView;

+ (double)defaultHeight;
+ (struct { double x0; double x1; double x2; double x3; })metricsForFont:(id)a0;
+ (id)timeFont;
+ (struct { double x0; double x1; double x2; double x3; })timeFontMetrics;

- (void)_setDate:(id)a0 inTimeZone:(id)a1;
- (void)setTimeAlpha:(double)a0 subtitleAlpha:(double)a1;
- (id)_timeLabel;
- (void)updateFormat;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_subtitleViewFrameForView:(id)a0 alignmentPercent:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })presentationExtentForAlignmentPercent:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })chargingVisualInformationTimeFrame;
- (void)_updateUsesCompactDateFormat;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_timeLabelInsetsForTimeString:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_timeLabelFrameForAlignmentPercent:(double)a0;
- (void)_layoutSubtitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLabelAlpha;
- (id)_effectiveTextColor;
- (void)_cacheCustomTimeMetrics;
- (void)_updateForNewFont;
- (void)layoutSubviews;
- (void)_setSubtitleAlpha:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })chargingVisualInformationTimeSubtitleFrame;
- (void)traitCollectionDidChange:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_cachedGlyphInsetsTimeFontForString:(id)a0;
- (void)_updateLabels;
- (void).cxx_destruct;
- (void)_updateActiveSubtitleView;

@end
