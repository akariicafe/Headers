@class NSString, HUConnectedEcosystemsItemManager;

@interface HUConnectedEcosystemsViewController : HUItemTableViewController <HUPresentationDelegate>

@property (readonly, nonatomic) HUConnectedEcosystemsItemManager *itemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccessory:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)finishPresentation:(id)a0 animated:(BOOL)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (void)_presentRemoveFromEcosystemHomeConfirmation:(id)a0 atIndexPath:(id)a1;

@end
