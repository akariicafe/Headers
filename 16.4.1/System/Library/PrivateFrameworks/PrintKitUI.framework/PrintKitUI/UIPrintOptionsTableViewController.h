@class UIPrintMoreOptionsSection, UIPrinter, UIViewController, UIPrintFinishingOptionsSection, UIPrintApplicationSection, UIPrinterAttributesService, NSString, UIPrintMediaQualitySection, UIPrintLayoutSection, UIPrintStandardOptionsSection, UIPrintScalingSection, NSArray, UIPrintPanelViewController, UIPrintInfo;
@protocol UIPrintAppExtensionProtocol;

@interface UIPrintOptionsTableViewController : UITableViewController <UIPopoverPresentationControllerDelegate>

@property (weak, nonatomic) UIPrintPanelViewController *printPanelViewController;
@property (retain, nonatomic) UIPrintInfo *printInfo;
@property (retain, nonatomic) NSArray *printOptionSections;
@property (retain, nonatomic) UIPrintStandardOptionsSection *standardOptionsSection;
@property (retain, nonatomic) UIPrintMoreOptionsSection *moreOptionsSection;
@property (retain, nonatomic) UIPrintMediaQualitySection *mediaQualitySection;
@property (retain, nonatomic) UIPrintLayoutSection *layoutSection;
@property (retain, nonatomic) UIPrintScalingSection *scalingSection;
@property (retain, nonatomic) UIPrintFinishingOptionsSection *finishingOptionsSection;
@property (retain, nonatomic) UIPrintApplicationSection *appSection;
@property (retain, nonatomic) UIPrinterAttributesService *printerAttributesService;
@property (retain, nonatomic) NSString *printerWarnings;
@property (retain, nonatomic) UIPrinter *currentPrinter;
@property (retain, nonatomic) UIViewController<UIPrintAppExtensionProtocol> *appPrintExtensionController;
@property (nonatomic) BOOL showingGatheringPrinterInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)dismissKeyboard;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (BOOL)keyboardShowing;
- (BOOL)canDismissPrintOptions;
- (void)hideGatheringPrinterInfo;
- (id)initWithTableView:(id)a0 printInfo:(id)a1 printPanelViewController:(id)a2;
- (id)printOptionAtIndexPath:(id)a0;
- (void)setShowContactingPrinter:(BOOL)a0;
- (void)showGatheringPrinterInfo;
- (void)startPrinterWarningPoll;
- (void)stopPrinterWarningPolling;
- (BOOL)updatePrintSectionList;
- (void)updateWarnings:(id)a0 forPrinter:(id)a1;

@end
