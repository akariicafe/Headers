@class UISwitch;

@interface UIPrintBookletOption : UIPrintOption <UIPrintOptionViewDelegate>

@property (retain, nonatomic) UISwitch *bookletSwitch;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)summaryString;
- (void).cxx_destruct;
- (void)bookletSelected:(id)a0;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)printOptionTableViewCell;
- (void)updateFromPrintInfo;

@end
