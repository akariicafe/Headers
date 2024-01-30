@class MKMultiPartAttributedString, _MKMultiPartLabelMetrics, NSString, UIFont, UIColor, UITextView, NSDictionary;

@interface MKMultiPartLabel : UIView {
    UITextView *_textView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousBounds;
    NSDictionary *_cachedTextAttributes;
    NSDictionary *_lastAppliedNonColorAttributes;
}

@property (retain, nonatomic) _MKMultiPartLabelMetrics *data;
@property (retain, nonatomic) MKMultiPartAttributedString *multiPartString;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long textAlignment;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } textInset;
@property (retain, nonatomic) UIColor *highlightedTextColor;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

+ (id)_formattedStringsCache;

- (id)viewForFirstBaselineLayout;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)viewForLastBaselineLayout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)setContentCompressionResistancePriority:(float)a0 forAxis:(long long)a1;
- (void)setContentHuggingPriority:(float)a0 forAxis:(long long)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_textAttributes;
- (void)layoutSubviews;
- (void)_updateStrings;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupTextView;
- (void)_updateColorsForCurrentState;
- (id)_attributedAdjustedMultiPartStringFromString:(id)a0;
- (void)_updateTextViewTextAndInvalidateLayout:(id)a0;
- (id)_addDefaultAttributesToAttributedString:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
