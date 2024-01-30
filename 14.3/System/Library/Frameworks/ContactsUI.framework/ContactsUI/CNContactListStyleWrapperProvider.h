@class CNContactStyle;

@interface CNContactListStyleWrapperProvider : CNContactListStyleDefautProvider

@property (readonly, nonatomic) CNContactStyle *contactStyle;

- (long long)searchBarStyle;
- (id)tableBackgroundFilteredColor;
- (id)tableSectionIndexBackgroundColor;
- (BOOL)cellIsVibrant;
- (void).cxx_destruct;
- (id)tableBackgroundColor;
- (long long)tableSeparatorStyle;
- (id)cellBackgroundColor;
- (id)cellSearchResultTextDisabledColor;
- (BOOL)navigationBarIsTranslucent;
- (id)searchBarTextDisabledColor;
- (BOOL)usesInsetPlatterStyle;
- (id)cellNameTextFont;
- (id)searchBarPlaceholderTextColor;
- (id)cellSearchResultTextColor;
- (long long)navigationBarStyle;
- (BOOL)tableIsOpaque;
- (id)cellNameTextColor;
- (id)cellBackgroundSelectedColor;
- (long long)tableSeparatorOverlayBlendMode;
- (id)bannerTitleTextColor;
- (unsigned long long)tableNoContactsAvailableStyle;
- (id)headerBackgroundColor;
- (id)tableSeparatorColor;
- (id)cellNameTextEmphasisedFont;
- (BOOL)cellIsOpaque;
- (id)cellNameTextHighlightedColor;
- (id)cellSearchBackgroundColor;
- (id)searchBarTextColor;
- (long long)searchBarKeyboardAppearance;
- (BOOL)searchBarIsTranslucent;
- (id)initWithContactStyle:(id)a0;
- (id)searchBarPlaceholderTextDisabledColor;
- (id)headerIndexTextColor;
- (id)searchBarBackgroundColor;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })cellSeparatorInset;

@end
