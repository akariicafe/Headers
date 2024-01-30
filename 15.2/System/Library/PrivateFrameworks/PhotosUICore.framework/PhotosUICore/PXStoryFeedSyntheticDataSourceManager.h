@interface PXStoryFeedSyntheticDataSourceManager : PXSectionedDataSourceManager {
    long long _initialNumberOfSections;
    long long _initialNumberOfItemsPerSection;
}

- (id)createInitialDataSource;
- (id)init;
- (id)initWithNumberOfSections:(long long)a0 numberOfItemsPerSection:(long long)a1;

@end
