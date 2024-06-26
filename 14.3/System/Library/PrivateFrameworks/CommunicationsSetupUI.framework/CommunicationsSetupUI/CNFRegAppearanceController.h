@class UIColor, UIFont, UIImage, UIView;

@interface CNFRegAppearanceController : NSObject

@property (readonly, nonatomic) long long keyboardAppearance;
@property (readonly, nonatomic) UIColor *customBackgroundColor;
@property (readonly, nonatomic) UIColor *userInteractionColor;
@property (readonly, nonatomic) BOOL styleUsesCustomTableStyle;
@property (readonly, retain, nonatomic) UIColor *tableBackgroundColor;
@property (readonly, retain, nonatomic) UIColor *tableSectionBorderColor;
@property (readonly, retain, nonatomic) UIImage *tableSectionShadowImage;
@property (readonly, retain, nonatomic) UIColor *tableCellBackgroundColor;
@property (readonly, retain, nonatomic) UIColor *tableCellTextLabelColor;
@property (readonly, retain, nonatomic) UIColor *tableCellTextLabelBackgroundColor;
@property (readonly, retain, nonatomic) UIColor *tableCellDetailLabelColor;
@property (readonly, retain, nonatomic) UIColor *tableCellDetailLabelBackgroundColor;
@property (readonly, retain, nonatomic) UIImage *tableCellButtonImage;
@property (readonly, retain, nonatomic) UIImage *tableCellButtonImageSelected;
@property (readonly, retain, nonatomic) UIColor *tableCellEditableTextColor;
@property (readonly, retain, nonatomic) UIColor *tableCellEditableTextPlaceholderColor;
@property (readonly, retain, nonatomic) UIColor *tableCellEditableInsertionPointColor;
@property (readonly, retain, nonatomic) UIImage *tableCellEditableTextFieldClearButton;
@property (readonly, retain, nonatomic) UIImage *tableCellEditableTextFieldClearButtonPressed;
@property (readonly, nonatomic) BOOL styleUsesCustomAccessoryView;
@property (readonly, retain, nonatomic) UIView *tableCellCustomAccessoryViewDisclosureIndicator;
@property (readonly, retain, nonatomic) UIImage *tableCellCheckmarkImage;
@property (readonly, retain, nonatomic) UIImage *tableCellCheckmarkImageSelected;
@property (readonly, retain, nonatomic) UIImage *tableCellCheckmarkImageDisabled;
@property (readonly, nonatomic) BOOL styleUsesCustomSeparatorStyle;
@property (readonly, nonatomic) long long tableSeparatorStyle;
@property (readonly, nonatomic) UIColor *tableSeparatorColor;
@property (readonly, nonatomic) UIColor *tableSeparatorTopShadowColor;
@property (readonly, nonatomic) UIColor *tableSeparatorBottomShadowColor;
@property (readonly, retain, nonatomic) UIColor *tableHeaderTextColor;
@property (readonly, retain, nonatomic) UIColor *tableHeaderTextColorSelected;
@property (readonly, retain, nonatomic) UIColor *tableHeaderTextShadowColor;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } tableHeaderTextShadowOffset;
@property (readonly, retain, nonatomic) UIFont *tableHeaderFont;
@property (readonly, retain, nonatomic) UIFont *tableFooterFont;
@property (readonly, retain, nonatomic) UIColor *tableFooterTextColor;
@property (readonly, nonatomic) long long tableHeaderTextAlignment;
@property (readonly, nonatomic) long long tableFooterTextAlignment;
@property (readonly, nonatomic) BOOL styleUsesCustomSearchResultsStyle;
@property (readonly, nonatomic) long long searchResultsTableSeparatorStyle;
@property (readonly, nonatomic) UIColor *searchResultsTableSeparatorColor;
@property (readonly, nonatomic) UIColor *searchResultsTableSeparatorTopShadowColor;
@property (readonly, nonatomic) UIColor *searchResultsTableSeparatorBottomShadowColor;
@property (readonly, nonatomic) long long modalPresentationStyle;
@property (readonly, retain, nonatomic) UIView *webViewBackgroundView;
@property (readonly, retain, nonatomic) UIColor *webViewBackgroundColor;
@property (readonly, nonatomic) BOOL webViewIsOpaque;
@property (readonly, nonatomic) BOOL webViewDrawsShadows;
@property (readonly, nonatomic) BOOL splashScreenShowsIcon;
@property (readonly, retain, nonatomic) UIColor *splashTitleLabelTextColor;
@property (readonly, retain, nonatomic) UIColor *splashEntryFieldTextColor;
@property (readonly, retain, nonatomic) UIColor *splashEntryPlaceholderTextColor;
@property (readonly, retain, nonatomic) UIColor *splashEntryFieldLabelTextColor;
@property (readonly, retain, nonatomic) UIColor *splashSignInFieldsBorderColor;
@property (readonly, retain, nonatomic) UIColor *splashSignInFieldsBackgroundColor;
@property (readonly, nonatomic) long long splashSignInProgressIndicatorColor;
@property (readonly, nonatomic) long long navigationBarStyle;
@property (readonly, nonatomic) BOOL navigationBarIsTranslucent;
@property (readonly, nonatomic) long long navigationBarActivityIndicatorStyle;
@property (readonly, nonatomic) BOOL firstNavigationBarHidden;
@property (readonly, nonatomic) BOOL navigationBarHidesTitle;
@property (readonly, nonatomic) BOOL navigationBarHidesShadow;
@property (readonly, retain, nonatomic) UIColor *navigationBarTintColor;
@property (readonly, nonatomic) BOOL navigationBarTranslucent;
@property (readonly, retain, nonatomic) UIImage *navigationBarBackgroundImage;
@property (readonly, retain, nonatomic) UIColor *learnMoreTextColor;
@property (readonly, retain, nonatomic) UIColor *learnMoreTextColorSelected;
@property (readonly, retain, nonatomic) UIColor *learnMoreShadowColor;
@property (readonly, retain, nonatomic) UIImage *learnMoreArrowImage;
@property (readonly, retain, nonatomic) UIImage *learnMoreArrowImagePressed;
@property (readonly, nonatomic) BOOL learnMoreButtonDrawsUnderline;
@property (readonly, nonatomic) BOOL actionSheetsUsePopoverStyle;

+ (id)globalAppearanceController;
+ (id)appearanceControllerForStyle:(long long)a0;
+ (id)stripedAppearanceController;
+ (id)gradientAppearanceController;
+ (id)modernAppearanceController;
+ (id)modernTransparentLightAppearanceController;
+ (id)modernTransparentDarkAppearanceController;
+ (id)defaultAppearanceController;

- (id)tableBackgroundColor;
- (long long)modalPresentationStyle;
- (id)tableCellTextLabelBackgroundColor;
- (id)tableCellTextLabelColor;
- (id)tableCellDetailLabelColor;
- (id)tableCellDetailLabelBackgroundColor;
- (id)tableSectionBorderColor;
- (id)webViewBackgroundView;
- (id)webViewBackgroundColor;
- (BOOL)webViewIsOpaque;

@end
