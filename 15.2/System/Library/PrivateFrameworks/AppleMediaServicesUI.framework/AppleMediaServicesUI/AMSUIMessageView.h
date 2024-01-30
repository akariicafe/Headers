@class UIView, NSAttributedString, NSArray, AMSUIPopoverShapeLayerView, UIImageView, AMSUICommonImageView, AMSDialogAction, AMSUICommonTextView, AMSUIMessageViewLayoutContext, UIColor;

@interface AMSUIMessageView : AMSUICommonView

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AMSUIMessageViewLayoutContext *layoutContext;
@property (retain, nonatomic) NSArray *separatorViews;
@property (retain, nonatomic) AMSUIPopoverShapeLayerView *maskShapeView;
@property (retain, nonatomic) UIView *accessoryView;
@property (retain, nonatomic) NSArray *footerButtonViews;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (readonly, nonatomic) AMSUICommonImageView *imageView;
@property (retain, nonatomic) NSAttributedString *message;
@property (copy, nonatomic) UIColor *separatorColor;
@property (readonly, nonatomic) AMSUICommonTextView *textView;
@property (readonly, nonatomic) AMSDialogAction *bodyAction;
@property (retain, nonatomic) NSAttributedString *title;
@property (nonatomic) BOOL preLayoutImageView;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setupDefaults;
- (void)setNeedsLayout;
- (id)initWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_defaultTitleFont;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)_setupInitialLayout;
- (id)_makeSeparatorView;
- (void)setAccessoryViewForDialogAction:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setBodyDialogAction:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)_startObservations;
- (void)_endObservations;
- (void)setFooterForDialogActions:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)removeBubbleArrowMaskView;
- (void)setupBubbleArrowMaskView;
- (void)_setBackground;
- (void)_setTextAlignment;
- (void)_setAccessibility;
- (void)_setShadow;
- (id)_defaultMessageFont;
- (id)_defaultMessageColor;
- (void)_setTextViewText;
- (id)_defaultTitleColor;

@end
