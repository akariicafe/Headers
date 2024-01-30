@class UIView, CLKTimeFormatter, NSString, CLKUITimeLabelStyle, CLKDevice, NSAttributedString, UILabel, UIColor;

@interface _CLKUIBasicTimeLabelManager : NSObject <_CLKUITimeLabelManager> {
    CLKDevice *_device;
    UILabel *_label;
    CLKTimeFormatter *_timeFormatter;
    NSString *_timeText;
    CLKUITimeLabelStyle *_style;
    double _maxWidth;
    NSAttributedString *_correctAttributedText;
    BOOL _showsDesignator;
    BOOL _showSubstringToSeparator;
    BOOL _showSubstringFromSeparator;
    BOOL _hideMinutesIfZero;
    BOOL _primary;
    struct CGSize { double width; double height; } _cachedIntrinsicSize;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _cachedOpticalEdgeInsets;
    BOOL _cachedOpticalEdgeInsetsIsValid;
    UIColor *_textColor;
    NSAttributedString *_minutesBlinkerAttributedText;
    NSAttributedString *_secondsBlinkerAttributedText;
    struct _NSRange { unsigned long long location; unsigned long long length; } _minutesBlinkerRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _secondsBlinkerRange;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _boundingRectOfMinutesBlinkerAttributedText;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _boundingRectOfSecondsBlinkerAttributedText;
}

@property (nonatomic) BOOL showsBlinker;
@property (nonatomic) BOOL showsNumbers;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicSize;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL animationsPaused;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } opticalInsets;
@property (nonatomic) BOOL showSeconds;

- (void)setMaxWidth:(double)a0;
- (id)viewForLastBaselineLayout;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setStyle:(id)a0;
- (void)_updateAttributedText;
- (double)_lastLineBaseline;
- (void)updateTimeText;
- (void)setShowsDesignator:(BOOL)a0;
- (id)secondsDesignatorAttributedText;
- (id)minutesDesignatorAttributedText;
- (id)_attributedTextShowingBlinker:(BOOL)a0 numbers:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundingRectOfBlinkerAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundingRectOfMinutesBlinker;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundingRectOfSecondsBlinker;
- (id)_initForDevice:(id)a0 primary:(BOOL)a1 withTimeFormatter:(id)a2 options:(unsigned long long)a3 labelFactory:(id /* block */)a4;
- (id)effectiveAttributedText;
- (id)effectiveFont;
- (void)enumerateUnderlyingLabelsWithBlock:(id /* block */)a0;
- (id)initWithForDevice:(id)a0 timeFormatter:(id)a1 options:(unsigned long long)a2 labelFactory:(id /* block */)a3;
- (struct CGSize { double x0; double x1; })sizeThatFits;
- (void)sizeViewToFit;

@end
