@class NSLayoutYAxisAnchor, NSArray, NSString, UIBlurEffect, UILabel, UIView, NSLayoutConstraint;
@protocol HRStackedButtonViewDelegate;

@interface HRStackedButtonView : UIView

@property (copy, nonatomic) NSArray *titles;
@property (copy, nonatomic) NSArray *styles;
@property (nonatomic) long long buttonMode;
@property (copy, nonatomic) NSString *footerText;
@property (copy, nonatomic) NSString *boldFooterText;
@property (nonatomic) long long footerTextAlignment;
@property (retain, nonatomic) UILabel *footerTextLabel;
@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) UIBlurEffect *backgroundBlurEffect;
@property (retain, nonatomic) UIView *backgroundBlurView;
@property (retain, nonatomic) NSLayoutConstraint *backgroundBlurViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *backgroundBlurViewTrailingConstraint;
@property (retain, nonatomic) NSLayoutYAxisAnchor *firstTopAnchor;
@property (nonatomic) double firstTopConstant;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (weak, nonatomic) id<HRStackedButtonViewDelegate> delegate;
@property (nonatomic) long long lastButtonMode;
@property (nonatomic) BOOL fixedBottomButtonSpacing;
@property (nonatomic, getter=isBlurHidden) BOOL blurHidden;

+ (double)topPadding;
+ (id)_footerTextFont;
+ (double)_buttonSpacingForValue:(double)a0;
+ (id)_footerFontTextStyle;
+ (id)_footerTextBoldFont;
+ (double)_footerTextSpacingForValue:(double)a0;
+ (id)buddyStackedButtonViewWithTitles:(id)a0 footerText:(id)a1 boldFooterText:(id)a2 delegate:(id)a3;
+ (id)buddyStackedButtonViewWithTitles:(id)a0 footerText:(id)a1 boldFooterText:(id)a2 footerTextAlignment:(long long)a3 delegate:(id)a4;

- (void)_updateForCurrentSizeCategory;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)firstBaselineAnchor;
- (id)lastBaselineAnchor;
- (void)actionButtonTapped:(id)a0;
- (id)_attributedFooterText;
- (void)_assignConstraintsForButtons;
- (id)_createButtons;
- (void)_createViewBottomConstraint;
- (void)_setUpBlurEffect;
- (void)_setUpButtons;
- (void)_setUpFooterText;
- (void)_updateBottomConstraint;
- (void)alignBlurViewHorizontalConstraintsWithView:(id)a0;
- (id)initWithButtonTitles:(id)a0 styles:(id)a1 footerText:(id)a2 boldFooterText:(id)a3 footerTextAlignment:(long long)a4 delegate:(id)a5;

@end
