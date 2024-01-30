@class MRUDiffableDataSource, MRUUpNextDataSource, NSString, UITableView;

@interface MRUUpNextPicker : UIView <UITableViewDelegate, MRUUpNextDataSourceDelegate, MRUDiffableDataSourceDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MRUDiffableDataSource *diffableDataSource;
@property (readonly, nonatomic) MRUUpNextDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (void)configureCell:(id)a0 forMovie:(id)a1;
- (void)configureCell:(id)a0 forSong:(id)a1;
- (void)configureCell:(id)a0 forTVEpisode:(id)a1;
- (void)dataSource:(id)a0 didDeleteItemWithIdentifier:(id)a1;
- (void)dataSource:(id)a0 moveItemToTopWithIdentifier:(id)a1;
- (void)dataSource:(id)a0 moveItemWithIdentifier:(id)a1 aferIndentifier:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataSource:(id)a1;
- (id)reponseItemForIndexPath:(id)a0;
- (void)upNextDataSource:(id)a0 didChangeResponseItemIDs:(id)a1;
- (void)updateDiffableDataSourceAnimated:(BOOL)a0;

@end
