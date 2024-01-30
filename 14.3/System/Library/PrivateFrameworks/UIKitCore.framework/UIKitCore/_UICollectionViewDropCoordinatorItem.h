@class _UIDropAnimationHandlers, NSString, UIDragItem, UIDragPreviewTarget, NSIndexPath;

@interface _UICollectionViewDropCoordinatorItem : NSObject <UIDragAnimating>

@property (weak, nonatomic) UIDragItem *dragItem;
@property (copy, nonatomic) UIDragPreviewTarget *target;
@property (nonatomic) int kind;
@property (retain, nonatomic) _UIDropAnimationHandlers *animationHandlers;
@property (copy, nonatomic) id /* block */ previewParametersProvider;
@property (retain, nonatomic) NSIndexPath *destinationIndexPath;
@property (nonatomic) BOOL shouldRemainInHierarchy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addAnimations:(id /* block */)a0;
- (id)initWithDestinationIndexPath:(id)a0 dragItem:(id)a1 placeholderConfiguration:(id)a2;
- (void)addCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithDestinationIndexPath:(id)a0 dragItem:(id)a1;
- (id)initWithDragItem:(id)a0 target:(id)a1;

@end
