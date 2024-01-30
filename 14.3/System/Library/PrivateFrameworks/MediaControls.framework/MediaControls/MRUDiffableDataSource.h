@protocol MRUDiffableDataSourceDelegate;

@interface MRUDiffableDataSource : UITableViewDiffableDataSource

@property (weak, nonatomic) id<MRUDiffableDataSourceDelegate> delegate;
@property (nonatomic) BOOL supportsReordering;
@property (nonatomic) BOOL supportsEditing;

- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;

@end
