@interface SCLHistoryDaysDataSource : SCLSpecifierDataSource

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)handleSignificantTimeChange:(id)a0;
- (id)initWithListController:(id)a0 viewModel:(id)a1;
- (void)updateHistoryGroupsWithItems:(id)a0;

@end
