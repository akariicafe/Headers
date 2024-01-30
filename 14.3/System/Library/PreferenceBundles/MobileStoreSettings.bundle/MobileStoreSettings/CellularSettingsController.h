@class ASDCellularSettings, ISURLBag;

@interface CellularSettingsController : PSListController

@property (retain, nonatomic) ASDCellularSettings *settings;
@property (retain, nonatomic) ISURLBag *bag;

- (id)init;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_formattedNetworkLimit;

@end
