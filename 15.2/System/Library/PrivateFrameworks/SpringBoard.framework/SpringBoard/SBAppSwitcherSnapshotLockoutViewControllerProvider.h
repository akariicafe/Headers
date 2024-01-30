@class NSMutableArray;

@interface SBAppSwitcherSnapshotLockoutViewControllerProvider : NSObject {
    NSMutableArray *_availableControllers;
}

- (void).cxx_destruct;
- (id)init;
- (void)recycleBlockingViewController:(id)a0;
- (void)dealloc;
- (id)blockingViewControllerForBundleIdentifier:(id)a0 screenTimePolicy:(long long)a1;
- (void)_receivedMemoryWarning:(id)a0;

@end
