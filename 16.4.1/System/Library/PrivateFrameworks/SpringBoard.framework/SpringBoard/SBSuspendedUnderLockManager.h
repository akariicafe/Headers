@class FBWorkspaceEventQueue;
@protocol SBSuspendedUnderLockManagerDelegate;

@interface SBSuspendedUnderLockManager : NSObject {
    FBWorkspaceEventQueue *_eventQueue;
    BOOL _eventQueue_suspendedUnderLock;
}

@property (weak, nonatomic) id<SBSuspendedUnderLockManagerDelegate> delegate;
@property (nonatomic, getter=isSuspendedUnderLock) BOOL suspendedUnderLock;

- (BOOL)_shouldBeBackgroundUnderLockForScene:(id)a0 withSettings:(id)a1;
- (BOOL)_shouldPutSceneUnderLock:(id)a0;
- (id)initWithDelegate:(id)a0 eventQueue:(id)a1;
- (void)setSuspendedUnderLock:(BOOL)a0 alongsideWillChangeBlock:(id /* block */)a1 alongsideDidChangeBlock:(id /* block */)a2;
- (void)interceptUpdateForScene:(id)a0 withNewSettings:(id)a1;
- (void).cxx_destruct;

@end
