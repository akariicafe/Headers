@class UIPrinterBrowserViewController, PKPrinter, NSString;

@interface UIPrinterSelectionOption : UIPrintOption <UIPrinterBrowserOwner>

@property (retain, nonatomic) UIPrinterBrowserViewController *browserController;
@property (nonatomic) BOOL contactingPrinter;
@property (retain, nonatomic) PKPrinter *printer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissAnimated:(BOOL)a0;
- (id)summary;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (BOOL)shouldShow;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)printerDisplayName:(id)a0;
- (void)printerBrowserViewDidDisappear;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)printOptionTableViewCell;
- (void)setShowContactingPrinter:(BOOL)a0;
- (void)didSelectPrintOption;
- (BOOL)filtersPrinters;
- (void)setCurrentPrinter:(id)a0;
- (void)showContacting;
- (void)cancelPrinting;

@end
