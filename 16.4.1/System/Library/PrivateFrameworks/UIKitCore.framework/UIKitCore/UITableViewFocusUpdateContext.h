@class NSIndexPath, UITableView;

@interface UITableViewFocusUpdateContext : UIFocusUpdateContext {
    BOOL _didSetPreviouslyFocusedIndexPath;
    BOOL _didSetNextFocusedIndexPath;
}

@property (readonly, weak, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) NSIndexPath *previouslyFocusedIndexPath;
@property (readonly, nonatomic) NSIndexPath *nextFocusedIndexPath;

+ (id)_contextWithContext:(id)a0 tableView:(id)a1;

- (void).cxx_destruct;
- (id)_initWithContext:(id)a0 tableView:(id)a1;

@end
