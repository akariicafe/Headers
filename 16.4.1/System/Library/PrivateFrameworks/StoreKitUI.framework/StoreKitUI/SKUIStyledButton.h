@class SKUIItemOfferButton, NSString, SKUIShapeView, UIImageView, SKUIButtonBorderStyle, SKUIImageView, SKUIAttributedStringView, SKUIAttributedStringLayout;
@protocol SKUIItemOfferButtonDelegate;

@interface SKUIStyledButton : UIControl <SKUIViewElementOfferButton> {
    SKUIAttributedStringView *_attributedStringView;
    SKUIShapeView *_borderView;
    BOOL _didInitialHighlightForTouch;
    UIImageView *_disclosureImageView;
    SKUIItemOfferButton *_itemOfferButton;
}

@property (readonly, nonatomic) double baselineOffset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } bigHitInsets;
@property (readonly, nonatomic) double firstBaselineOffset;
@property (copy, nonatomic) SKUIButtonBorderStyle *borderStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } buttonPadding;
@property (nonatomic) long long buttonType;
@property (nonatomic) double imageTextPaddingInterior;
@property (readonly, nonatomic) SKUIImageView *imageView;
@property (nonatomic) double imageYAdjustment;
@property (retain, nonatomic) SKUIAttributedStringLayout *titleLayout;
@property (nonatomic) BOOL useBigHitTarget;
@property (nonatomic) BOOL usesTintColor;
@property (readonly, nonatomic, getter=isUsingItemOfferAppearance) BOOL usingItemOfferAppearance;
@property (weak, nonatomic) id<SKUIItemOfferButtonDelegate> itemOfferDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)buttonTypeForElement:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeForTextSize:(struct CGSize { double x0; double x1; })a0 buttonType:(long long)a1;
+ (struct CGSize { double x0; double x1; })sizeForTextSize:(struct CGSize { double x0; double x1; })a0 buttonType:(long long)a1 borderStyle:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeForTextSize:(struct CGSize { double x0; double x1; })a0 buttonType:(long long)a1 borderStyle:(id)a2 interiorPadding:(double)a3;
+ (BOOL)usesItemOfferAppearanceForButtonType:(long long)a0 itemState:(id)a1;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)_textColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)tintColorDidChange;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (id)_borderColor;
- (id)_textBackgroundColor;
- (id)_borderFillColor;
- (void)_cancelConfirmationAction:(id)a0;
- (void)_itemOfferButtonAction:(id)a0;
- (void)_reloadDisclosureImage;
- (void)_reloadImageView;
- (void)_reloadOverrideTextColor;
- (void)_showConfirmationAction:(id)a0;
- (BOOL)_usesTintColor;
- (void)setTitleLayout:(id)a0 forceRefresh:(BOOL)a1;
- (BOOL)setValuesUsingBuyButtonDescriptor:(id)a0 itemState:(id)a1 clientContext:(id)a2 animated:(BOOL)a3;

@end
