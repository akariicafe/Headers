@class UIFont;

@interface _UINavigationBarVisualStyle : NSObject

@property (nonatomic) long long metrics;
@property (readonly, nonatomic) BOOL metricsIsMini;
@property (readonly, nonatomic) BOOL metricsHasPrompt;
@property (nonatomic) BOOL wantsLetterPress;
@property (nonatomic) BOOL inPopover;
@property (readonly, nonatomic) long long idiom;
@property (readonly, nonatomic) double backButtonIndicatorSpacing;
@property (readonly, nonatomic) double buttonHeight;
@property (readonly, nonatomic) double barHeight;
@property (readonly, nonatomic) double barPromptHeight;
@property (readonly, nonatomic) double topMargin;
@property (readonly, nonatomic) double horizontalMarginAdjustment;
@property (readonly, nonatomic) double topTitleMargin;
@property (readonly, nonatomic) double topBackMargin;
@property (readonly, nonatomic) double headingFontSize;
@property (readonly, nonatomic) double buttonFontSize;
@property (readonly, nonatomic) double leftTitleMargin;
@property (readonly, nonatomic) double leftBackTitleMargin;
@property (readonly, nonatomic) double leftBackImageMargin;
@property (readonly, nonatomic) double rightTitleMargin;
@property (readonly, nonatomic) double rightImageMargin;
@property (readonly, nonatomic) double leftTextMargin;
@property (readonly, nonatomic) double topImageMargin;
@property (readonly, nonatomic) double bottomImageMargin;
@property (readonly, nonatomic) double bottomButtonMargin;
@property (readonly, nonatomic) double promptInset;
@property (readonly, nonatomic) double interItemSpace;
@property (readonly, nonatomic) double interBlockSpace;
@property (readonly, nonatomic) double maxBackButtonProportion;
@property (readonly, nonatomic) double minBackTextWidth;
@property (readonly, nonatomic) double minBackImageWidth;
@property (readonly, nonatomic) double minButtonWidth;
@property (readonly, nonatomic) double minTitleWidth;
@property (readonly, nonatomic) double buttonImagePadding;
@property (readonly, nonatomic) double promptFontSize;
@property (readonly, copy, nonatomic) UIFont *promptFont;
@property (readonly, nonatomic) double promptTextOffset;
@property (readonly, nonatomic) double navigationItemBaselineOffset;
@property (readonly, nonatomic) double backIndicatorBottomMargin;
@property (readonly, copy, nonatomic) UIFont *defaultTitleFont;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } buttonContentEdgeInsets;
@property (readonly, nonatomic) double _legacyLeftTitleMargin;
@property (readonly, nonatomic) double _legacyRightTitleMargin;
@property (readonly, nonatomic) double _legacyButtonFontSize;
@property (readonly, nonatomic) double _legacyButtonImagePadding;

+ (id)visualStyleForIdiom:(long long)a0;

- (double)leftBackTitleMarginLetterpressPadding;
- (double)imageButtonMarginInNavigationBar:(id)a0;
- (id)initWithIdiom:(long long)a0;
- (double)leftBackTitleMarginForCustomBackButtonBackground:(id)a0;
- (double)textButtonMarginInNavigationBar:(id)a0;
- (id)defaultTitleColorForUserInterfaceStyle:(long long)a0 barStyle:(long long)a1;
- (double)backButtonAnimationClippingPadding;
- (BOOL)shouldForceLegacyLeftBackTitleMarginForCustomBackButtonBackground:(id)a0;
- (id)_legacyButtonFontForStyle:(long long)a0;
- (id)timingFunctionForAnimationInView:(id)a0 withKeyPath:(id)a1 isInteractive:(BOOL)a2;
- (id)buttonFontForStyle:(long long)a0;
- (long long)navigationBar:(id)a0 metricsForOrientation:(long long)a1 hasPrompt:(BOOL)a2;
- (double)barHeightForMetrics:(long long)a0;

@end
