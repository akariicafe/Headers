@class UIColor, UIFont, UIButtonConfiguration, UIImageSymbolConfiguration;

@interface AKAuthorizationAppearance : NSObject

@property (class, readonly, nonatomic) UIFont *titleFont;
@property (class, readonly, nonatomic) UIFont *subtitleFont;
@property (class, readonly, nonatomic) UIFont *smallTitleFont;
@property (class, readonly, nonatomic) UIColor *smallTitleTextColor;
@property (class, readonly, nonatomic) UIFont *captionFont;
@property (class, readonly, nonatomic) UIColor *captionTextColor;
@property (class, readonly, nonatomic) UIFont *messageFont;
@property (class, readonly, nonatomic) UIFont *bulletInfoLabelTitleFont;
@property (class, readonly, nonatomic) UIFont *bulletInfoLabelDescriptionFont;
@property (class, readonly, nonatomic) UIColor *scopeRowBackgroundColor;
@property (class, readonly, nonatomic) UIFont *scopeTitleFont;
@property (class, readonly, nonatomic) UIColor *scopeTitleTextColor;
@property (class, readonly, nonatomic) UIColor *linkColor;
@property (class, readonly, nonatomic) UIFont *scopeInfoLabelFont;
@property (class, readonly, nonatomic) UIColor *scopeInfoLabelTextColor;
@property (class, readonly, nonatomic) BOOL shouldShowBlurBackground;
@property (class, readonly, nonatomic) UIColor *checkmarkDeselectedTintColor;
@property (class, readonly, nonatomic) UIColor *paneBackgroundColor;
@property (class, readonly, nonatomic) long long paneBlurEffectStyle;
@property (class, readonly, nonatomic) UIColor *translucentBackdropColor;
@property (class, readonly, nonatomic) long long tableViewStyle;
@property (class, readonly, nonatomic) long long editingDoneButtonStyle;
@property (class, readonly, nonatomic) UIFont *scopeSelectionTitleFont;
@property (class, readonly, nonatomic) UIColor *scopeImageViewTintColor;
@property (class, readonly, nonatomic) UIColor *scopeImageViewBackgroundColor;
@property (class, readonly, nonatomic) UIFont *scopeSubtitleFont;
@property (class, readonly, nonatomic) UIColor *scopeSubtitleTextColor;
@property (class, readonly, nonatomic) UIColor *editScopeRowBackgroundColor;
@property (class, readonly, nonatomic) UIColor *editScopeInfoLabelTextColor;
@property (class, readonly, nonatomic) UIFont *editScopeInfoLabelFont;
@property (class, readonly, nonatomic) UIColor *editScopeInputFieldTextColor;
@property (class, readonly, nonatomic) UIFont *editScopeInputFieldFont;
@property (class, readonly, nonatomic) UIColor *continueButtonDefaultColor;
@property (class, readonly, nonatomic) UIColor *continueButtonDisabledColor;
@property (class, readonly, nonatomic) UIColor *continueButtonHighlightedColor;
@property (class, readonly, nonatomic) UIFont *continueButtonFont;
@property (class, readonly, nonatomic) UIColor *continueButtonTextColor;
@property (class, readonly, nonatomic) UIImageSymbolConfiguration *emailSelectionSymbolConfiguration;
@property (class, readonly, nonatomic) UIButtonConfiguration *dismissButtonConfiguration;
@property (class, readonly, nonatomic) UIButtonConfiguration *clearButtonConfiguration;

+ (id)clearButtonColor;

@end
