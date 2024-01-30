@class NSArray, NSString, NSHashTable, NSMapTable, NSMutableArray, SBPIPController;

@interface SBPIPWindowRootViewController : UIViewController <SBPIPContainerViewControllerObserver, SBUIActiveOrientationObserver> {
    SBPIPController *_pipController;
    NSMutableArray *_containerViewControllers;
    NSHashTable *_interfaceOrientationLockHashTable;
    NSMapTable *_containerViewControllerRequiredInterfaceOrientationMapTable;
    NSHashTable *_activeInterfaceOrientationObservers;
}

@property (nonatomic) long long activeInterfaceOrientation;
@property (readonly, nonatomic) NSArray *containerViewControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (void)removeActiveOrientationObserver:(id)a0;
- (void)removeContainerViewController:(id)a0;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (void)addActiveOrientationObserver:(id)a0;
- (void)viewDidLayoutSubviews;
- (long long)_overrideWindowActiveInterfaceOrientation;
- (long long)interfaceOrientationForContainerViewController:(id)a0;
- (void).cxx_destruct;
- (long long)_overrideInterfaceOrientationMechanics;
- (void)dealloc;
- (BOOL)shouldAutorotate;
- (void)hideContainersExcludingContainerForContentViewControllerAndTetheredOnes:(id)a0 animated:(BOOL)a1;
- (void)showAllContainersAnimated:(BOOL)a0;
- (void)containerViewControllerRequiredInterfaceOrientationDidChange:(id)a0;
- (void)acquireInterfaceOrientationLockForContainerViewController:(id)a0;
- (void)relinquishInterfaceOrientationLockForContainerViewController:(id)a0;
- (id)initWithPIPController:(id)a0;
- (void)addContainerViewController:(id)a0;
- (id)containerViewControllerForPictureInPictureContentViewController:(id)a0;
- (void)bringTetheredChildViewControllersToFront;
- (void)_layoutInterfaceOrientationUnlockedContainerViewControllersAndForceLayout:(BOOL)a0;
- (long long)_requiredInterfaceOrientationForContainerViewController:(id)a0;
- (void)_layoutContainerViewControllers:(id)a0 forceLayout:(BOOL)a1;
- (void)layoutForActiveInterfaceOrientation:(long long)a0 duration:(double)a1 fromOrientation:(long long)a2 forced:(BOOL)a3;
- (BOOL)_hasOngoingMorphRestore;
- (void)_bringPGContentViewControllerWithContentTypeToFront:(long long)a0;
- (long long)_interfaceOrientationForContainerViewController:(id)a0;

@end
