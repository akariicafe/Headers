@class NSString, HUAccessoryDiagnosticsItemManager;

@interface HUAccessoryDiagnosticsViewController : HUItemTableViewController <UITextViewDelegate, HUSwitchCellDelegate>

@property (weak, nonatomic) HUAccessoryDiagnosticsItemManager *accessoryLogsItemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (id)initWithSourceItem:(id)a0;
- (void)generateNewLogs:(id)a0;
- (void)showShareSheetForItem:(id)a0 withAnchorView:(id)a1;

@end
