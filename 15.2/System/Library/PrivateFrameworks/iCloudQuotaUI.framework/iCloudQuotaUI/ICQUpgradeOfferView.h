@class UIFont, UILabel, ICQLink, _ICQUpgradeOfferPageSpecification, UIVisualEffectView, UILayoutGuide, UIButton, UIView, UIColor, _ICQTextView, UIScrollView, NSString, UIActivityIndicatorView, NSArray, UIImageView;
@protocol ICQPageDelegate;

@interface ICQUpgradeOfferView : ICQPageView <UITextViewDelegate, UIScrollViewDelegate> {
    _ICQUpgradeOfferPageSpecification *_upgradeOfferPageSpecification;
}

@property (readonly, nonatomic) ICQLink *purchaseLink;
@property (readonly, nonatomic) ICQLink *purchase2Link;
@property (readonly, nonatomic) ICQLink *bottomLink;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *headerView;
@property (readonly, nonatomic) UIView *footerView;
@property (readonly, nonatomic) UIView *trayView;
@property (readonly, nonatomic) UIVisualEffectView *blurBackdrop;
@property (readonly, nonatomic) UILayoutGuide *scrollVisibleLayoutGuide;
@property (readonly, nonatomic) UILayoutGuide *aboveSpinnerLayoutGuide;
@property (readonly, nonatomic) UILayoutGuide *belowSpinnerLayoutGuide;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (readonly, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) UIFont *messageFont;
@property (readonly, nonatomic) UIFont *purchaseButtonFont;
@property (readonly, nonatomic) UIFont *linkButtonFont;
@property (readonly, nonatomic) UIFont *fineprintFont;
@property (readonly, nonatomic) UIColor *fineprintColor;
@property (retain, nonatomic) _ICQUpgradeOfferPageSpecification *upgradeOfferPageSpecification;
@property (copy, nonatomic) UIColor *buttonTintColor;
@property (nonatomic) long long upgradeMode;
@property (weak, nonatomic) id<ICQPageDelegate> delegate;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) _ICQTextView *messageView;
@property (retain, nonatomic) _ICQTextView *fineprintView;
@property (retain, nonatomic) UIButton *purchaseButton;
@property (retain, nonatomic) UIButton *purchase2Button;
@property (retain, nonatomic) UIButton *bottomButton;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)messageAttributes;
- (void)layoutSubviews;
- (void)_updateTrayVisibility;
- (id)_buttons;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)scrollViewDidScroll:(id)a0;
- (id)messageTextColor;
- (id)messageParagraphStyle;
- (id)horizontalConstraintsForView:(id)a0 margin:(double)a1;
- (long long)_styleOfView:(id)a0;
- (id)_makePurchaseButton;
- (void)purchaseButtonTapped:(id)a0;
- (id)_makeLinkButton;
- (void)purchase2ButtonTapped:(id)a0;
- (void)bottomButtonTapped:(id)a0;
- (void)_setButtonTintColor:(id)a0;
- (id)defaultButtonColor;
- (void)_setButton:(id)a0 backgroundColor:(id)a1;
- (void)_setLinkTextColor:(id)a0;
- (id)fineprintParagraphStyle;
- (id)_imageForGenericCloud;
- (id)_imageForBundleIdentifier:(id)a0;
- (id)fineprintAttributes;
- (id)_constraintsForView:(id)a0 equalToView:(id)a1;
- (double)_marginForButton:(id)a0;
- (id)_anchorForLowerView:(id)a0;
- (id)_anchorForUpperView:(id)a0;
- (double)_spacingFromUpperView:(id)a0 toLowerView:(id)a1;
- (void)flashScrollIndicatorsIfNeeded;

@end
