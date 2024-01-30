@interface MSTrackListDataSource : MSStructuredPageTableDataSource

- (id)headerViewForSection:(long long)a0;
- (long long)tableViewStyle;
- (id)cellForIndexPath:(id)a0;
- (id)cellConfigurationForIndex:(long long)a0 item:(id)a1;
- (BOOL)canDoubleTapIndexPath:(id)a0;
- (BOOL)canShowItemOfferButtonForItem:(id)a0;
- (Class)cellConfigurationClassForItem:(id)a0;
- (void)configureCell:(id)a0 forIndexPath:(id)a1;
- (void)configurePlaceholderCell:(id)a0 forIndexPath:(id)a1;
- (double)heightForPlaceholderCells;
- (id)placeholderCellForIndexPath:(id)a0;
- (void)reloadCellContexts;
- (id)_stylesheetString;
- (BOOL)canShowPreviewForItem:(id)a0;

@end
