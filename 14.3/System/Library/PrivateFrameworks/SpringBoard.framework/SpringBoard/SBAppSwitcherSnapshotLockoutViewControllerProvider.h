@class NSMutableArray;

@interface SBAppSwitcherSnapshotLockoutViewControllerProvider : NSObject {
    NSMutableArray *_availableControllers;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_receivedMemoryWarning:(id)a0;
- (id)blockingViewControllerForBundleIdentifier:(id)a0 screenTimePolicy:(long long)a1;
- (void)recycleBlockingViewController:(id)a0;

@end
