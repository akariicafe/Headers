@class UITableView, NSString, NSArray, UIPrintOptionCell, UIPrintPanelViewController;

@interface UIPrinterFinishingOption : NSObject <UIPrintOptionListDelegate>

@property (weak, nonatomic) UIPrintPanelViewController *printPanelViewController;
@property (weak, nonatomic) UITableView *finishingOptionsTableView;
@property (nonatomic) long long finishingType;
@property (nonatomic) long long viewType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *optionChoices;
@property (nonatomic) long long value;
@property (retain, nonatomic) UIPrintOptionCell *printerFinishingOptionCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemList;
- (id)initWithTitle:(id)a0 finishingType:(long long)a1 viewType:(long long)a2 optionChoices:(id)a3 printPanelViewController:(id)a4 finishingOptionsTableView:(id)a5;
- (id)summary;
- (void)updateSwitchValue:(id)a0;
- (id)selectedItem;
- (void).cxx_destruct;
- (void)listItemSelected:(id)a0;

@end
