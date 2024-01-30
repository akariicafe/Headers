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
@property (readonly, copy, nonatomic) NSArray *tabGroups;
@property (readonly, nonatomic) int pinnedTabsFolderID;
@property (readonly, nonatomic) int privatePinnedTabsFolderID;
@property (nonatomic) unsigned long long maximumTabsPerGroup;

- (id)windowWithUUID:(id)a0;
- (void)disableSuddenTerminationForPendingChanges;
- (id)tabGroupWithUUID:(id)a0;
- (void)waitForPendingChanges;
- (id)tabsForTabGroup:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)tabWithUUID:(id)a0;
- (id)windowStateWithUUID:(id)a0;

@end
