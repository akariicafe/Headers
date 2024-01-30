@interface SBWindowDragGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction

@property (readonly, nonatomic, getter=isDraggingFromContinuousExposeStrips) BOOL draggingFromContinuousExposeStrips;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } locationInSelectedDisplayItem;
@property (readonly, nonatomic) struct CGSize { double width; double height; } sizeOfSelectedDisplayItem;

- (long long)_gestureType;
- (void)_beginWithGesture:(id)a0;
- (void)_finishWithGesture:(id)a0;

@end
