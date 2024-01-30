@class HMCameraClipManager, NSString, _HMContext, HMFUnfairLock, NSHashTable, HMCameraRecordingReachabilityEventManager;

@interface HMCameraRecordingEventManager : NSObject <HMCameraClipManagerObserver, HMCameraRecordingReachabilityEventManagerObserver, HMFLogging>

@property (readonly) _HMContext *context;
@property (readonly) HMCameraRecordingReachabilityEventManager *reachabilityEventManager;
@property (readonly) HMCameraClipManager *clipManager;
@property (readonly) HMFUnfairLock *lock;
@property (readonly) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)performCloudPullWithCompletion:(id /* block */)a0;
- (void)reachabilityEventManager:(id)a0 didUpdateReachabilityEvents:(id)a1;
- (void)reachabilityEventManager:(id)a0 didRemoveReachabilityEventsWithUUIDs:(id)a1;
- (void)clipManager:(id)a0 didUpdateClips:(id)a1;
- (void)clipManager:(id)a0 didRemoveClipsWithUUIDs:(id)a1;
- (id)initWithContext:(id)a0 clipManager:(id)a1 reachabilityEventManager:(id)a2;
- (void)fetchEventsWithDateInterval:(id)a0 limit:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchEventsWithDateInterval:(id)a0 limit:(unsigned long long)a1 shouldOrderAscending:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchAllEventsWithCompletion:(id /* block */)a0;
- (void)fetchCountOfEventsWithDateInterval:(id)a0 completion:(id /* block */)a1;
- (void)fetchCountOfAllEventsWithCompletion:(id /* block */)a0;
- (void)deleteAllEventsWithCompletionHandler:(id /* block */)a0;
- (id)mergedRecordingEventsWithRecordingEvents1:(id)a0 recordingEvents2:(id)a1 limit:(unsigned long long)a2 shouldOrderAscending:(BOOL)a3;
- (void)notifyObserversOfUpdatedEvents:(id)a0 removedEventsWithUUIDs:(id)a1;

@end
