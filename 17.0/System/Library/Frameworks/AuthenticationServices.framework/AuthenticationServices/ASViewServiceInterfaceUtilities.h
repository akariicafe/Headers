@class UIColor, UIFont, UIBlurEffect, UIBackgroundConfiguration, UIImageSymbolConfiguration;

@interface ASViewServiceInterfaceUtilities : NSObject

@property (class, readonly, nonatomic) struct CGColor { } *iconBorderColor;
@property (class, readonly, nonatomic) double iconBorderWidth;
@property (class, readonly, nonatomic) long long tableViewStyle;
@property (class, readonly, nonatomic) double tableViewRowHeight;
@property (class, readonly, nonatomic) UIBlurEffect *paneBackgroundBlurEffect;
@property (class, readonly, nonatomic) double navigationBarHeight;
@property (class, readonly, nonatomic) UIFont *headerTitleFont;
@property (class, readonly, nonatomic) UIColor *headerTitleColor;
@property (class, readonly, nonatomic) UIFont *headerMessageFont;
@property (class, readonly, nonatomic) UIColor *headerMessageColor;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } headerIconSize;
@property (class, readonly, nonatomic) double headerIconCornerRadius;
@property (class, readonly, nonatomic) UIFont *cellTitleFont;
@property (class, readonly, nonatomic) UIColor *cellTitleColor;
@property (class, readonly, nonatomic) UIFont *cellSubtitleFont;
@property (class, readonly, nonatomic) UIColor *cellSubtitleColor;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } cellIconSize;
@property (class, readonly, nonatomic) UIColor *cellIconTintColor;
@property (class, readonly, nonatomic) UIBackgroundConfiguration *cellBackgroundConfiguration;
@property (class, readonly, nonatomic) double cellIconCornerRadius;
@property (class, readonly, nonatomic) double cellIconMarginLeading;
@property (class, readonly, nonatomic) double cellIconMarginTrailing;
@property (class, readonly, nonatomic) UIColor *cellIconBackgroundColor;
@property (class, readonly, nonatomic) UIImageSymbolConfiguration *cellIconDefaultSymbolConfiguration;
@property (class, readonly, nonatomic) UIImageSymbolConfiguration *cellIconPasskeySymbolConfiguration;
@property (class, readonly, nonatomic) UIColor *continueButtonBackgroundColor;
@property (class, readonly, nonatomic) UIColor *continueButtonDisabledBackgroundColor;
@property (class, readonly, nonatomic) UIColor *continueButtonHighlightedBackgroundColor;
@property (class, readonly, nonatomic) UIFont *continueButtonTitleFont;
@property (class, readonly, nonatomic) UIColor *continueButtonTitleColor;
@property (class, readonly, nonatomic) double continueButtonTitleMargin;
@property (class, readonly, nonatomic) double continueButtonCornerRadius;
@property (class, readonly, nonatomic) double continueButtonHeight;

+ (double)_iconCornerRadiusForSize:(struct CGSize { double x0; double x1; })a0;

@end
