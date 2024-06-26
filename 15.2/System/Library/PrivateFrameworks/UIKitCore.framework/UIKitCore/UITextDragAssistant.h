@class NSTextStorage, NSMapTable, _UITextDragCaretView, UITextRange, UITextDropProposal, UIDropInteraction, UIView, UITargetedDragPreview, NSString, UIDragInteraction, UITextDraggableGeometrySameViewDropOperationResult, UIDragItem, UITextPasteController, NSArray;
@protocol UITextDraggableGeometry, UITextDropSupporting, UIDragSession, UITextDragSupporting, UITextDraggableGeometrySameViewDropOperation, UIDropSession, UITextDropPasteSession;

@interface UITextDragAssistant : NSObject <UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private, _UITextPasteProgressSupport, UITextPasteSessionDelegate, UITextDragDropSupport> {
    struct { unsigned char viewSupportsGhostedRanges : 1; unsigned char geometrySupportsSameViewOperations : 1; unsigned char shouldRestoreFirstResponder : 1; unsigned char draggingOngoing : 1; unsigned char handledCancelAnimation : 1; unsigned char restoreNonEditableAfterDrop : 1; unsigned char restoreSelectableAfterDrop : 1; unsigned char wasSelectableBeforeDrop : 1; unsigned char forceEditable : 1; unsigned char delegateSupportsProposalForDrop : 1; unsigned char delegateSupportsSessionDidUpdate : 1; unsigned char delegateSupportsRangeForDrop : 1; unsigned char delegateSupportsPositionForDrop : 1; unsigned char delegateSupportsWillMoveCaret : 1; unsigned char delegateSupportsDidMoveCaret : 1; unsigned char viewSupportsTextStorage : 1; unsigned char textStorageDidChange : 1; unsigned char dropPerformed : 1; unsigned char defaultDropHandling : 1; } _flags;
    id<UITextDraggableGeometry> _geometry;
    id<UIDragSession> _currentDragSession;
    UIDragInteraction *_currentDragInteraction;
    NSArray *_draggedTextRanges;
    UITextRange *_initialDragSelectedRange;
    struct CGPoint { double x; double y; } _initialDragLocation;
    NSArray *_movedItemsInView;
    NSMapTable *_targetedPreviewProviders;
    NSMapTable *_previewProviders;
    NSTextStorage *_observingStorage;
    id<UIDropSession> _currentDropSession;
    _UITextDragCaretView *_dropCaret;
    UITextRange *_currentDropRange;
    UIDragItem *_topmostDropItem;
    UITargetedDragPreview *_topmostDropPreview;
    UITextDropProposal *_currentDropProposal;
    UITextRange *_preDropSelectionRange;
    id<UITextDraggableGeometrySameViewDropOperation> _sameViewDropOperation;
    UITextDraggableGeometrySameViewDropOperationResult *_sameViewDropOperationResult;
    UITextPasteController *_dropPasteController;
    id<UITextDropPasteSession> _dropPasteSession;
    id /* block */ _delayedPreviewProvider;
}

