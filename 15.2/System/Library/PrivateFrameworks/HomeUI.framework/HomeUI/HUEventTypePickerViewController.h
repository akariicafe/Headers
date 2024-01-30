@class HUEventTypePickerItemManager, HUEventUIFlow, NSString;

@interface HUEventTypePickerViewController : HUItemTableViewController <HUEventUIFlowViewController>

@property (readonly, nonatomic) HUEventTypePickerItemManager *itemManager;
@property (retain, nonatomic) HUEventUIFlow *flow;
@property (retain, nonatomic) NSString *stepIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_cancel:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (id)initWithFlow:(id)a0 stepIdentifier:(id)a1;

@end
