@class NSLayoutXAxisAnchor, NSString, NSArray, SGTappableTextView, NSAttributedString, UIImageView, UIButton, NSLayoutConstraint, UILabel;

@interface SGBanner : UIControl <SGTappableTextViewDelegate> {
    SGTappableTextView *_subtitleLabel;
    NSString *_action;
    BOOL _needsSubtitleUpdate;
    NSString *_subtitle;
    NSAttributedString *_attributedSubtitle;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UIImageView *_secondImageView;
    UIImageView *_firstImageView;
    UIImageView *_disclosureImageView;
    NSLayoutConstraint *_imageCenterYConstraint;
    NSLayoutConstraint *_verticalSpaceBetweenImagesConstraint;
    NSLayoutConstraint *_horisontalSpaceBetweenImagesConstraint;
    NSLayoutConstraint *_titleLeadingConstraint;
    NSLayoutConstraint *_titleBaselineConstraint;
    NSLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_closeButtonHorizontalPositionConstraint;
    NSLayoutConstraint *_closeButtonWidthConstraint;
    NSLayoutConstraint *_disclosureImageViewHorizontalPositionConstraint;
    long long _currentStyle;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSAttributedString *attributedSubtitle;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSArray *images;
@property (nonatomic) long long accessoryType;
@property (retain, nonatomic) NSLayoutXAxisAnchor *closeButtonCenterXAnchor;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } popoverSourceRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_titleFont;
+ (id)_disclosureChevronImage;
+ (id)_subtitleFont;
+ (id)_cancelImage;
+ (double)_interLabelBaselineDeltaConstant;
+ (double)_topMarginConstant;
+ (double)_imageCenterOffsetFromTitleBaselineConstant;

- (void)_updateFonts;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)_setupViews;
- (void)_updateBackground;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_titleColor;
- (id)_subtitleColor;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateCurrentAppearance;
- (void)tappableTextView:(id)a0 didTapRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_installLayoutConstraints;
- (void)_onAction:(id)a0;
- (void)_onDismiss:(id)a0;

@end
