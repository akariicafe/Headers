@class NSMapTable, NSDictionary, NSMutableDictionary, VNRPNTrackerEspressoResourcesCache, NSObject;
@protocol OS_dispatch_queue;

@interface VNTrackerManager : NSObject {
    NSDictionary *_trackerTypeToClassDictionary;
    NSMapTable *_trackerClassToNameMapTable;
    NSMutableDictionary *_liveTrackerCounter;
    NSObject<OS_dispatch_queue> *_trackingProcessingQueue;
    NSObject<OS_dispatch_queue> *_trackersCollectionManagementQueue;
    NSDictionary *_liveTrackerCounterLimit;
    NSMutableDictionary *_trackers;
    VNRPNTrackerEspressoResourcesCache *_trackerResourceCache;
}

- (void)_releaseTracker_NO_LOCK_DO_NOT_EXECUTE_DIRECTLY:(id)a0;
- (long long)_maximumTrackersOfType:(id)a0;
- (id)_getTracker:(id)a0;
- (id)_createTracker:(id)a0 type:(id)a1 options:(id)a2 error:(id *)a3;
- (id)init;
- (void).cxx_destruct;

@end
