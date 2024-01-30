@class NSUUID, NSString, NSHashTable, NSMutableDictionary, _HMContext, NSObject, NSNotificationCenter, HMFUnfairLock;
@protocol OS_dispatch_queue;

@interface HMCameraClipManager : NSObject <HMFLogging, HMFMessageReceiver>

@property (readonly) HMFUnfairLock *lock;
@property (readonly) _HMContext *context;
@property (readonly, copy) NSUUID *profileUniqueIdentifier;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSMutableDictionary *clipsByFetchUUID;
@property (readonly) NSMutableDictionary *significantEventsByFetchUUID;
@property (readonly) NSMutableDictionary *videoAssetContextsByClipUUID;
@property (readonly) NSHashTable *observers;
@property (copy) id /* block */ fetchClientFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)configure;
- (void)handleDaemonReconnectedNotification:(id)a0;
- (id)logIdentifier;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)unsubscribe;
- (void)subscribe;
- (void)dealloc;
- (void)performCloudPullWithCompletion:(id /* block */)a0;
- (id)initWithContext:(id)a0 profileUniqueIdentifier:(id)a1;
- (id)initWithContext:(id)a0 profileUniqueIdentifier:(id)a1 notificationCenter:(id)a2;
- (id)videoSegmentsAssetContextForClip:(id)a0;
- (void)fetchClipWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchClipForSignificantEventWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllClipsWithCompletion:(id /* block */)a0;
- (void)fetchClipsWithDateInterval:(id)a0 limit:(unsigned long long)a1 shouldOrderAscending:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchClipsWithDateInterval:(id)a0 quality:(long long)a1 limit:(unsigned long long)a2 shouldOrderAscending:(BOOL)a3 completion:(id /* block */)a4;
- (void)fetchCountOfAllClipsWithCompletion:(id /* block */)a0;
- (void)fetchCountOfClipsWithDateInterval:(id)a0 completion:(id /* block */)a1;
- (void)fetchCountOfClipsWithDateInterval:(id)a0 quality:(long long)a1 completion:(id /* block */)a2;
- (void)fetchHeroFrameDataRepresentationForClipWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchHeroFrameURLOfClipWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchFaceCropDataRepresentationForSignificantEventWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchFaceCropURLForSignificantEventWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchSignificantEventsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllSignificantEventsWithCompletion:(id /* block */)a0;
- (void)fetchSignificantEventsWithDateInterval:(id)a0 limit:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchSignificantEventsWithDateInterval:(id)a0 limit:(unsigned long long)a1 shouldOrderAscending:(BOOL)a2 completion:(id /* block */)a3;
- (void)deleteClipWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)deleteAllClipsWithCompletionHandler:(id /* block */)a0;
- (void)handleFaceMisclassificationForSignificantEvent:(id)a0 completion:(id /* block */)a1;
- (void)donateClipsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchPosterFramesAssetContextForClip:(id)a0 completion:(id /* block */)a1;
- (void)fetchVideoSegmentsAssetContextForClip:(id)a0 completion:(id /* block */)a1;
- (void)importClipsWithImportData:(id)a0 completion:(id /* block */)a1;
- (void)updateVideoSegmentsAssetContextForClip:(id)a0;
- (void)handleDidChangeClipsMessage:(id)a0;
- (void)handleDidChangeSignificantEventsMessage:(id)a0;

@end
