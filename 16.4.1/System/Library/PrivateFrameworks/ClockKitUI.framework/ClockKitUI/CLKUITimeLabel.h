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

- (void)sizeToFit;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setTimeOffset:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (id)viewForLastBaselineLayout;
- (void)layoutSubviews;
- (id)viewForFirstBaselineLayout;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_enumerateUnderlyingLabelsWithBlock:(id /* block */)a0;
- (id)_newUnderlyingLabel:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1;
- (id)initWithTimeLabelOptions:(unsigned long long)a0 forDevice:(id)a1;
- (id)initWithTimeLabelOptions:(unsigned long long)a0 forDevice:(id)a1 clockTimer:(id)a2;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (void)setTimeFont:(id)a0 designatorFont:(id)a1;
- (void)timeFormatterTextDidChange:(id)a0;
- (void)_cancelAnimation;
- (void)_fadeTransitionLabels;
- (id)_newLabelManager;
- (void)_resizeIfNecessary;
- (void)_scaleTransitionLabels;
- (void)cleanupAfterStyleTransition;
- (id)identifyingInfoForTimeFormatter:(id)a0;
- (id)initWithTimeLabelOptions:(unsigned long long)a0;
- (id)labelManagerContentView;
- (void)prepareToTransitionToStyle:(id)a0;
- (void)setBlinkingPaused:(BOOL)a0;
- (void)setStyleTransitionFraction:(double)a0;
- (void)setThreeDigitFont:(id)a0 fourDigitFont:(id)a1 designatorFont:(id)a2;
- (struct CGSize { double x0; double x1; })styleTransitionCurrentSize;
- (struct CGSize { double x0; double x1; })styleTransitionEndSize;

@end