@property (readonly, weak, nonatomic) UIView<UITextDragSupporting, UITextDropSupporting> *view;
@property (readonly, nonatomic) id<UITextDraggableGeometry> geometry;
@property (readonly, weak, nonatomic) UIDragInteraction *dragInteraction;
@property (readonly, weak, nonatomic) UIDropInteraction *dropInteraction;
@property (readonly, nonatomic, getter=isDragActive) BOOL dragActive;
@property (readonly, nonatomic, getter=isDropActive) BOOL dropActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (void)dragInteraction:(id)a0 session:(id)a1 willEndWithOperation:(unsigned long long)a2;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (void)_dropInteraction:(id)a0 delayedPreviewProviderForDroppingItem:(id)a1 previewProvider:(id /* block */)a2;
- (void)_textStorageDidProcessEditing;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (void)dragInteraction:(id)a0 session:(id)a1 didEndWithOperation:(unsigned long long)a2;
- (void)_initializeDragSession:(id)a0 withInteraction:(id)a1;
- (void)_stopObservingTextStorage;
- (id)_rangeInSession:(id)a0;
- (id)_suggestedProposalForRequest:(id)a0;
- (id)_textRangeForDraggingFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)textPasteSessionWillHidePasteResult:(id)a0;
- (BOOL)accessibilityCanDrag;
- (id)initWithDraggableOnlyView:(id)a0;
- (id)dropInteraction:(id)a0 previewForDroppingItem:(id)a1 withDefault:(id)a2;
- (long long)_dropInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (void)textPasteSessionDidEndPasting:(id)a0;
- (id)_itemsForDraggedRange:(id)a0;
- (void)_restoreResponderIfNeededForOperation:(unsigned long long)a0;
- (void)dropInteraction:(id)a0 concludeDrop:(id)a1;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (id)_shrinkingPreview:(id)a0 toPosition:(id)a1;
- (id)_containerViewForLiftPreviews;
- (long long)_textPasteRangeBehavior;
- (id)_accessibilityDraggableRanges;
- (id)_closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_dragInteraction:(id)a0 shouldDelayCompetingGestureRecognizer:(id)a1;
- (BOOL)_dragInteraction:(id)a0 competingGestureRecognizerShouldDelayLift:(id)a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (BOOL)_updateCurrentDropProposalInSession:(id)a0 usingRequest:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (id)_dropRequestWithRange:(id)a0 suggestedProposal:(id)a1 inSession:(id)a2;
- (void)textPasteSessionDidRevealPasteResult:(id)a0;
- (void)dragInteraction:(id)a0 item:(id)a1 willAnimateCancelWithAnimator:(id)a2;
- (void)installDragInteractionIfNeeded;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (id)_textPasteSelectableRangeForResult:(id)a0 fromRange:(id)a1;
- (void)notifyTextInteraction;
- (BOOL)_hasDraggedTextRange:(id)a0;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (void)_applyOptionsToGeometry;
- (void)dropInteraction:(id)a0 item:(id)a1 willAnimateDropWithAnimator:(id)a2;
- (long long)_dragInteraction:(id)a0 dataOwnerForAddingToSession:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)_performDropToRange:(id)a0 inSession:(id)a1;
- (void)_updateDropCaretToRange:(id)a0 session:(id)a1;
- (id)_previewForTopmostItem:(id)a0;
- (void).cxx_destruct;
- (void)_performSameViewOperation:(id)a0;
- (id)dragInteraction:(id)a0 previewForCancellingItem:(id)a1 withDefault:(id)a2;
- (id)_dropRequestWithRange:(id)a0 inSession:(id)a1;
- (id)dragInteraction:(id)a0 sessionForAddingItems:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)dragInteraction:(id)a0 sessionWillBegin:(id)a1;
- (void)_cleanupDrop;
- (void)_liftOrDrag:(long long)a0 didEndWithOperation:(unsigned long long)a1;
- (void)_forDraggedTextRangesDo:(id /* block */)a0;
- (void)_prepareSameViewOperation:(unsigned long long)a0 forItems:(id)a1 fromRanges:(id)a2 toRange:(id)a3;
- (id)_containerViewForDropPreviews;
- (void)invalidateDropCaret;
- (void)_addDraggedTextRangeForItems:(id)a0 defaultRange:(id)a1;
- (void)_ghostDraggedTextRanges:(BOOL)a0;
- (void)dragInteraction:(id)a0 willAnimateLiftWithAnimator:(id)a1 session:(id)a2;
- (void)dragInteraction:(id)a0 sessionDidMove:(id)a1;
- (BOOL)_dragInteractionShouldBecomeDraggingSourceDelegate:(id)a0;
- (BOOL)_viewHasOtherDragInteraction;
- (void)textPasteSessionWillBeginPasting:(id)a0;
- (id)dragInteraction:(id)a0 itemsForAddingToSession:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (id)initWithView:(id)a0 geometry:(id)a1;
- (id)_positionInSession:(id)a0;
- (BOOL)dragInteraction:(id)a0 prefersFullSizePreviewsForSession:(id)a1;
- (long long)_dragInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (void)installDropInteractionIfNeeded;
- (id)_previewForIrrelevantItemFromPreview:(id)a0;
- (long long)_dataOwnerForSession:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_clearDraggedTextRanges;

@end
