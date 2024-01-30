@class FBDisplayLayoutTransition;

@interface UISystemShellApplication : UIApplication {
    FBDisplayLayoutTransition *_interfaceOrientationTransition;
    id _didFinishLaunchingObserver;
}

+ (BOOL)registerAsSystemApp;
+ (BOOL)rendersLocally;

- (long long)_interfaceOrientationRotationDirectionFromOrientation:(long long)a0 toOrientation:(long long)a1;
- (BOOL)_openURL:(id)a0;
- (BOOL)_saveSnapshotWithName:(id)a0;
- (BOOL)handleDoubleHeightStatusBarTapWithStyleOverride:(unsigned long long)a0;
- (void)resetIdleTimerAndUndim;
- (void)noteActiveInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (long long)startupInterfaceOrientation;
- (BOOL)isSuspendedEventsOnly;
- (BOOL)isSuspendedUnderLock;
- (BOOL)isFrontBoard;
- (BOOL)handleStatusBarHoverActionForRegion:(long long)a0;
- (BOOL)isSuspended;
- (BOOL)canOpenURL:(id)a0;
- (void)noteActiveInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithSettings:(id)a1 fromOrientation:(long long)a2;
- (id)init;
- (void).cxx_destruct;

@end
