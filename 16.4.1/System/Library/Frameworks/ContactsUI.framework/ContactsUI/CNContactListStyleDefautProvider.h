@class UIColor, UIFont;

@interface CNContactListStyleDefautProvider : NSObject <CNContactListStyle>

@property (readonly, nonatomic) UIColor *cellBackgroundColor;
@property (readonly, nonatomic) UIColor *cellBackgroundSelectedColor;
@property (readonly, nonatomic) UIColor *cellNameTextColor;
@property (readonly, nonatomic) UIColor *cellNameTextHighlightedColor;
@property (readonly, nonatomic) UIColor *cellNameTextHighlightedLightColor;
@property (readonly, nonatomic) UIColor *cellSearchResultTextColor;
@property (readonly, nonatomic) UIColor *cellSearchResultTextDisabledColor;
@property (readonly, nonatomic) UIColor *cellBlueSelectionSecondaryTextColor;
@property (readonly, nonatomic) UIColor *cellSearchBackgroundColor;
@property (readonly, nonatomic) UIFont *cellNameTextFont;
@property (readonly, nonatomic) UIFont *cellNameTextEmphasisedFont;
@property (readonly, nonatomic) BOOL cellIsOpaque;
@property (readonly, nonatomic) BOOL cellIsVibrant;
@property (readonly, nonatomic) UIColor *headerBackgroundColor;
@property (readonly, nonatomic) UIColor *headerIndexTextColor;
@property (readonly, nonatomic) UIColor *bannerTitleTextColor;
@property (readonly, nonatomic) UIColor *tableBackgroundColor;
@property (readonly, nonatomic) UIColor *tableBackgroundFilteredColor;
@property (readonly, nonatomic) UIColor *tableSectionIndexBackgroundColor;
@property (readonly, nonatomic) UIColor *tableSeparatorColor;
@property (readonly, nonatomic) unsigned long long tableNoContactsAvailableStyle;
@property (readonly, nonatomic) long long tableSeparatorStyle;
@property (readonly, nonatomic) long long tableSeparatorOverlayBlendMode;
@property (readonly, nonatomic) BOOL tableIsOpaque;
@property (readonly, nonatomic) BOOL usesInsetPlatterStyle;
@property (readonly, nonatomic) UIColor *searchBarBackgroundColor;
@property (readonly, nonatomic) UIColor *searchBarTextColor;
@property (readonly, nonatomic) UIColor *searchBarTextDisabledColor;
@property (readonly, nonatomic) UIColor *searchBarPlaceholderTextColor;
@property (readonly, nonatomic) UIColor *searchBarPlaceholderTextDisabledColor;
@property (readonly, nonatomic) long long searchBarStyle;
@property (readonly, nonatomic) long long searchBarKeyboardAppearance;
@property (readonly, nonatomic) BOOL searchBarIsTranslucent;
@property (readonly, nonatomic) long long navigationBarStyle;
@property (readonly, nonatomic) BOOL navigationBarIsTranslucent;

@end
