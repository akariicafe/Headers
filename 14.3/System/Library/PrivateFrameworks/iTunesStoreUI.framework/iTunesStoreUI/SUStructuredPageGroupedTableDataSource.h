@interface SUStructuredPageGroupedTableDataSource : SUStructuredPageTableDataSource

- (long long)tableViewStyle;
- (double)heightForFooterInSection:(long long)a0;
- (void)configureCell:(id)a0 forIndexPath:(id)a1;
- (void)reloadCellContexts;
- (Class)cellConfigurationClassForItem:(id)a0;
- (Class)cellClassForItem:(id)a0 reuseIdentifier:(id *)a1;
- (id)newHeaderViewForSection:(long long)a0;
- (BOOL)canShowItemOfferButtonForItem:(id)a0;
- (id)_subtitleForSectionIndex:(long long)a0;

@end
