@class NSArray, PSSpecifier;

@interface STShowMoreUsageGroupSpecifierProvider : STUsageGroupSpecifierProvider

@property (readonly, nonatomic) PSSpecifier *showMoreSpecifier;
@property (nonatomic) unsigned long long totalNumberOfItemsToShow;
@property (retain, nonatomic) PSSpecifier *summarySpecifier;
@property (copy, nonatomic) NSArray *usageItems;
@property (nonatomic) unsigned long long numberOfItemsToShow;

- (id)init;
- (void).cxx_destruct;
- (id)newSpecifierWithUsageItem:(id)a0;
- (void)refreshUsageSpecifiersWithUpdates:(BOOL)a0;
- (void)showMoreItems:(id)a0;
- (void)updateSpecifier:(id)a0 usageItem:(id)a1;

@end
