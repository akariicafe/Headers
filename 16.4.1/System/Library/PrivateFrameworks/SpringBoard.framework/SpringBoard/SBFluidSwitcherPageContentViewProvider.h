@class NSString, SBAppSwitcherSnapshotLockoutViewControllerProvider, NSMapTable, NSMutableDictionary, NSMutableArray, SBAppSwitcherSnapshotImageCache;
@protocol SBFluidSwitcherPageContentViewProviderDelegate;

@interface SBFluidSwitcherPageContentViewProvider : NSObject <SBAppSwitcherTransientOverlayPageContentViewDelegate> {
    SBAppSwitcherSnapshotImageCache *_snapshotCache;
    SBAppSwitcherSnapshotLockoutViewControllerProvider *_lockoutVCProvider;
    NSMapTable *_pageContentViewToTransientOverlayViewController;
    NSMutableArray *_transientOverlayPageContentViews;
    NSMutableDictionary *_switcherServiceViewControllerMap;
}

@property (weak, nonatomic) id<SBFluidSwitcherPageContentViewProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)relinquishTransientOverlayViewController:(id)a0;
- (void)acquiredViewController:(id)a0 forTransientOverlayAppLayout:(id)a1;
- (void)_applyTransientOverlayViewController:(id)a0 toPageContentView:(id)a1;
- (id)_containerViewController;
- (long long)_interfaceOrientation;
- (void)appSwitcherTransientOverlayPageContentViewDidChangeActive:(id)a0;
- (long long)_preferredContentInterfaceOrientationForViewController:(id)a0 preferredInterfaceOrientation:(long long)a1;
- (id)_snapshotViewDelegate;
- (BOOL)isSuitableForRecycledItemContainer:(id)a0;
- (void)appSwitcherTransientOverlayPageContentViewDidChangeContainerOrientation:(id)a0;
- (id)pageContentViewForAppLayout:(id)a0 setActive:(BOOL)a1;
- (id)initWithDelegate:(id)a0 snapshotCache:(id)a1 lockoutViewProvider:(id)a2;
- (id)_snapshotViewForAppLayout:(id)a0 setActive:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_pageViewSizeForAppLayout:(id)a0;
- (void)_relinquishTransientOverlayViewController:(id)a0 forPageContentView:(id)a1;
- (id)existingTransientOverlayViewControllerForAppLayout:(id)a0;
- (id)_viewForService:(id)a0 appLayout:(id)a1;
- (id)init;
- (void)purgePageContentViewForAppLayout:(id)a0;
- (void).cxx_destruct;

@end
