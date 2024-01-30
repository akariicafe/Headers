@class HFActionSetBuilder, NSArray, HUTriggerTypePickerItemManager;
@protocol HUTriggerEditorDelegate;

@interface HUTriggerTypePickerViewController : HUItemTableViewController

@property (retain, nonatomic) HFActionSetBuilder *actionSetBuilder;
@property (retain, nonatomic) NSArray *anonymousActionBuilders;
@property (readonly, nonatomic) HUTriggerTypePickerItemManager *itemManager;
@property (weak, nonatomic) id<HUTriggerEditorDelegate> delegate;

- (void).cxx_destruct;
- (void)_cancel:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (id)initWithActionSetBuilder:(id)a0 delegate:(id)a1;
- (id)initWithActionSetBuilder:(id)a0 anonymousActionBuilders:(id)a1 delegate:(id)a2;
- (id)_createTriggerEditorForItem:(id)a0;
- (id)_createTriggerBuilderOfClass:(Class)a0;

@end
