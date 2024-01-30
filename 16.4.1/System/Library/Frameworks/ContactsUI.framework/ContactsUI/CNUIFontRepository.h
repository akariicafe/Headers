@class UIFont;

@interface CNUIFontRepository : NSObject

@property (class, readonly, nonatomic) UIFont *groupsAllButtonFont;
@property (class, readonly, nonatomic) UIFont *navigationListCellTitleFontRegular;
@property (class, readonly, nonatomic) UIFont *navigationListCellSubtitleFontRegular;
@property (class, readonly, nonatomic) UIFont *navigationListDetailCellTitleFontRegular;
@property (class, readonly, nonatomic) UIFont *navigationListDetailCellSubtitleFontRegular;
@property (class, readonly, nonatomic) UIFont *contactListBannerTitleFontPrimary;
@property (class, readonly, nonatomic) UIFont *contactListBannerFootnoteFontPrimary;
@property (class, readonly, nonatomic) UIFont *contactListBannerFootnoteFontSecondary;
@property (class, readonly, nonatomic) UIFont *contactListContactCountFont;
@property (class, readonly, nonatomic) UIFont *contactListDuplicateCountFont;
@property (class, readonly, nonatomic) UIFont *contactStyleDefaultTextFont;
@property (class, readonly, nonatomic) UIFont *contactStyleDefaultItalicTextFont;
@property (class, readonly, nonatomic) UIFont *contactStyleDefaultBoldTextFont;
@property (class, readonly, nonatomic) UIFont *contactCardRecentBadgeFont;
@property (class, readonly, nonatomic) UIFont *contactCardWarningHeaderLabelFont;
@property (class, readonly, nonatomic) UIFont *contactCardPhotoPickerCaptionFont;
@property (class, readonly, nonatomic) UIFont *contactCardPhotoPickerActionButtonFont;
@property (class, readonly, nonatomic) UIFont *groupHeaderTitleFont;
@property (class, readonly, nonatomic) UIFont *groupHeaderWrappedTitleFont;
@property (class, readonly, nonatomic) UIFont *groupHeaderSubTitleFont;
@property (class, readonly, nonatomic) UIFont *groupHeaderActionButtonFont;
@property (class, readonly, nonatomic) UIFont *groupHeaderActionButtonWrappedFont;
@property (class, readonly, nonatomic) UIFont *visualIdentityPickerHeaderTitleFont;
@property (class, readonly, nonatomic) UIFont *visualIdentityPickerHeaderPlaceholderFont;
@property (class, readonly, nonatomic) UIFont *visualIdentityEditorTextFont;
@property (class, readonly, nonatomic) UIFont *visualIdentityEditorSegmentedControlFont;
@property (class, readonly, nonatomic) UIFont *catalystNameTextFieldsFont;
@property (class, readonly, nonatomic) UIFont *catalystLabelsFont;
@property (class, readonly, nonatomic) UIFont *catalystAudienceDetailsLabelFont;
@property (class, readonly, nonatomic) UIFont *carPlayTableViewCellTitleFont;
@property (class, readonly, nonatomic) UIFont *carPlayTableViewCellSubtitleFont;
@property (class, readonly, nonatomic) UIFont *carPlayContactInfoViewPrimaryLabelFont;
@property (class, readonly, nonatomic) UIFont *carPlayContactInfoViewSecondaryLabelFont;
@property (class, readonly, nonatomic) UIFont *carPlayNavigationBarContactNameFont;
@property (class, readonly, nonatomic) UIFont *carPlayQuickActionButtonTitleFont;
@property (class, readonly, nonatomic) UIFont *carPlaySymbolImageFont;
@property (class, readonly, nonatomic) UIFont *carPlayNoContentViewTitleFont;
@property (class, readonly, nonatomic) UIFont *carPlayNoContentViewSiriButtonFont;
@property (class, readonly, nonatomic) UIFont *contactSuggestionsHeaderTitleFont;
@property (class, readonly, nonatomic) UIFont *contactSuggestionsNameFont;

+ (id)fontWithBoldWeightStyle:(id)a0;
+ (id)carPlayFontWithMediumWeightStyle:(id)a0;
+ (id)carPlayFontWithBoldWeightStyle:(id)a0;
+ (id)carPlayFontWithStyle:(id)a0;

@end
