@class FBDisplayLayoutTransition;

@interface UISystemShellApplication : UIApplication {
    FBDisplayLayoutTransition *_interfaceOrientationTransition;
    id _didFinishLaunchingObserver;
}

+ (BOOL)registerAsSystemApp;
+ (BOOL)rendersLocally;

- (BOOL)_saveSnapshotWithName:(id)a0;
- (BOOL)isSuspended;
- (BOOL)isSuspendedEventsOnly;
- (BOOL)isSuspendedUnderLock;
- (void)resetIdleTimerAndUndim;
- (void)noteActiveInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithSettings:(id)a1 fromOrientation:(long long)a2;
- (long long)startupInterfaceOrientation;
- (BOOL)isFrontBoard;
- (BOOL)_openURL:(id)a0;
- (BOOL)handleStatusBarHoverActionForRegion:(long long)a0;
- (void)noteActiveInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (BOOL)handleDoubleHeightStatusBarTapWithStyleOverride:(unsigned long long)a0;
- (BOOL)canOpenURL:(id)a0;
- (long long)_interfaceOrientationRotationDirectionFromOrientation:(long long)a0 toOrientation:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
