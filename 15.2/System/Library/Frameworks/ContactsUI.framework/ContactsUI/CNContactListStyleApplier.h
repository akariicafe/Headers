@protocol CNContactListStyle;

@interface CNContactListStyleApplier : NSObject

@property (readonly, nonatomic) id<CNContactListStyle> contactListStyle;
@property (readonly, nonatomic) double cellEstimatedHeight;
@property (readonly, nonatomic) unsigned long long tableNoContactsAvailableStyle;
@property (readonly, nonatomic) BOOL usesInsetPlatterStyle;

+ (void)applyDefaultStyleToContact:(id)a0 usingFormatter:(id)a1 ofCell:(id)a2;

- (void)applyContactListStyleToContact:(id)a0 usingFormatter:(id)a1 ofCell:(id)a2;
- (void)applyContactListStyleToText:(id)a0 ofSearchResultCell:(id)a1 withColor:(id)a2 highlightColor:(id)a3;
- (void)applyContactListStyleToBannerFootnote:(id)a0 primaryAppearance:(BOOL)a1;
- (id)initWithContactListStyle:(id)a0;
- (void)applyContactListStyleToText:(id)a0 ofSearchResultCell:(id)a1;
- (void)applyContactListStyleToHeaderFooter:(id)a0;
- (void)applyContactListStyleToSearchHeader:(id)a0 withTitle:(id)a1;
- (void)applyContactListStyleToSearchBar:(id)a0;
- (void)applyContactListStyleToMeContactLabel:(id)a0 ofCell:(id)a1;
- (void).cxx_destruct;
- (void)applyContactListStyleToEmergencyIcon:(id)a0 ofCell:(id)a1;
- (void)applyContactListStyleToCell:(id)a0;
- (void)applyContactListStyleToSearchCell:(id)a0;
- (void)applyContactListStyleToText:(id)a0 ofHighlightedCell:(id)a1;
- (void)applyLightTextColorsToContactListCell:(id)a0;
- (void)applyContactListStyleToText:(id)a0 ofUnhighlightedCell:(id)a1;
- (void)applyContactListStyleToNavigationBar:(id)a0;
- (void)applyContactListStyleToTableView:(id)a0;
- (void)applyContactListStyleToBannerTitle:(id)a0 primaryAppearance:(BOOL)a1;
- (void)applyDefaultTextColorsToContactListCell:(id)a0;

@end
