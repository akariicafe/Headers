@class NSString, UILabel, UIView, CNComposeHeaderLabelView;
@protocol CNComposeHeaderViewDelegate;

@interface CNComposeHeaderView : UIView

@property (weak, nonatomic) id<CNComposeHeaderViewDelegate> internalDelegate;
@property (retain, nonatomic) CNComposeHeaderLabelView *labelView;
@property (retain, nonatomic) UILabel *composeFieldInfoLabel;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIView *highlightedBackgroundView;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *navTitle;
@property (nonatomic) BOOL showsHighlightWhenTouched;
@property (weak, nonatomic) id<CNComposeHeaderViewDelegate> delegate;
@property (copy, nonatomic) NSString *composeFieldInfoText;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } separatorDirectionalEdgeInsets;

+ (double)separatorHeight;
+ (id)defaultFont;
+ (double)preferredHeight;
+ (double)_labelTopPaddingSpecification;
+ (id)defaultSeparatorColor;
+ (id)supplimentalMessageFont;

- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_automationID;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
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
- (void)createComposeFieldInfoLabelIfNeeded;
- (void)layoutComposeFieldInfoLabelWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 labelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_notifyDelegateOfSizeChange;
- (double)labelTopPadding;
- (BOOL)_shouldEmbedLabelInTextView;
- (id)headerViewDelegates;
- (void)handleTouchesEnded;
- (double)_additionalContentHeight;
- (id)_highlightedBackgroundView;
- (void)refreshPreferredContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_exclusionRectForView:(id)a0 alongEdge:(unsigned long long)a1;

@end
