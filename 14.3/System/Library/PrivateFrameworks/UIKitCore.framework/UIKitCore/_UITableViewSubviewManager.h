@class NSCountedSet, NSMapTable, UITableViewCell, UITableView;
@protocol _UITableViewSubviewManagerDelegate;

@interface _UITableViewSubviewManager : NSObject

@property (weak, nonatomic) UITableView<_UITableViewSubviewManagerDelegate> *tableView;
@property (retain, nonatomic) NSCountedSet *reusePreventedCells;
@property (retain, nonatomic) NSMapTable *cellsReadyForReuse;
@property (retain, nonatomic) UITableViewCell *reorderingCell;

- (void)cellReadyForReuse:(id)a0 withIndexPath:(id)a1 didEndDisplaying:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)shouldDeferReuseOfCell:(id)a0;
- (void)resumeReuseOfCell:(id)a0;
- (id)initWithTableView:(id)a0;
- (void)preventReuseOfCell:(id)a0;

@end
