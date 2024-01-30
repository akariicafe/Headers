@class NSString, UIPrintInfo, UITableViewCell, UIPrinter, UIPrintPanelViewController;

@interface UIPrintOption : NSObject

@property (weak, nonatomic) UIPrintPanelViewController *printPanelViewController;
@property (retain, nonatomic) UITableViewCell *tableViewCell;
@property (retain, nonatomic) UIPrintInfo *printInfo;
@property (retain, nonatomic) UIPrinter *currentPrinter;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *summary;
@property (nonatomic) BOOL collapsed;

- (BOOL)shouldShow;
- (BOOL)canDismiss;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (void).cxx_destruct;
- (id)printOptionTableViewCell;
- (void)didSelectPrintOption;
- (void)updatePrinterInfo;
- (void)updatePrintOptionSummary;
- (id)printOptionDetailView;

@end
