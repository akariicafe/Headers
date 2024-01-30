@class CNContactStyle;

@interface CNContactListStyleWrapperProvider : CNContactListStyleDefautProvider

@property (readonly, nonatomic) CNContactStyle *contactStyle;

- (long long)searchBarStyle;
- (id)cellBackgroundSelectedColor;
- (unsigned long long)tableNoContactsAvailableStyle;
- (long long)navigationBarStyle;
- (id)searchBarPlaceholderTextDisabledColor;
- (id)cellSearchResultTextColor;
- (id)tableSeparatorColor;
- (id)cellNameTextEmphasisedFont;
- (id)cellNameTextColor;
- (id)searchBarTextColor;
- (id)cellSearchBackgroundColor;
- (BOOL)usesInsetPlatterStyle;
- (BOOL)navigationBarIsTranslucent;
- (id)searchBarTextDisabledColor;
- (id)cellNameTextHighlightedColor;
- (id)cellBlueSelectionSecondaryTextColor;
- (long long)tableSeparatorStyle;
- (id)cellNameTextFont;
- (id)tableBackgroundFilteredColor;
- (id)tableSectionIndexBackgroundColor;
- (id)searchBarPlaceholderTextColor;
- (BOOL)searchBarIsTranslucent;
- (id)bannerTitleTextColor;
- (BOOL)cellIsOpaque;
- (long long)tableSeparatorOverlayBlendMode;
- (id)headerBackgroundColor;
- (id)initWithContactStyle:(id)a0;
- (void).cxx_destruct;
- (id)cellSearchResultTextDisabledColor;
- (id)tableBackgroundColor;
- (id)searchBarBackgroundColor;
- (id)headerIndexTextColor;
- (BOOL)cellIsVibrant;
- (long long)searchBarKeyboardAppearance;
- (id)cellBackgroundColor;
- (BOOL)tableIsOpaque;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })cellSeparatorInset;

@end
