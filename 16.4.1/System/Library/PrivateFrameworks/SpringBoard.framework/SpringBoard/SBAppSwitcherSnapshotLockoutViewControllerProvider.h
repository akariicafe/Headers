@class NSMutableArray;

@interface SBAppSwitcherSnapshotLockoutViewControllerProvider : NSObject {
    NSMutableArray *_availableControllers;
}

- (void)recycleBlockingViewController:(id)a0;
- (id)blockingViewControllerForBundleIdentifier:(id)a0 screenTimePolicy:(long long)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_receivedMemoryWarning:(id)a0;

@end
