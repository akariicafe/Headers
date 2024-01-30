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

+ (double)preferredHeight;
+ (id)defaultFont;
+ (double)separatorHeight;
+ (double)_labelTopPaddingSpecification;
+ (id)defaultSeparatorColor;
+ (id)supplimentalMessageFont;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)_automationID;
- (BOOL)_canBecomeFirstResponder;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
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
- (void)_notifyDelegateOfSizeChange;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_recipientViewEdgeInsets;
- (BOOL)_shouldEmbedLabelInTextView;
- (void)handleTouchesEnded;
- (void)refreshPreferredContentSize;
- (double)_additionalContentHeight;
- (void)createComposeFieldInfoLabelIfNeeded;
- (id)headerViewDelegates;
- (void)layoutComposeFieldInfoLabelWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 labelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
