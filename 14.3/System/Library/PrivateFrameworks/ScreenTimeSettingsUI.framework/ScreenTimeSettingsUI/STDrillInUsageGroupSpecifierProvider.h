@class STUsageItem, NSObject;
@protocol STRootViewModelCoordinator;

@interface STDrillInUsageGroupSpecifierProvider : STGroupSpecifierProvider

@property (readonly, nonatomic) STUsageItem *usageItem;
@property (readonly, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator;
@property (readonly, nonatomic) unsigned long long numberOfNotifications;

- (void).cxx_destruct;
- (id)initWithUsageItem:(id)a0 coordinator:(id)a1;
- (id)selectedUsageReport:(id)a0;
- (id)weeklyPickupTotal:(id)a0;
- (id)dailyAverage:(id)a0;
- (id)notifications:(id)a0;

@end
