@class NSCountedSet, NSMutableDictionary, BKSApplicationStateMonitor, NSMutableSet, NSMutableArray;

@interface SFProcessDictionary : NSObject {
    NSMutableDictionary *_pidToBundleIdentifierMap;
    NSMutableSet *_pidsPendingTermination;
    NSMutableArray *_recentlyReferencedPIDs;
    NSCountedSet *_references;
    BKSApplicationStateMonitor *_stateMonitor;
    NSMutableDictionary *_values;
}

@property (readonly, nonatomic) unsigned long long cacheCapacity;

- (id)init;
- (void)_handleProcessTermination:(int)a0;
- (void)_removeValueForPID:(id)a0;
- (void)_updateInterestedApplications;
- (void).cxx_destruct;
- (id)incrementReferenceForPID:(int)a0 bundleIdentifier:(id)a1 valueCreationBlock:(id /* block */)a2;
- (void)_removeUnreferencedObjectsIfNeeded;
- (void)dealloc;
- (id)initWithCacheCapacity:(unsigned long long)a0;
- (void)_handleApplicationStateUpdate:(id)a0;
- (void)decrementReferenceForPID:(int)a0;

@end
