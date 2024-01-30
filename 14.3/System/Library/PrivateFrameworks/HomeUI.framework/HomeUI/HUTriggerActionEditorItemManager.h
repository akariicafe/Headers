@class HUInstructionsItem, HUButtonItem, HUViewControllerTableViewItem, HUTriggerHeaderItem;

@interface HUTriggerActionEditorItemManager : HFSimpleItemManager

@property (retain, nonatomic) HUViewControllerTableViewItem *gridItem;
@property (retain, nonatomic) HUInstructionsItem *instructionsItem;
@property (retain, nonatomic) HUTriggerHeaderItem *addShortcutHeader;
@property (retain, nonatomic) HUButtonItem *addShortcutItem;

- (void).cxx_destruct;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithInstructionsItem:(id)a0 andDelegate:(id)a1 showShortcutItem:(BOOL)a2;

@end
