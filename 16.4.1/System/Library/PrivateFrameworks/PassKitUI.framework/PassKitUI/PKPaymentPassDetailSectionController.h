@class NSArray, UIColor, NSString;

@interface PKPaymentPassDetailSectionController : NSObject <PKTableViewSectionController>

@property (retain, nonatomic) NSArray *allSectionIdentifiers;
@property (retain, nonatomic) NSArray *sectionIdentifiers;
@property (nonatomic) long long detailViewStyle;
@property (retain, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIColor *detailTextColor;
@property (retain, nonatomic) UIColor *linkTextColor;
@property (retain, nonatomic) UIColor *warningTextColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)validForPaymentPass:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_applyDefaultDynamicStylingToCell:(id)a0;
- (void)_applyDefaultStaticStylingToCell:(id)a0;
- (id)checkmarkCellWithText:(id)a0 forTableView:(id)a1;
- (id)defaultCellWithTextColor:(id)a0 forTableView:(id)a1;
- (id)disabledCellWithText:(id)a0 forTableView:(id)a1;
- (id)disclosureCellWithTitle:(id)a0 forTableView:(id)a1;
- (id)imageViewCellForImage:(id)a0 contentMode:(long long)a1 forTableView:(id)a2;
- (id)infoCellWithDescription:(id)a0 forTableView:(id)a1;
- (id)infoCellWithPrimaryText:(id)a0 detailText:(id)a1 cellStyle:(long long)a2 forTableView:(id)a3;
- (id)infoCellWithPrimaryText:(id)a0 detailText:(id)a1 cellStyle:(long long)a2 reuseIdentifier:(id)a3 forTableView:(id)a4;
- (id)linkCellWithText:(id)a0 forTableView:(id)a1;
- (void)preflight:(id /* block */)a0;
- (void)reportPassDetailsAnalyticsForTappedButtonTag:(id)a0 additionalAnalytics:(id)a1 pass:(id)a2;
- (void)reportPassDetailsAnalyticsForTappedRowTag:(id)a0 additionalAnalytics:(id)a1 pass:(id)a2;
- (void)reportPassDetailsAnalyticsForToggleTag:(id)a0 toggleResult:(BOOL)a1 additionalAnalytics:(id)a2 pass:(id)a3;
- (id)settingsTableCellWithTitle:(id)a0 action:(SEL)a1 setOn:(BOOL)a2 enabled:(BOOL)a3;
- (void)showSpinner:(BOOL)a0 inCell:(id)a1 detailText:(id)a2;
- (void)showSpinner:(BOOL)a0 inCell:(id)a1 overrideTextColor:(id)a2;
- (id)spinnerCellForTableView:(id)a0;
- (id)stackedInfoCellWithPrimaryText:(id)a0 detailText:(id)a1 cellStyle:(long long)a2 forTableView:(id)a3;
- (id)subtitleCellForTableView:(id)a0;
- (id)switchCellWithText:(id)a0 forTableView:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSectionIdentifier:(id)a1;
- (id)value1CellWithTextColor:(id)a0 forTableView:(id)a1;

@end
