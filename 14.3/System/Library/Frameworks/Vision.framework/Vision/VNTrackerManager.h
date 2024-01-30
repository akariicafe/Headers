@class NSMapTable, NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VNTrackerManager : NSObject {
    NSDictionary *_trackerTypeToClassDictionary;
    NSMapTable *_trackerClassToNameMapTable;
    NSMutableDictionary *_liveTrackerCounter;
    NSObject<OS_dispatch_queue> *_trackingProcessingQueue;
    NSObject<OS_dispatch_queue> *_trackersCollectionManagementQueue;
    NSDictionary *_liveTrackerCounterLimit;
    NSMutableDictionary *_trackers;
}

+ (void)releaseManager;
+ (void)releaseAllTrackers;
+ (id)manager;

- (id)init;
- (void).cxx_destruct;
- (long long)_maximumTrackersOfType:(id)a0;
- (id)_getTracker:(id)a0;
- (id)_createTracker:(id)a0 type:(id)a1 options:(id)a2 error:(id *)a3;
- (void)releaseTracker:(id)a0;
- (id)trackerWithOptions:(id)a0 error:(id *)a1;

@end
