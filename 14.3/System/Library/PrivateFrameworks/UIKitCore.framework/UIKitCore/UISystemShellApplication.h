@class FBDisplayLayoutTransition;

@interface UISystemShellApplication : UIApplication {
    FBDisplayLayoutTransition *_interfaceOrientationTransition;
    id _didFinishLaunchingObserver;
}

+ (BOOL)registerAsSystemApp;
+ (BOOL)rendersLocally;

- (BOOL)isFrontBoard;
- (void)noteActiveInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (long long)startupInterfaceOrientation;
- (BOOL)canOpenURL:(id)a0;
- (void)noteActiveInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithSettings:(id)a1 fromOrientation:(long long)a2;
- (void)resetIdleTimerAndUndim;
- (BOOL)handleDoubleHeightStatusBarTapWithStyleOverride:(int)a0;
- (BOOL)isSuspendedEventsOnly;
- (BOOL)_saveSnapshotWithName:(id)a0;
- (BOOL)isSuspendedUnderLock;
- (long long)_interfaceOrientationRotationDirectionFromOrientation:(long long)a0 toOrientation:(long long)a1;
- (BOOL)handleStatusBarHoverActionForRegion:(long long)a0;
- (BOOL)_openURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isSuspended;

@end
