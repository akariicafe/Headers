@class NSString, SBIconController, SBRecentAppLayouts;
@protocol SBAppSwitcherModelDelegate;

@interface SBAppSwitcherModel : NSObject <SBRecentAppLayoutsDelegate> {
    SBIconController *_iconController;
    SBRecentAppLayouts *_recents;
    id _recentsChangedNotificationObserver;
}

@property (class, readonly, nonatomic) NSString *appSwitcherHeaderIconImageDescriptorName;

@property (weak, nonatomic) id<SBAppSwitcherModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remove:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)recentDisplayItemsForBundleIdentifier:(id)a0 includingHiddenAppLayouts:(BOOL)a1;
- (void)addToFront:(id)a0;
- (void)hide:(id)a0;
- (id)_recentAppLayoutsController;
- (void)dealloc;
- (void)_warmUpIconsForRecentAppLayouts:(id)a0;
- (id)appLayoutsForBundleIdentifier:(id)a0 includingHiddenAppLayouts:(BOOL)a1;
- (void)recentAppLayouts:(id)a0 didRemoveAppLayoutForFallingOffList:(id)a1;
- (id)initWithIconController:(id)a0 applicationController:(id)a1 recents:(id)a2;
- (void)_warmUpIconsForAppLayout:(id)a0;
- (void)removeAppLayouts:(id)a0;
- (id)appLayoutsIncludingHiddenAppLayouts:(BOOL)a0;
- (void)replaceAppLayout:(id)a0 withAppLayout:(id)a1;

@end
