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

+ (double)preferredHeight;
+ (id)defaultFont;
+ (double)separatorHeight;
+ (double)_labelTopPaddingSpecification;
+ (id)defaultSeparatorColor;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)_automationID;
- (BOOL)_canBecomeFirstResponder;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (void)layoutMarginsDidChange;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)label;
- (void)setLabel:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentRect;
- (id)labelColor;
- (id)_baseAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleLabelBaselineAlignmentRectForLabel:(id)a0;
- (double)labelTopPadding;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_exclusionRectForView:(id)a0 alongEdge:(unsigned long long)a1;
- (id)_highlightedBackgroundView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_recipientViewEdgeInsets;
- (BOOL)_shouldEmbedLabelInTextView;
- (void)handleTouchesEnded;
- (void)refreshPreferredContentSize;

@end
