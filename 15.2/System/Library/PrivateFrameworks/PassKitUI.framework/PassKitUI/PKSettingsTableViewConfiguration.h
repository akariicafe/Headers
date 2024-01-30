@class NSArray, NSDiffableDataSourceSnapshot;

@interface PKSettingsTableViewConfiguration : NSObject {
    NSDiffableDataSourceSnapshot *_currentSnapshot;
}

@property (readonly, nonatomic) NSArray *sections;

- (id)snapshot;
- (void).cxx_destruct;
- (void)appendSection:(id)a0 rows:(id)a1;
- (id)rowsForSection:(id)a0;

@end
