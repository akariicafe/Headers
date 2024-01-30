@class TabDocumentDropHandler, NSString, NSMapTable;
@protocol UIDragSession, TabDocumentDragDropDataSource;

@interface TabDragDropInteractionController : NSObject <UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private, UIDragInteractionDelegate, UIDropInteractionDelegate, UIContextMenuInteractionDelegate> {
    NSMapTable *_placeholderDocumentsForSessions;
    NSMapTable *_insertedTabsForDragItems;
    unsigned long long _dropAnimationCount;
    NSMapTable *_hasHiddenDocumentsForDragSessions;
    id<UIDragSession> _pendingDragSession;
}

@property (readonly, weak, nonatomic) id<TabDocumentDragDropDataSource> dataSource;
@property (readonly, nonatomic) TabDocumentDropHandler *dropHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (void)dragInteraction:(id)a0 session:(id)a1 willEndWithOperation:(unsigned long long)a2;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (void)dragInteraction:(id)a0 session:(id)a1 willAddItems:(id)a2 forInteraction:(id)a3;
- (void)_dragInteractionDidCancelLiftWithoutDragging:(id)a0;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (id)dropInteraction:(id)a0 previewForDroppingItem:(id)a1 withDefault:(id)a2;
- (long long)_dropInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void)_cleanUpDragPreviewForSesssion:(id)a0;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (BOOL)_shouldMovePlaceholderItem:(id)a0 overTargetItem:(id)a1 withDropLocation:(struct CGPoint { double x0; double x1; })a2 interaction:(id)a3;
- (id)_tabCollectionItemAtPoint:(struct CGPoint { double x0; double x1; })a0 interaction:(id)a1;
- (BOOL)_tabViewIsFilteringTabs:(id)a0;
- (void)_unhideTabDocumentsForLocalDragSession:(id)a0;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (id)_viewForTransitionToItem:(id)a0 withTabCollectionView:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (id)initWithDataSource:(id)a0 dropHandler:(id)a1;
- (void)dropInteraction:(id)a0 item:(id)a1 willAnimateDropWithAnimator:(id)a2;
- (long long)_dragInteraction:(id)a0 dataOwnerForAddingToSession:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (void).cxx_destruct;
- (void)dragInteraction:(id)a0 sessionWillBegin:(id)a1;
- (id)_autoscrollerForInteraction:(id)a0;
- (BOOL)_canOpenInCurrentTabForSession:(id)a0 tabView:(id)a1;
- (void)_cleanUpDropPlaceholderForSession:(id)a0 interaction:(id)a1;
- (id)_insertPlaceholderTabIfNeededForSession:(id)a0 interaction:(id)a1;
- (id)_newDragItemsAtPoint:(struct CGPoint { double x0; double x1; })a0 excludingTabDocuments:(id)a1 interaction:(id)a2;
- (id)dragInteraction:(id)a0 itemsForAddingToSession:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (void)_transitionToDragState:(long long)a0 fromDragState:(long long)a1 forTabCollectionItemsInSession:(id)a2 interaction:(id)a3;
- (BOOL)dragInteraction:(id)a0 prefersFullSizePreviewsForSession:(id)a1;
- (long long)_dragInteraction:(id)a0 dataOwnerForSession:(id)a1;

@end
