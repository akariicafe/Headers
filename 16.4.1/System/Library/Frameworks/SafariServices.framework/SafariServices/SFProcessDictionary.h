@class NSCountedSet, NSMutableDictionary, NSMutableSet, NSMutableArray, RBSProcessMonitor;

@interface SFProcessDictionary : NSObject {
    NSMutableSet *_pidsPendingTermination;
    RBSProcessMonitor *_processMonitor;
    NSMutableArray *_recentlyReferencedPIDs;
    NSCountedSet *_references;
    NSMutableDictionary *_values;
}

@property (readonly, nonatomic) unsigned long long cacheCapacity;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_handleProcessStateUpdate:(int)a0 state:(unsigned char)a1;
- (void)_removeUnreferencedObjectsIfNeeded;
- (void)_removeValuesForPID:(id)a0;
- (void)_updateInterestedApplications;
- (void)decrementReferenceForPID:(int)a0;
- (id)incrementReferenceForPID:(int)a0 additionalKey:(id)a1 valueCreationBlock:(id /* block */)a2;
- (id)incrementReferenceForPID:(int)a0 valueCreationBlock:(id /* block */)a1;
- (id)initWithCacheCapacity:(unsigned long long)a0;

@end
