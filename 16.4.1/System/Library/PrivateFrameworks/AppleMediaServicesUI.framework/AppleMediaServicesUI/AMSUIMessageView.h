@class UIView, NSAttributedString, NSArray, UIColor, AMSUIPopoverShapeLayerView, UIImageView, AMSUICommonImageView, AMSDialogAction, AMSUICommonTextView, AMSUIMessageViewLayoutContext, UIScrollView;
@protocol AMSUIMessageViewDelegate;

@interface AMSUIMessageView : AMSUICommonView

@property (nonatomic) unsigned long long imageStyle;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIScrollView *containerView;
@property (retain, nonatomic) UIView *imageContainerView;
@property (retain, nonatomic) AMSUIMessageViewLayoutContext *layoutContext;
@property (retain, nonatomic) NSArray *separatorViews;
@property (retain, nonatomic) AMSUIPopoverShapeLayerView *maskShapeView;
@property (retain, nonatomic) UIView *accessoryView;
@property (retain, nonatomic) UIView *accessorySecondaryView;
@property (weak, nonatomic) id<AMSUIMessageViewDelegate> ams_delegate;
@property (retain, nonatomic) NSArray *footerButtonViews;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (readonly, nonatomic) AMSUICommonImageView *imageView;
@property (nonatomic) BOOL isSizing;
@property (retain, nonatomic) NSAttributedString *message;
@property (copy, nonatomic) UIColor *separatorColor;
@property (readonly, nonatomic) AMSUICommonTextView *textView;
@property (readonly, nonatomic) AMSDialogAction *bodyAction;
@property (retain, nonatomic) NSAttributedString *title;
@property (nonatomic) BOOL preLayoutImageView;

- (void)setNeedsLayout;
- (void)_setupDefaults;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithStyle:(unsigned long long)a0;
- (void)_setupImageView;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)_layoutHeightDependsOnWidth;
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
- (void)_setLocalOverrideTraitCollection:(id)a0;
- (void)_setupInitialLayout;
- (id)_makeSeparatorView;
- (double)_textViewParagraphSpacingBefore;
- (void)setMessage:(id)a0 withTraitCollection:(id)a1;
- (id)_defaultImageViewColor;
- (id)_defaultMessageColor;
- (id)_defaultMessageFont:(id)a0;
- (id)_defaultTitleColor;
- (id)_defaultTitleFont:(id)a0;
- (void)_endObservations;
- (void)_setAccessibility;
- (void)_setAccessibilityIdentifier;
- (void)_setBackground;
- (void)_setShadow;
- (void)_setTextAlignment;
- (void)_setTextViewText;
- (void)_setupImageViewDefault;
- (void)_startObservations;
- (void)_syncRectsFromContext;
- (void)removeBubbleArrowMaskView;
- (void)setAccessorySecondaryViewForDialogAction:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setAccessoryViewForDialogAction:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setBodyDialogAction:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setFooterForDialogActions:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setTitle:(id)a0 withTraitCollection:(id)a1;
- (void)setupBubbleArrowMaskView;

@end
