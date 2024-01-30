@class UIPrintInfo, NSString, NSArray, UIPrinter, NSDictionary, NSMutableArray, UILabel, NSIndexPath;

@interface UIPrintPresetsOption : UIPrintOption <UIPrintOptionListDelegate>

@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSMutableArray *presetNames;
@property (retain, nonatomic) UIPrinter *observedPrinter;
@property (retain, nonatomic) UIPrintInfo *origPrintInfo;
@property (retain, nonatomic) NSArray *printerPresets;
@property (retain, nonatomic) NSArray *standardPresets;
@property (retain, nonatomic) UILabel *appliedPresetsSummaryLabel;
@property (retain, nonatomic) NSDictionary *grayscaleStandardPreset;
@property (retain, nonatomic) NSDictionary *grayscaleDraftStandardPreset;
@property (retain, nonatomic) NSDictionary *colorStandardPreset;
@property (retain, nonatomic) NSDictionary *colorFineStandardPreset;
@property (retain, nonatomic) NSArray *presets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)titleForHeaderInSection:(long long)a0;
- (id)summary;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)itemList;
- (id)selectedItem;
- (BOOL)shouldShow;
- (id)titleForFooterInSection:(long long)a0;
- (id)selectedItems;
- (long long)listItemSelected:(id)a0;
- (BOOL)isItemSelected:(id)a0;
- (id)appliedPresetsSummary;
- (void)currentPrinterChanged;
- (void)didSelectPrintOption;
- (id)getPrinterPresets;
- (id)getStandardPresets;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)printOptionTableViewCell;
- (BOOL)printerContainsQuality:(long long)a0;
- (void)updateFromPrintInfo;
- (void)updatePresetsList;
- (void)updatePrintInfoWithSelectedIndex:(id)a0;

@end
