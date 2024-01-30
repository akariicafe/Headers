@class UIColor, NSTimeZone, SBFLockScreenDateSubtitleView, SBUILegibilityLabel, NSDate, SBFLockScreenDateSubtitleDateView, _UILegibilitySettings;

@interface SBFLockScreenDateView : UIView {
    SBUILegibilityLabel *_timeLabel;
    double _timeAlpha;
    double _subtitleAlpha;
    SBFLockScreenDateSubtitleDateView *_dateSubtitleView;
    NSTimeZone *_timeZone;
}

@property (nonatomic, getter=isSubtitleHidden) BOOL subtitleHidden;
@property (nonatomic) BOOL useCompactDateFormat;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double timeLegibilityStrength;
@property (nonatomic) double subtitleLegibilityStrength;
@property (nonatomic) double alignmentPercent;
@property (nonatomic) double dateToTimeStretch;
@property (nonatomic) double maximumSubtitleWidth;
@property (readonly, nonatomic) double timeBaselineOffsetFromOrigin;
@property (readonly, nonatomic) double subtitleBaselineOffsetFromOrigin;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } restingFrame;
@property (readonly, nonatomic) double contentAlpha;
@property (retain, nonatomic) SBFLockScreenDateSubtitleView *customSubtitleView;

+ (struct { double x0; double x1; double x2; double x3; })timeFontMetrics;
+ (id)timeFont;
+ (double)defaultHeight;

- (void)_setDate:(id)a0 inTimeZone:(id)a1;
- (void)layoutSubviews;
- (id)_timeLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })chargingVisualInformationTimeSubtitleFrame;
- (void)_updateLabels;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })presentationExtentForAlignmentPercent:(double)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_cachedGlyphInsetsTimeFontForString:(id)a0;
- (void)_updateUsesCompactDateFormat;
- (void)_updateLabelAlpha;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })chargingVisualInformationTimeFrame;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_timeLabelFrameForAlignmentPercent:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_subtitleViewFrameForView:(id)a0 alignmentPercent:(double)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateFormat;
- (void)setContentAlpha:(double)a0 withSubtitleVisible:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_timeLabelInsetsForTimeString:(id)a0;
- (void)_setSubtitleAlpha:(double)a0;

@end
