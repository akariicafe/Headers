@class NSObject, STUsageDetailsViewModel;
@protocol STRootViewModelCoordinator;

@interface STCategoryDetailsGroupSpecifierProvider : STGroupSpecifierProvider

@property (readonly, nonatomic) STUsageDetailsViewModel *usageDetailsViewModel;
@property (readonly, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator;

- (void).cxx_destruct;
- (id)totalUsageDescription:(id)a0;
- (void)showMostUsedDetailListController:(id)a0;
- (id)initWithCategoryUsageItem:(id)a0 coordinator:(id)a1;

@end
