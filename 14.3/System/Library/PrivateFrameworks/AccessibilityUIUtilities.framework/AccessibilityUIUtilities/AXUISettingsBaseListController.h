@class NSArray;

@interface AXUISettingsBaseListController : AXUISettingsSetupCapableListController

@property (retain, nonatomic) NSArray *detailItems;
@property (nonatomic) BOOL detailItemsHidden;

- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)cellForSpecifier:(id)a0;
- (id)specifiersByRemovingDetailItemsFromOriginalSpecifiers:(id)a0 ifHidden:(BOOL)a1;
- (id)specifierForKey:(id)a0;
- (void)updateTableCheckedSelection:(id)a0;
- (void)updateVisibleCellsWithCheckedSelection:(id)a0;
- (id)cellForSpecifierID:(id)a0;
- (id)specifierForIndexPath:(id)a0;
- (void)showController:(id)a0 withSpecifier:(id)a1;

@end
