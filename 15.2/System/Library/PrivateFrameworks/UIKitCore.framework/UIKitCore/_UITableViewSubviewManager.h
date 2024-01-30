@class NSCountedSet, NSMapTable, UITableViewCell, NSMutableDictionary, UITableView;
@protocol _UITableViewSubviewManagerDelegate;

@interface _UITableViewSubviewManager : NSObject {
    UITableViewCell *_reorderingCell;
    UITableView<_UITableViewSubviewManagerDelegate> *_tableView;
    NSCountedSet *_reusePreventedCells;
    NSMapTable *_cellsReadyForReuse;
    NSMutableDictionary *_prefetchedCells;
    NSMapTable *_indexPathsForPrefetchedCells;
}

- (void).cxx_destruct;

@end
