@class HKInspectableValueInRange, NSString, UIImage, HKUIMetricColors, HKMedicalRecord, WDMedicalRecordCategorySummary, HKConcept, NSNumber, UIColor;
@protocol HKClinicalBrandable;

@interface WDMedicalRecordDisplayItem : NSObject

@property (nonatomic) long long displayItemType;
@property (nonatomic) long long displayItemType;
@property (nonatomic) BOOL extraTopPadding;
@property (nonatomic) long long separatorStyle;
@property (nonatomic) BOOL separatorHidden;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } separatorInsets;
@property (nonatomic) long long placement;
@property (nonatomic) long long recordCategoryType;
@property (nonatomic) BOOL showDisclosureIndicator;
@property (nonatomic) BOOL useRegularFontForSubtitle;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *dateString;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) HKUIMetricColors *metricColors;
@property (retain, nonatomic) HKInspectableValueInRange *chartValueWithRange;
@property (retain, nonatomic) NSString *valueString;
@property (retain, nonatomic) NSString *unitString;
@property (retain, nonatomic) HKMedicalRecord *medicalRecord;
@property (weak, nonatomic) WDMedicalRecordCategorySummary *categorySummary;
@property (retain, nonatomic) id<HKClinicalBrandable> brandableObject;
@property (retain, nonatomic) NSString *panelName;
@property (retain, nonatomic) NSString *headerString;
@property (retain, nonatomic) HKConcept *concept;
@property (retain, nonatomic) NSNumber *recordCount;

+ (id)detailTitleItem;
+ (id)detailSubtitleItem;
+ (id)detailSubtitleItemWithTitle:(id)a0 subtitle:(id)a1;
+ (id)recordCardItem;
+ (id)timelineSummaryCategoryTitleItem;
+ (id)timelineSummarySourceTitleItem;
+ (id)timelineSummaryCategoryTitleItemWithCategoryType:(long long)a0;
+ (id)timelineSummaryDetailCategoryTitleItemWithMedicalRecord:(id)a0;
+ (id)timelineSummaryCategoryMinimizedItem;
+ (id)timelineSummaryCategoryMinimizedItemWithCategoryType:(long long)a0;
+ (id)timelineSummaryContentWithSubtitleItem;
+ (id)timelineSummaryValueItem;
+ (id)timelineSummaryReferenceRangeItem;
+ (id)timelineSummaryAppendixItem;
+ (id)timelineSummaryPanelTitleItem;
+ (id)detailTitleItemWithTitle:(id)a0 subtitle:(id)a1;
+ (id)detailSubtitleItemWithTitle:(id)a0 subtitle:(id)a1 extraTopPadding:(BOOL)a2;
+ (id)sectionHeaderItem;
+ (id)standaloneItem;
+ (id)accountSourceItem;
+ (id)conceptHeaderItemWithCategoryType:(long long)a0 title:(id)a1;
+ (id)conceptCardItemWithCategoryType:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
