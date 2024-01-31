@protocol CNContactListStyle;

@interface CNContactListStyleApplier : NSObject

@property (readonly, nonatomic) double cellEstimatedHeight;
@property (readonly, nonatomic) unsigned long long tableNoContactsAvailableStyle;
@property (readonly, nonatomic) BOOL usesInsetPlatterStyle;
@property (readonly, nonatomic) id<CNContactListStyle> contactListStyle;

+ (void)applyDefaultContactListStyleToHeaderFooter:(id)a0 withTitle:(id)a1 isRTL:(BOOL)a2;
+ (void)applyDefaultStyleToContact:(id)a0 usingFormatter:(id)a1 ofCell:(id)a2;

- (void)applyContactListStyleToSearchBar:(id)a0;
- (void)applyContactListStyleToContact:(id)a0 usingFormatter:(id)a1 ofCell:(id)a2;
- (void)applyContactListStyleToHeaderFooter:(id)a0 withTitle:(id)a1 isRTL:(BOOL)a2;
- (void)applyContactListStyleToContentConfiguration:(id)a0 usingState:(id)a1 forCell:(id)a2;
- (id)defaultListContentConfiguration;
- (void)applyCellSeparatorInsetStyleToConfiguration:(id)a0 superviewDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 itemWantsFullLengthBottomSeparator:(BOOL)a2;
- (void)applyEditingStateBackgroundConfigurationToCell:(id)a0;
- (void)applyContactListStyleToSearchCell:(id)a0;
- (void)applyContactListStyleToCollectionView:(id)a0;
- (void)applyContactListStyleToNavigationBar:(id)a0;
- (void)applyContactListStyleToSearchHeader:(id)a0 withTitle:(id)a1;
- (id)initWithContactListStyle:(id)a0;
- (void)applyContactListStyleToBannerTitle:(id)a0 primaryAppearance:(BOOL)a1;
- (void).cxx_destruct;
- (void)applyContactListStyleToCell:(id)a0;
- (void)applyContactListDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0 toLayoutSection:(id)a1 collectionViewIsShowingIndexBar:(BOOL)a2;
- (void)applyContactListStyleToEmergencyIcon:(id)a0 ofCell:(id)a1;
- (void)applyContactListStyleToMeContactLabel:(id)a0 ofCell:(id)a1;
- (id)attributedString:(id)a0 foregroundColor:(id)a1;
- (void)applyTextColorsToContentConfiguration:(id)a0 usingState:(id)a1;
- (void)applyContactListStyleToSubtitleText:(id)a0 ofSearchResultCell:(id)a1;
- (void)applySubtitleTextColorsToSearchCellContentConfiguration:(id)a0 withSubtitleText:(id)a1 forSelectedState:(BOOL)a2;
- (void)applyContactListStyleToBannerFootnote:(id)a0 primaryAppearance:(BOOL)a1;
- (void)applyContactListStyleToCollectionLayoutConfiguration:(id)a0;

@end
