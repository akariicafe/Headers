@interface SUStructuredPageGroupedTableDataSource : SUStructuredPageTableDataSource

- (double)heightForFooterInSection:(long long)a0;
- (long long)tableViewStyle;
- (id)_subtitleForSectionIndex:(long long)a0;
- (BOOL)canShowItemOfferButtonForItem:(id)a0;
- (Class)cellClassForItem:(id)a0 reuseIdentifier:(id *)a1;
- (Class)cellConfigurationClassForItem:(id)a0;
- (void)configureCell:(id)a0 forIndexPath:(id)a1;
- (id)newHeaderViewForSection:(long long)a0;
- (void)reloadCellContexts;

@end
