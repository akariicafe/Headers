@interface SBLiveWindowResizeGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction

@property (readonly, nonatomic) long long selectedLayoutRole;
@property (readonly, nonatomic) unsigned long long selectedEdge;

- (long long)_gestureType;
- (void)_beginWithGesture:(id)a0;
- (BOOL)isLiveResize;

@end
