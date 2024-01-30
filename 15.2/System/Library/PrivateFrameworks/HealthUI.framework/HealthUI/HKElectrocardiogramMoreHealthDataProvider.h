@class NSMutableArray;

@interface HKElectrocardiogramMoreHealthDataProvider : NSObject

@property (retain, nonatomic) NSMutableArray *dataSource;
@property (readonly, nonatomic) long long count;

- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeItemWithIdentifier:(id)a0;
- (id)_sentinelCell;
- (id)_defaultCellWithBackgroundColor:(id)a0;
- (id)_itemViewForRow:(long long)a0;
- (void)_configureLayoutForView:(id)a0 inCell:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_offscreenInsets;
- (id)cellForRow:(long long)a0 tableView:(id)a1;
- (id)unitTesting_itemsForIdentifiers:(id)a0;

@end
