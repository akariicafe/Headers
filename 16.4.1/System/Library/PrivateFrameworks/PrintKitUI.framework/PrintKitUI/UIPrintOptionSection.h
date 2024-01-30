@class NSString, UIPrintInfo, UITableViewCell, NSMutableArray, UIPrintPanelViewController;

@interface UIPrintOptionSection : NSObject

@property (weak, nonatomic) UIPrintPanelViewController *printPanelViewController;
@property (retain, nonatomic) UIPrintInfo *printInfo;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UITableViewCell *tableViewCell;
@property (retain, nonatomic) NSMutableArray *printOptions;
@property (nonatomic) BOOL shouldShow;

- (void)dismissKeyboard;
- (id)summaryString;
- (void).cxx_destruct;
- (BOOL)canDismiss;
- (BOOL)keyboardShowing;
- (void)didSelectPrintOptionSection;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (BOOL)updatePrintOptionsList;
- (void)updateSectionSummary;

@end
