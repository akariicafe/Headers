@class UIDragPreviewTarget, UITableViewCell;

@interface _UITableViewDropAnimationToTarget : _UITableViewDropAnimation

@property (retain, nonatomic) UIDragPreviewTarget *target;
@property (nonatomic) BOOL didSearchForCell;
@property (retain, nonatomic) UITableViewCell *cell;

- (id)cellForTargetContainerInTableView:(id)a0;
- (void).cxx_destruct;
- (id)initWithDragItem:(id)a0 target:(id)a1;

@end
