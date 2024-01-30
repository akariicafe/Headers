@interface SCLHistoryDaysDataSource : SCLSpecifierDataSource

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithListController:(id)a0 viewModel:(id)a1;
- (void)handleSignificantTimeChange:(id)a0;
- (void)updateHistoryGroupsWithItems:(id)a0;

@end
