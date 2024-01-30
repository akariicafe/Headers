@interface STSegmentedControlGroupSpecifierProvider : STUsageGroupSpecifierProvider

- (void)setCoordinator:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void)_selectedDayDidChange:(id)a0;
- (void)_selectedSegmentIndexChanged:(id)a0;

@end
