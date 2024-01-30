@class HULocationConnectedEcosystemsItemManager, NSString;

@interface HULocationConnectedEcosystemsViewController : HUItemTableViewController <HUPresentationDelegate>

@property (readonly, nonatomic) HULocationConnectedEcosystemsItemManager *itemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHome:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)finishPresentation:(id)a0 animated:(BOOL)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;

@end
