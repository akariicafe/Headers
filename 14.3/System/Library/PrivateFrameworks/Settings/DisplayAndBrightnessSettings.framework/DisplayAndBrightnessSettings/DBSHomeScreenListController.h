@class SBSHomeScreenService, NSString;

@interface DBSHomeScreenListController : PSListController <DBSDeviceAppIconSizeTableViewCellDelegate>

@property (retain, nonatomic) SBSHomeScreenService *_homeScreenService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)_updateDeviceAppIconSizeWithNewOption:(unsigned long long)a0;
- (void)deviceAppIconSizeTableViewCellUserDidTapOnMoreOption:(id)a0;
- (void)deviceAppIconSizeTableViewCellUserDidTapOnBiggerOption:(id)a0;
- (id)getTodayViewOnHomeScreenEnabledForSpecifier:(id)a0;
- (void)setTodayViewOnHomeScreenEnabled:(id)a0 forSpecifier:(id)a1;

@end
