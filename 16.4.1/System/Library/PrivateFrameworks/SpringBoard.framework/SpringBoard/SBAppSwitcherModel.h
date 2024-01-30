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

- (void)replaceAppLayout:(id)a0 withAppLayout:(id)a1;
- (void)_warmUpIconsForAppLayout:(id)a0;
- (id)recentAppLayouts:(id)a0 willReplaceAppLayout:(id)a1 proposedReplacementAppLayout:(id)a2;
- (void)addAppLayout:(id)a0 afterAppLayout:(id)a1;
- (void)addToFront:(id)a0;
- (void)remove:(id)a0;
- (void)hide:(id)a0;
- (void)removeAppLayouts:(id)a0;
- (void)addAppLayout:(id)a0 atIndex:(unsigned long long)a1;
- (void)modifyWithDropContext:(id)a0;
- (id)initWithIconController:(id)a0 applicationController:(id)a1 recents:(id)a2;
- (id)appLayoutsIncludingHiddenAppLayouts:(BOOL)a0;
- (long long)_adjustedIndexForVisibleAppLayoutAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (id)recentAppLayouts:(id)a0 willAddAppLayout:(id)a1 replacingAppLayouts:(id)a2 removingAppLayouts:(id)a3;
- (void)_warmUpIconsForRecentAppLayouts:(id)a0;
- (id)_recentAppLayoutsController;
- (unsigned long long)indexOfDisplayItem:(id)a0 visible:(BOOL)a1;
- (id)appLayoutContainingDisplayItem:(id)a0 includingHiddenAppLayouts:(BOOL)a1;
- (id)recentDisplayItemsForBundleIdentifier:(id)a0 includingHiddenAppLayouts:(BOOL)a1;
- (id)init;
- (id)appLayoutsForBundleIdentifier:(id)a0 includingHiddenAppLayouts:(BOOL)a1;
- (void).cxx_destruct;
- (void)recentAppLayouts:(id)a0 didRemoveAppLayoutForFallingOffList:(id)a1;

@end
