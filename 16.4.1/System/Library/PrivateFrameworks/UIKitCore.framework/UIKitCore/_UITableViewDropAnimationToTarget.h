@class UIDragPreviewTarget, UITableViewCell;

@interface _UITableViewDropAnimationToTarget : _UITableViewDropAnimation

@property (retain, nonatomic) UIDragPreviewTarget *target;
@property (nonatomic) BOOL didSearchForCell;
@property (retain, nonatomic) UITableViewCell *cell;

- (void).cxx_destruct;
- (id)cellForTargetContainerInTableView:(id)a0;
- (id)initWithDragItem:(id)a0 target:(id)a1;

@end
