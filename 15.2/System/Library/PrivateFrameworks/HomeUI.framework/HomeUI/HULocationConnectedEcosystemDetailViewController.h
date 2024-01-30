@class NSString, HULocationConnectedEcosystemDetailItemManager;

@interface HULocationConnectedEcosystemDetailViewController : HUItemTableViewController <HUPresentationDelegate>

@property (readonly, nonatomic) HULocationConnectedEcosystemDetailItemManager *itemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)finishPresentation:(id)a0 animated:(BOOL)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (id)initWithConnectedEcosystemHome:(id)a0 home:(id)a1;

@end
