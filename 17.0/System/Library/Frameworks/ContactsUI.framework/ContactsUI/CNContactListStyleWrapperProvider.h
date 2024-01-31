@class CNContactStyle;

@interface CNContactListStyleWrapperProvider : CNContactListStyleDefautProvider

@property (readonly, nonatomic) CNContactStyle *contactStyle;

- (id)tableBackgroundFilteredColor;
- (BOOL)tableIsOpaque;
- (BOOL)cellIsOpaque;
- (id)bannerTitleTextColor;
- (BOOL)cellIsVibrant;
- (id)cellNameTextFont;
- (long long)searchBarStyle;
- (BOOL)usesInsetPlatterStyle;
- (id)cellBackgroundSelectedColor;
- (id)cellNameTextEmphasisedFont;
- (id)cellSearchResultTextColor;
- (id)cellBlueSelectionSecondaryTextColor;
- (BOOL)searchBarIsTranslucent;
- (id)searchBarTextColor;
- (id)cellSearchBackgroundColor;
- (unsigned long long)tableNoContactsAvailableStyle;
- (long long)tableSeparatorOverlayBlendMode;
- (id)cellNameTextColor;
- (long long)navigationBarStyle;
- (id)cellSearchResultTextDisabledColor;
- (id)tableSeparatorColor;
- (long long)tableSeparatorStyle;
- (id)initWithContactStyle:(id)a0;
- (id)searchBarBackgroundColor;
- (id)headerBackgroundColor;
- (void).cxx_destruct;
- (id)tableBackgroundColor;
- (id)cellBackgroundColor;
- (id)searchBarTextDisabledColor;
- (id)headerIndexTextColor;
- (id)searchBarPlaceholderTextDisabledColor;
- (long long)searchBarKeyboardAppearance;
- (id)tableSectionIndexBackgroundColor;
- (id)cellNameTextHighlightedColor;
- (id)searchBarPlaceholderTextColor;
- (BOOL)navigationBarIsTranslucent;

@end
