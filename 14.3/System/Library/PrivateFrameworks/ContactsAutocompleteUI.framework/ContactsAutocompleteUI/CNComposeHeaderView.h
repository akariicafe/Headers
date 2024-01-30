@class UIView, NSString, CNComposeHeaderLabelView;
@protocol CNComposeHeaderViewDelegate;

@interface CNComposeHeaderView : UIView

@property (retain, nonatomic) CNComposeHeaderLabelView *labelView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIView *highlightedBackgroundView;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *navTitle;
@property (nonatomic) BOOL showsHighlightWhenTouched;
@property (weak, nonatomic) id<CNComposeHeaderViewDelegate> delegate;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } separatorDirectionalEdgeInsets;

+ (double)preferredHeight;
+ (double)separatorHeight;
+ (double)_labelTopPaddingSpecification;
+ (id)defaultSeparatorColor;
+ (id)defaultFont;

- (void)layoutMarginsDidChange;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)_automationID;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)_baseAttributes;
- (id)labelColor;
- (void)setLabel:(id)a0;
- (BOOL)_canBecomeFirstResponder;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_recipientViewEdgeInsets;
- (double)labelTopPadding;
- (BOOL)_shouldEmbedLabelInTextView;
- (void)handleTouchesEnded;
- (id)_highlightedBackgroundView;
- (void)refreshPreferredContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_exclusionRectForView:(id)a0 alongEdge:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentRect;
- (id)label;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleLabelBaselineAlignmentRectForLabel:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
