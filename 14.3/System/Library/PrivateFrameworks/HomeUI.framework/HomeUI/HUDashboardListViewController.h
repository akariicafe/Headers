@class HUDashboardContext, NSString, HUDashboardListItemManager, HUGridLayoutOptions, UIView;
@protocol HUDashboardListViewControllerDelegate;

@interface HUDashboardListViewController : HUItemTableViewController <UITableViewDelegatePrivate>

@property (readonly, nonatomic) HUDashboardListItemManager *itemManager;
@property (retain, nonatomic) UIView *selectedBackgroundView;
@property (weak, nonatomic) id<HUDashboardListViewControllerDelegate> delegate;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (retain, nonatomic) HUDashboardContext *selectedDashboard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHaveFullLengthBottomSeparatorForSection:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (id)initWithHome:(id)a0 delegate:(id)a1 layoutOptions:(id)a2;
- (id)_indexPathForDashboardContext:(id)a0;

@end
