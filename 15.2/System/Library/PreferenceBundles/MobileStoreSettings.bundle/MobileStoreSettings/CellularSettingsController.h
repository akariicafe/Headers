@class ASDCellularSettings, ISURLBag;

@interface CellularSettingsController : PSListController

@property (retain, nonatomic) ASDCellularSettings *settings;
@property (retain, nonatomic) ISURLBag *bag;

- (id)specifiers;
- (id)init;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_formattedNetworkLimit;

@end
