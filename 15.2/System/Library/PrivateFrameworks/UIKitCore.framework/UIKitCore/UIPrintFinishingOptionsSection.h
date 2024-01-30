@class UIPrintFinishingsOption;

@interface UIPrintFinishingOptionsSection : UIPrintOptionSection

@property (retain, nonatomic) UIPrintFinishingsOption *finishingPrintOption;

- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (void).cxx_destruct;
- (void)updatePrinterInfo;
- (void)updatePrintOptionsList;
- (void)didSelectPrintOptionSection;
- (void)setCurrentPrinter:(id)a0;

@end
