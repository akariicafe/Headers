@interface MSTrackListDataSource : MSStructuredPageTableDataSource

- (id)headerViewForSection:(long long)a0;
- (long long)tableViewStyle;
- (id)cellForIndexPath:(id)a0;
- (void)configureCell:(id)a0 forIndexPath:(id)a1;
- (id)placeholderCellForIndexPath:(id)a0;
- (void)configurePlaceholderCell:(id)a0 forIndexPath:(id)a1;
- (BOOL)canDoubleTapIndexPath:(id)a0;
- (double)heightForPlaceholderCells;
- (void)reloadCellContexts;
- (Class)cellConfigurationClassForItem:(id)a0;
- (id)cellConfigurationForIndex:(long long)a0 item:(id)a1;
- (BOOL)canShowItemOfferButtonForItem:(id)a0;
- (BOOL)canShowPreviewForItem:(id)a0;
- (id)_stylesheetString;

@end
