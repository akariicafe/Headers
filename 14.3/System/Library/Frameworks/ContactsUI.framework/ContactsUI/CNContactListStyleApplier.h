@protocol CNContactListStyle;

@interface CNContactListStyleApplier : NSObject

@property (readonly, nonatomic) id<CNContactListStyle> contactListStyle;
@property (readonly, nonatomic) double cellEstimatedHeight;
@property (readonly, nonatomic) unsigned long long tableNoContactsAvailableStyle;
@property (readonly, nonatomic) BOOL usesInsetPlatterStyle;

+ (void)applyDefaultStyleToContact:(id)a0 usingFormatter:(id)a1 ofCell:(id)a2;

- (void).cxx_destruct;
- (void)applyContactListStyleToBannerTitle:(id)a0 primaryAppearance:(BOOL)a1;
- (void)applyContactListStyleToCell:(id)a0;
- (void)applyContactListStyleToSearchBar:(id)a0;
- (void)applyContactListStyleToNavigationBar:(id)a0;
- (id)initWithContactListStyle:(id)a0;
- (void)applySelectionTextStyleToCell:(id)a0;
- (void)applyContactListStyleToContact:(id)a0 usingFormatter:(id)a1 ofCell:(id)a2;
- (void)applyContactListStyleToSelectedCell:(id)a0;
- (void)applyContactListStyleToEmergencyIcon:(id)a0 ofCell:(id)a1;
- (void)applyContactListStyleToText:(id)a0 ofHighlightedCell:(id)a1;
- (void)applyContactListStyleToText:(id)a0 ofUnhighlightedCell:(id)a1;
- (void)applyContactListStyleToMeContactLabel:(id)a0 ofCell:(id)a1;
- (void)applyContactListStyleToBannerFootnote:(id)a0 primaryAppearance:(BOOL)a1;
- (void)applyContactListStyleToText:(id)a0 ofSearchResultCell:(id)a1;
- (void)applyContactListStyleToSearchCell:(id)a0;
- (void)applyContactListStyleToTableView:(id)a0;
- (void)applyContactListStyleToHeaderFooter:(id)a0;

@end
