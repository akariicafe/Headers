@class NSArray, NSString, WBTabCollection, WBBrowserState;

@interface WBReadonlyTabCollection : NSObject <WBStateProvider> {
    WBTabCollection *_collection;
}

@property (readonly, nonatomic, getter=hasCompletedMigration) BOOL completedMigration;
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (readonly, nonatomic) WBBrowserState *browserState;
@property (readonly, nonatomic) WBBrowserState *lastSessionBrowserState;
@property (readonly, copy, nonatomic) NSArray *windowStates;
@property (readonly, nonatomic) int windowsFolderSpecialID;
@property (readonly, copy, nonatomic) NSArray *windows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) int pinnedTabsFolderID;
@property (readonly, nonatomic) int privatePinnedTabsFolderID;
@property (readonly, copy, nonatomic) NSArray *recentlyClosedTabs;
@property (readonly, copy, nonatomic) NSArray *tabGroups;
@property (nonatomic) unsigned long long maximumTabsPerGroup;

- (id)tabGroupWithUUID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)windowStateWithUUID:(id)a0;
- (id)windowWithUUID:(id)a0;
- (id)tabWithUUID:(id)a0;
- (id)tabsForTabGroup:(id)a0;

@end
