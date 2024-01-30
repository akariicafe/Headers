@class NSMutableDictionary;

@interface DOCUserInterfaceStateStore : NSObject

@property (class, readonly) DOCUserInterfaceStateStore *sharedStore;

@property (retain) NSMutableDictionary *uiStateMap;

- (id)init;
- (void).cxx_destruct;
- (id)docUserDefaults;
- (id)interfaceStateForConfiguration:(id)a0;
- (id)_loadUserInterfaceStateFromDefaultsForConfiguration:(id)a0;
- (id)_mostRecentInterfaceStateForConfiguration:(id)a0;
- (void)_pruneOldState;
- (id)_sortedInterfaceStateKeys;
- (void)_writeMostRecentUserInterfaceStateToDefaultsForConfiguration:(id)a0;
- (void)_writeUserInterfaceStateToDefaultsForConfiguration:(id)a0;
- (void)purgeApplicationStateForIdentifiers:(id)a0 configuration:(id)a1;
- (void)purgeStateForConfiguration:(id)a0;
- (void)updateInterfaceState:(id)a0 forConfiguration:(id)a1;

@end
