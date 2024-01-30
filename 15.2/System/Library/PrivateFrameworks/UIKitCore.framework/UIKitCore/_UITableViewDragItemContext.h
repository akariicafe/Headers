@class NSIndexPath, UITableView;

@interface _UITableViewDragItemContext : NSObject

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSIndexPath *indexPath;

- (id)initWithIndexPath:(id)a0 forTableView:(id)a1;
- (void).cxx_destruct;

@end
