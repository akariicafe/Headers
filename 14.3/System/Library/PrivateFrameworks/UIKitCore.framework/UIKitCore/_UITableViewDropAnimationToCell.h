@class UITableViewCell, UIDragPreviewParameters;

@interface _UITableViewDropAnimationToCell : _UITableViewDropAnimation

@property (weak, nonatomic) UITableViewCell *cell;
@property (retain, nonatomic) UIDragPreviewParameters *previewParameters;

- (void).cxx_destruct;
- (id)initWithDragItem:(id)a0 cell:(id)a1 previewParameters:(id)a2;

@end
