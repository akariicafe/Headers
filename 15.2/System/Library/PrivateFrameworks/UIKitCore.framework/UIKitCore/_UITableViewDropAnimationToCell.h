@class UITableViewCell, UIDragPreviewParameters;

@interface _UITableViewDropAnimationToCell : _UITableViewDropAnimation

@property (weak, nonatomic) UITableViewCell *cell;
@property (retain, nonatomic) UIDragPreviewParameters *previewParameters;

- (id)initWithDragItem:(id)a0 cell:(id)a1 previewParameters:(id)a2;
- (void).cxx_destruct;

@end
