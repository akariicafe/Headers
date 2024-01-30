@class UIPrinterSelectionOption, UIPrintPresetsOption;

@interface UIPrintStandardOptionsSection : UIPrintOptionSection

@property (retain, nonatomic) UIPrinterSelectionOption *printerSelectionOption;
@property (retain, nonatomic) UIPrintPresetsOption *presetsOption;

- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (void).cxx_destruct;
- (void)setShowContactingPrinter:(BOOL)a0;
- (void)updatePrinterInfo;
- (void)updatePrintOptionsList;
- (void)setCurrentPrinter:(id)a0;

@end
