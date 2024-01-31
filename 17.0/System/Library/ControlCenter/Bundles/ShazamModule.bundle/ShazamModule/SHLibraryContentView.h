@class UIStackView, SHLibraryDataSource, UITableViewDiffableDataSource, SHLibraryHeaderView, NSString, UITableView;
@protocol SHLibraryContentViewDelegate;

@interface SHLibraryContentView : UIView <UITableViewDelegate, UITableViewDataSourcePrefetching, SHLibraryHeaderViewDelegate>

@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) UITableViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) SHLibraryDataSource *dataSource;
@property (readonly, nonatomic) SHLibraryHeaderView *headerView;
@property (readonly, nonatomic) UIStackView *containerStackView;
@property (nonatomic) BOOL showAccountUpgradeHint;
@property (nonatomic) BOOL showItemCount;
@property (weak, nonatomic) id<SHLibraryContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commonInit;
- (id)init;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)tableView:(id)a0 prefetchRowsAtIndexPaths:(id)a1;
- (void)updateSnapshot;
- (void)headerViewAccountUpgradeHintTapped;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 track:(id)a2;
- (void)updateItemCount:(long long)a0;

@end
