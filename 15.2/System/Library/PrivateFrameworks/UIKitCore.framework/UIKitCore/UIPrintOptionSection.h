@class NSString, UIPrinter, UIPrintInfo, UITableViewCell, NSMutableArray, UIPrintPanelViewController;

@interface UIPrintOptionSection : NSObject

@property (weak, nonatomic) UIPrintPanelViewController *printPanelViewController;
@property (retain, nonatomic) UIPrintInfo *printInfo;
@property (retain, nonatomic) UIPrinter *currentPrinter;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UITableViewCell *tableViewCell;
@property (retain, nonatomic) NSMutableArray *printOptions;

- (BOOL)shouldShow;
- (BOOL)canDismiss;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)summaryString;
- (void).cxx_destruct;
- (void)updatePrinterInfo;
- (void)updatePrintOptionsList;
- (void)didSelectPrintOptionSection;
- (void)dealloc;
- (void)updateSectionSummary:(id)a0;

@end
