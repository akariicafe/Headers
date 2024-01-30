@class UIView, NSString, _UILegibilitySettings, UIImage, CSStatusTextViewController, UIImageView, UIButton, UILayoutGuide, CSModalButton, NSLayoutConstraint, UILabel, UIColor;
@protocol CSModalViewDelegate;

@interface CSModalView : CSCoverSheetViewBase <SBLockScreenModalView> {
    UIView *_centralGroupView;
    UILayoutGuide *_dateViewLayoutGuide;
    NSLayoutConstraint *_dateViewVerticalConstraint;
    NSLayoutConstraint *_centralGroupTopConstraint;
    NSLayoutConstraint *_centralGroupBottomConstraint;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
    NSString *_overrideFooterText;
    CSStatusTextViewController *_statusTextViewController;
    BOOL _needsTitleConstraints;
    BOOL _needsSubTitleConstraints;
    BOOL _needsSecondarySubTitleConstraints;
    BOOL _needsPrimaryActionConstraints;
    BOOL _needsSecondaryActionConstraints;
    BOOL _needsImageConstraints;
    BOOL _needsDetailViewConstraints;
}

@property (retain, nonatomic, getter=_titleLabel, setter=_setTitleLabel:) UILabel *titleLabel;
@property (retain, nonatomic, getter=_subtitleLabel, setter=_setSubtitleLabel:) UILabel *subtitleLabel;
@property (retain, nonatomic, getter=_secondarySubtitleLabel, setter=_setSecondarySubtitleLabel:) UILabel *secondarySubtitleLabel;
@property (retain, nonatomic, getter=_secondaryActionButton, setter=_setSecondaryActionButton:) UIButton *secondaryActionButton;
@property (retain, nonatomic, getter=_primaryActionButton, setter=_setPrimaryActionButton:) CSModalButton *primaryActionButton;
@property (retain, nonatomic, getter=_imageView, setter=_setImageView:) UIImageView *imageView;
@property (weak, nonatomic) id<CSModalViewDelegate> delegate;
@property (retain, nonatomic) UIView *detailView;
@property (nonatomic) BOOL wantsEnhancedSecondaryActionButton;
@property (nonatomic) BOOL showsDateView;
@property (nonatomic) BOOL showsStatusText;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) UIColor *titleTextColor;
@property (copy, nonatomic) NSString *subtitleText;
@property (copy, nonatomic) NSString *secondarySubtitleText;
@property (copy, nonatomic) NSString *primaryActionButtonText;
@property (retain, nonatomic) UIColor *primaryActionButtonBackgroundColor;
@property (copy, nonatomic) NSString *secondaryActionButtonText;
@property (copy, nonatomic) UIColor *secondaryActionButtonTextColor;
@property (copy, nonatomic) NSString *footerText;
@property (retain, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)_bottomBaselineOffsetForPortrait:(BOOL)a0;
+ (double)_modalViewBottomBaselineOffsetPortrait;

- (id)_subtitleFont;
- (id)_titleFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)hideTitleLabel:(BOOL)a0;
- (void)_buttonTapped:(id)a0;
- (id)secondaryActionButton;
- (void)_createAppropriateSecondaryActionButtonIfNecessary;
- (void)_createEnhancedSecondaryActionButtonIfNecessary;
- (void)_createPrimaryActionButtonIfNecessary;
- (void)_createSecondaryActionButtonIfNecessary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_dateTimeFrame;
- (id)_fontWithTextStyle:(id)a0 cappedToSize:(id)a1;
- (BOOL)_hasPortraitDimensions;
- (BOOL)_isPortraitForDelegate:(id)a0;
- (id)_labelWithNumberOfLines:(unsigned long long)a0 font:(id)a1;
- (void)_positionBottomElementWithLayoutAnchor:(id)a0 lessThanOrEqual:(BOOL)a1;
- (id)_preferredContentSizeCategoryCappedToSize:(id)a0;
- (id)_primaryActionFont;
- (BOOL)_replaceView:(id)a0 withNewView:(id)a1 inParentView:(id)a2;
- (id)_secondaryActionFont;
- (double)_timeLabelBaselineY;
- (double)_timeToSubtitleLabelBaselineDifferenceY;
- (void)hideSecondarySubtitleLabel:(BOOL)a0;
- (void)hideSubtitleLabel:(BOOL)a0;
- (void)setOverrideSecondarySubtitleFont:(id)a0;
- (void)setOverrideSecondarySubtitleTextColor:(id)a0;

@end
