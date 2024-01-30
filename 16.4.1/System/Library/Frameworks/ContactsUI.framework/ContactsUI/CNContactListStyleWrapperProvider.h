@class CNContactStyle;

@interface CNContactListStyleWrapperProvider : CNContactListStyleDefautProvider

@property (readonly, nonatomic) CNContactStyle *contactStyle;

- (id)headerIndexTextColor;
- (BOOL)searchBarIsTranslucent;
- (long long)tableSeparatorOverlayBlendMode;
- (id)headerBackgroundColor;
- (long long)searchBarKeyboardAppearance;
- (long long)searchBarStyle;
- (id)searchBarBackgroundColor;
- (id)tableBackgroundFilteredColor;
- (id)searchBarPlaceholderTextDisabledColor;
- (id)searchBarPlaceholderTextColor;
- (id)cellSearchResultTextDisabledColor;
- (long long)tableSeparatorStyle;
- (BOOL)cellIsOpaque;
- (id)initWithContactStyle:(id)a0;
- (id)cellNameTextEmphasisedFont;
- (id)cellNameTextFont;
- (id)tableSeparatorColor;
- (id)cellBlueSelectionSecondaryTextColor;
- (id)tableBackgroundColor;
- (id)cellNameTextColor;
- (id)bannerTitleTextColor;
- (id)cellSearchResultTextColor;
- (id)tableSectionIndexBackgroundColor;
- (unsigned long long)tableNoContactsAvailableStyle;
- (BOOL)usesInsetPlatterStyle;
- (id)cellSearchBackgroundColor;
- (BOOL)cellIsVibrant;
- (id)cellBackgroundSelectedColor;
- (id)searchBarTextColor;
- (id)cellNameTextHighlightedColor;
- (BOOL)navigationBarIsTranslucent;
- (id)cellBackgroundColor;
- (BOOL)tableIsOpaque;
- (void).cxx_destruct;
- (id)searchBarTextDisabledColor;
- (long long)navigationBarStyle;

@end
