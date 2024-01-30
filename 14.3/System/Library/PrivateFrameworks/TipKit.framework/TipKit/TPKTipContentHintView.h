@class NSString, UIImageView, UIButton, UILayoutGuide, TPSMultilineButton, NSLayoutConstraint, NSMutableArray, UILabel;
@protocol TPKTipContentHintViewDelegate;

@interface TPKTipContentHintView : TPKContentView <UIGestureRecognizerDelegate> {
    BOOL __isAccessbilitySizeCategory;
}

@property (retain, nonatomic) NSMutableArray *axRequiredLayoutConstraints;
@property (retain, nonatomic) NSMutableArray *defaultRequiredLayoutConstraints;
@property (retain, nonatomic) UILayoutGuide *labelLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *iconImageViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *iconImageViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *labelLayoutGuideLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelToCloseButtonTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textLabelToCloseButtonTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textLabelTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *centerIconToLabelsConstraint;
@property (retain, nonatomic) NSLayoutConstraint *centerIconToContentAreaConstraint;
@property (retain, nonatomic) NSLayoutConstraint *iconImageViewTopAnchorConstraint;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) TPSMultilineButton *actionButton;
@property (weak, nonatomic) id<TPKTipContentHintViewDelegate> _tipContentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })iconImageSize;
+ (id)primaryLabelColor;
+ (id)secondaryLabelColor;
+ (id)secondaryLabelFontWithLanguage:(id)a0;

- (id)titleFont;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_contentSizeCategoryDidChange;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (struct CGSize { double x0; double x1; })iconImageSize;
- (void)updateFonts;
- (id)layoutIdentifier;
- (void)setPreferredMicaLayerSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)_setTipContentDelegate:(id)a0;
- (void)_accessibilitySizeCategoryDidChange;
- (void)_setPreferredTraitCollection:(id)a0;
- (id)_currentContentLanguage;
- (void)setPreferredIconImageTintColor:(id)a0;
- (id)_initWithContent:(id)a0 asPopover:(BOOL)a1 tipContentDelegate:(id)a2;
- (BOOL)wantsVibrantContent;
- (void)_hintTapped;
- (void)_closeTapped;
- (id)addVibrancyEffect:(id)a0 toView:(id)a1 parentView:(id)a2;
- (void)updateIconImageViewStatus;
- (void)_actionTapped;
- (void)updateAccessibilityContentCategory;
- (BOOL)_imageIsSymbol;
- (BOOL)shouldCenterIconImage;
- (void)updateLabelTrailingConstraints;
- (void)updateLabelConstraints;
- (BOOL)view:(id)a0 shouldReceiveTouch:(id)a1;

@end
