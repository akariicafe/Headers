@class NSArray, NSString, NSHashTable, NSMapTable, NSMutableArray;

@interface SBPIPWindowRootViewController : UIViewController <SBPIPContainerViewControllerObserver, SBUIActiveOrientationObserver> {
    NSMutableArray *_containerViewControllers;
    NSHashTable *_interfaceOrientationLockHashTable;
    NSMapTable *_containerViewControllerRequiredInterfaceOrientationMapTable;
}

@property (nonatomic) long long activeInterfaceOrientation;
@property (readonly, nonatomic) NSArray *containerViewControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)_overrideWindowActiveInterfaceOrientation;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldAutorotate;
- (long long)_overrideInterfaceOrientationMechanics;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (long long)interfaceOrientationForContainerViewController:(id)a0;
- (void)containerViewControllerAcquireInterfaceOrientationLock:(id)a0;
- (void)containerViewControllerRelinquishInterfaceOrientationLock:(id)a0;
- (void)containerViewControllerRequiredInterfaceOrientationDidChange:(id)a0;
- (void)addContainerViewController:(id)a0;
- (void)removeContainerViewController:(id)a0;
- (id)containerViewControllerForPictureInPictureViewController:(id)a0;
- (void)_layoutInterfaceOrientationUnlockedContainerViewControllersAndForceLayout:(BOOL)a0;
- (long long)_requiredInterfaceOrientationForContainerViewController:(id)a0;
- (void)_layoutContainerViewControllers:(id)a0 forceLayout:(BOOL)a1;
- (BOOL)_hasOngoingMorphRestore;
- (long long)_interfaceOrientationForContainerViewController:(id)a0;

@end
