@class SBIconListViewDraggingDestinationDelegate, NSString, SBHIconEditingSettings, NSMapTable;

@interface SBIconListViewDraggingAppPolicyHandler : NSObject <SBIconListViewDraggingPolicyHandling> {
    NSMapTable *_dragContexts;
}

@property (weak, nonatomic) SBIconListViewDraggingDestinationDelegate *draggingDestinationDelegate;
@property (retain, nonatomic) SBHIconEditingSettings *iconEditingSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (id)init;
- (id)dropInteraction:(id)a0 previewForDroppingItem:(id)a1 withDefault:(id)a2;
- (void)dropInteraction:(id)a0 item:(id)a1 willAnimateDropWithAnimator:(id)a2;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void).cxx_destruct;
- (id)_dropInteraction:(id)a0 customSpringAnimationBehaviorForDroppingItem:(id)a1;
- (long long)dragPlacementForDropSession:(id)a0 iconListView:(id)a1 point:(struct CGPoint { double x0; double x1; })a2 icon:(id)a3 options:(unsigned long long)a4;
- (BOOL)allowsSpringLoadForSession:(id)a0 onIconView:(id)a1;
- (void)handleSpringLoadOnIconView:(id)a0;
- (void)_cancelDragPauseTimerForDropSession:(id)a0;
- (void)_dragPauseTimerFired:(id)a0;
- (void)_resetDragPauseTimerForPoint:(struct CGPoint { double x0; double x1; })a0 dropSession:(id)a1;
- (id)_iconForDragItem:(id)a0;
- (void)_updateDragPauseForDropSession:(id)a0;
- (id)_iconViewForDragItem:(id)a0 createIfNecessary:(BOOL)a1;
- (void)_cancelDragPauseTimers;
- (id)_destinationFolderIconViewForDragItem:(id)a0 iconIndexPath:(id *)a1 folderRelativeIconIndexPath:(id *)a2;

@end
