@class UIKBTutorialModalDisplayStyling, NSString, NSArray, UIView, UIFont, UIButton, NSLayoutConstraint, UIVisualEffectView;

@interface UIKBTutorialModalDisplay : UIView

@property (retain, nonatomic) UIKBTutorialModalDisplayStyling *styling;
@property (retain, nonatomic) UIVisualEffectView *backgroundBlurView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSLayoutConstraint *containerViewTopConstraits;
@property (retain, nonatomic) NSArray *adjustableConstraints;
@property (retain, nonatomic) NSLayoutConstraint *widthAdjustmentConstraint;
@property (retain, nonatomic) UIView *mediaView;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) long long appearance;
@property (readonly, nonatomic) NSString *buttonTitle;
@property (readonly, nonatomic) NSArray *textTitleDescriptions;
@property (readonly, nonatomic) UIFont *textTitleFont;
@property (readonly, nonatomic) NSArray *textBodyDescriptions;
@property (readonly, nonatomic) UIFont *textBodyFont;
@property (readonly, nonatomic) NSString *largeTitle;
@property (readonly, nonatomic) UIFont *largeTitleFont;
@property (readonly, nonatomic) NSArray *mediaContents;
@property (readonly, nonatomic) double pagingInterval;
@property (readonly, nonatomic) double mediaLayoutWidthAdjustment;
@property (readonly, nonatomic) long long textBodyMaxLines;
@property (readonly, nonatomic) BOOL presentsFullScreen;

- (BOOL)isPortrait;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)updateMediaViewTextAndPlacement;
- (id)constructMediaView;
- (void)configBackgroundBlur;
- (void)tapInsideButton:(id)a0;
- (void)configContainerView;
- (void)containerForFullScreenView;
- (void)containerForAlertPresentation;
- (void)containerForKeyboardView;
- (double)containerTopPadding;
- (double)containerBottomPadding;
- (struct CGSize { double x0; double x1; })sizeForTutorialPageView;
- (void)extraButtonTapAction;
- (void).cxx_destruct;
- (id)initWithKeyboardAppearance:(long long)a0;
- (void)restartPagingAnimation;

@end
