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
- (void)recentAppLayouts:(id)a0 didRemoveAppLayoutForFallingOffList:(id)a1;
- (void)removeAppLayouts:(id)a0;
- (id)appLayoutsForBundleIdentifier:(id)a0 includingHiddenAppLayouts:(BOOL)a1;
- (void)_warmUpIconsForRecentAppLayouts:(id)a0;
- (void)hide:(id)a0;
- (id)recentDisplayItemsForBundleIdentifier:(id)a0 includingHiddenAppLayouts:(BOOL)a1;
- (void)replaceAppLayout:(id)a0 withAppLayout:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)modifyWithDropContext:(id)a0;
- (unsigned long long)indexOfDisplayItem:(id)a0 visible:(BOOL)a1;
- (id)_recentAppLayoutsController;
- (void)dealloc;
- (void)_warmUpIconsForAppLayout:(id)a0;
- (void)addToFront:(id)a0;
- (id)initWithIconController:(id)a0 applicationController:(id)a1 recents:(id)a2;
- (void)addAppLayout:(id)a0 afterAppLayout:(id)a1;
- (long long)_adjustedIndexForVisibleAppLayoutAtIndex:(unsigned long long)a0;
- (void)addAppLayout:(id)a0 atIndex:(unsigned long long)a1;
- (id)appLayoutsIncludingHiddenAppLayouts:(BOOL)a0;

@end
