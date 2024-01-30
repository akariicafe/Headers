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

- (void)_handleApplicationStateUpdate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)decrementReferenceForPID:(int)a0;
- (id)incrementReferenceForPID:(int)a0 bundleIdentifier:(id)a1 valueCreationBlock:(id /* block */)a2;
- (id)initWithCacheCapacity:(unsigned long long)a0;
- (void)_handleProcessTermination:(int)a0;
- (void)_removeValueForPID:(id)a0;
- (void)_updateInterestedApplications;
- (void)_removeUnreferencedObjectsIfNeeded;

@end
