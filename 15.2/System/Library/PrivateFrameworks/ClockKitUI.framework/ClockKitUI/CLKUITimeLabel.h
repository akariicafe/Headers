@class CLKUITimeLabelStyle, CLKTimeFormatter, NSString, UIFont, UIColor, CLKDevice, NSAttributedString;
@protocol _CLKUITimeLabelManager;

@interface CLKUITimeLabel : UIView <CLKTimeFormatterObserver, CLKTimeFormatterDelegate, CLKUILabel> {
    id<_CLKUITimeLabelManager> _labelManager;
    BOOL _styleTransitioning;
    double _styleTransitionFraction;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _styleTransitionEndFrame;
    CLKUITimeLabelStyle *_fromStyle;
    id<_CLKUITimeLabelManager> _fromLabelManager;
    double _fadeStart;
    double _fadeEnd;
    BOOL _ignoresWindowPauseReason;
    NSString *_timeText;
}

@property (copy, nonatomic) CLKUITimeLabelStyle *style;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) CLKTimeFormatter *timeFormatter;
@property (nonatomic) BOOL showsDesignator;
@property (nonatomic) BOOL paused;
@property (nonatomic) double maxWidth;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicSize;
@property (copy, nonatomic) id /* block */ didResizeHandler;
@property (nonatomic) BOOL showSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (readonly, nonatomic) double _lastLineBaseline;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } opticalInsets;

+ (id)labelWithOptions:(unsigned long long)a0;
+ (id)labelWithOptions:(unsigned long long)a0 forDevice:(id)a1;

- (id)viewForFirstBaselineLayout;
- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)setTimeOffset:(double)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)didMoveToWindow;
- (void)sizeToFit;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1;
- (void)setTimeFont:(id)a0 designatorFont:(id)a1;
- (id)initWithTimeLabelOptions:(unsigned long long)a0 forDevice:(id)a1 clockTimer:(id)a2;
- (void)timeFormatterTextDidChange:(id)a0;
- (id)initWithTimeLabelOptions:(unsigned long long)a0 forDevice:(id)a1;
- (id)_newUnderlyingLabel:(BOOL)a0;
- (void)_enumerateUnderlyingLabelsWithBlock:(id /* block */)a0;
- (id)identifyingInfoForTimeFormatter:(id)a0;
- (id)_newLabelManager;
- (void)_resizeIfNecessary;
- (void)setBlinkingPaused:(BOOL)a0;
- (void)_cancelAnimation;
- (void)setThreeDigitFont:(id)a0 fourDigitFont:(id)a1 designatorFont:(id)a2;
- (void)cleanupAfterStyleTransition;
- (void)setStyleTransitionFraction:(double)a0;
- (void)_scaleTransitionLabels;
- (void)_fadeTransitionLabels;
- (id)initWithTimeLabelOptions:(unsigned long long)a0;
- (id)labelManagerContentView;
- (void)prepareToTransitionToStyle:(id)a0;
- (struct CGSize { double x0; double x1; })styleTransitionEndSize;
- (struct CGSize { double x0; double x1; })styleTransitionCurrentSize;

@end
