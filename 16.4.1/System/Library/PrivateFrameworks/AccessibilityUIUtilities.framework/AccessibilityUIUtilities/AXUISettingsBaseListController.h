@class NSArray;

@interface AXUISettingsBaseListController : AXUISettingsSetupCapableListController

@property (retain, nonatomic) NSArray *detailItems;
@property (nonatomic) BOOL detailItemsHidden;

- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)specifiersByRemovingDetailItemsFromOriginalSpecifiers:(id)a0 ifHidden:(BOOL)a1;
- (id)cellForSpecifier:(id)a0;
- (id)cellForSpecifierID:(id)a0;
- (void)showController:(id)a0 withSpecifier:(id)a1;
- (id)specifierForIndexPath:(id)a0;
- (id)specifierForKey:(id)a0;
- (void)updateTableCheckedSelection:(id)a0;
- (void)updateVisibleCellsWithCheckedSelection:(id)a0;

@end
