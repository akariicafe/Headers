@class NSLayoutXAxisAnchor, NSString, NSArray, SGTappableTextView, NSAttributedString, UIImageView, SGSuggestionStore, UIButton, NSLayoutConstraint, UILabel;
@protocol SGSuggestion, SGSuggestionDelegate;

@interface SGBanner : UIControl <SGTappableTextViewDelegate, SGBannerProtocol> {
    SGTappableTextView *_subtitleLabel;
    NSString *_actionTitle;
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
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSArray *images;
@property (nonatomic) long long accessoryType;
@property (retain, nonatomic) NSLayoutXAxisAnchor *closeButtonCenterXAnchor;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } popoverSourceRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id<SGSuggestion> suggestion;
@property (weak, nonatomic) id<SGSuggestionDelegate> delegate;
@property (copy, nonatomic) SGSuggestionStore *suggestionStore;
@property (nonatomic) long long actionButtonType;

+ (id)_subtitleFont;
+ (id)_titleFont;
+ (id)_disclosureChevronImage;
+ (id)_cancelImage;
+ (double)_interLabelBaselineDeltaConstant;
+ (double)_topMarginConstant;
+ (double)_imageCenterOffsetFromTitleBaselineConstant;

- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)_updateBackground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_setupViews;
- (id)_titleColor;
- (void)_updateFonts;
- (id)_subtitleColor;
- (void)_updateCurrentAppearance;
- (void)tappableTextView:(id)a0 didTapRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_installLayoutConstraints;
- (void)_onAction:(id)a0;
- (void)_onDismiss:(id)a0;

@end
