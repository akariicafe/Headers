@class NSArray, NSString, NSIndexPath, NSMutableArray;

@interface UIPrintPresetsOption : UIPrintOption <UIPrintOptionListDelegate>

@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSMutableArray *presetNames;
@property (retain, nonatomic) NSArray *presets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemList;
- (id)summary;
- (BOOL)shouldShow;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)supportedPresets;
- (id)selectedItem;
- (void).cxx_destruct;
- (id)printOptionTableViewCell;
- (void)didSelectPrintOption;
- (void)updatePrinterInfo;
- (void)setCurrentPrinter:(id)a0;
- (void)listItemSelected:(id)a0;

@end
