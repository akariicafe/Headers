@class NSString, MFHeaderLabelView, UIView;

@interface MFComposeHeaderView : UIView {
    id _delegate;
    UIView *_separator;
    UIView *_highlightBackgroundView;
}

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *navTitle;
@property (readonly, nonatomic) MFHeaderLabelView *labelView;
@property (nonatomic) BOOL showsHighlightWhenTouched;

+ (double)separatorHeight;
+ (id)defaultFont;
+ (double)preferredHeight;
+ (double)_labelTopPaddingSpecification;
+ (id)defaultSeparatorColor;

- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_automationID;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)_baseAttributes;
- (id)label;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentRect;
- (void).cxx_destruct;
- (id)labelColor;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleLabelBaselineAlignmentRectForLabel:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)_canBecomeFirstResponder;
- (void)setLabel:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_recipientViewEdgeInsets;
- (double)labelTopPadding;
- (BOOL)_shouldEmbedLabelInTextView;
- (void)handleTouchesEnded;
- (id)_highlightedBackgroundView;
- (void)refreshPreferredContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_exclusionRectForView:(id)a0 alongEdge:(unsigned long long)a1;

@end
