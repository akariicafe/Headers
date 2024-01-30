@class UITableView, NSMapTable, NSString, UITableViewDropProposal, NSIndexPath, UIDropInteraction;
@protocol UIDropSession, _UITableViewDropControllerDelegate;

@interface _UITableViewDropController : NSObject <UIDropInteractionDelegate_Private, _UITableViewDropCoordinatorDelegate>

@property (retain, nonatomic) UIDropInteraction *dropInteraction;
@property (weak, nonatomic) UITableView<_UITableViewDropControllerDelegate> *tableView;
@property (nonatomic) unsigned long long defaultDropOperation;
@property (readonly, nonatomic, getter=isTrackingDrag) BOOL trackingDrag;
@property (retain, nonatomic) NSIndexPath *targetIndexPath;
@property (retain, nonatomic) UITableViewDropProposal *dropProposal;
@property (retain, nonatomic) id<UIDropSession> dropSession;
@property (readonly, nonatomic) BOOL shouldIgnoreDrags;
@property (nonatomic) long long ignoringDragsCount;
@property (retain, nonatomic) NSMapTable *dragItemDropAnimations;
@property (nonatomic) BOOL canOnlyHandleReordering;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (long long)_dropInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (id)animateDragItem:(id)a0 toRowAtIndexPath:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (void)dropInteraction:(id)a0 concludeDrop:(id)a1;
- (id)dropInteraction:(id)a0 previewForDroppingItem:(id)a1 withDefault:(id)a2;
- (void)dropInteraction:(id)a0 item:(id)a1 willAnimateDropWithAnimator:(id)a2;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void).cxx_destruct;
- (void)beginIgnoringDrags;
- (void)resetTrackingState;
- (id)animateDragItem:(id)a0 toCell:(id)a1 withPreviewParameters:(id)a2;
- (void)setupDragInteraction;
- (void)uninstallFromTableView;
- (void)updateTargetIndexPathAndDropProposalForSession:(id)a0;
- (BOOL)commitPlaceholderInsertionWithContext:(id)a0 dataSourceUpdates:(id /* block */)a1;
- (id)defaultAnimatorForDragItem:(id)a0;
- (id)animateDragItem:(id)a0 toTarget:(id)a1;
- (id)animateDragItem:(id)a0 intoRowAtIndexPath:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)insertPlaceholderAtIndexPath:(id)a0 withContext:(id)a1 previewParametersProvider:(id /* block */)a2;
- (void)endIgnoringDrags;
- (void)resetAllDragState;
- (id)initWithTableView:(id)a0;
- (BOOL)deletePlaceholder:(id)a0;

@end
