@class NSString, TULocked, NSObject;
@protocol OS_dispatch_queue, TUIDSIDQueryController, TUIDSBatchIDQueryController;

@interface TUIDSLookupManager : NSObject <IDSBatchIDQueryControllerDelegate>

@property (class, readonly, nonatomic) TUIDSLookupManager *sharedManager;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<TUIDSIDQueryController> queryController;
@property (readonly, nonatomic) TULocked *idsFaceTimeVideoStatuses;
@property (readonly, nonatomic) TULocked *idsFaceTimeAudioStatuses;
@property (readonly, nonatomic) TULocked *idsFaceTimeMultiwayStatuses;
@property (readonly, nonatomic) TULocked *idsModernStatuses;
@property (readonly, nonatomic) TULocked *idsWebCapableStatuses;
@property (retain, nonatomic) id<TUIDSBatchIDQueryController> batchQuerySearchVideoController;
@property (retain, nonatomic) id<TUIDSBatchIDQueryController> batchQuerySearchAudioController;
@property (retain, nonatomic) id<TUIDSBatchIDQueryController> batchQuerySearchMultiwayController;
@property (copy, nonatomic) id /* block */ batchQueryControllerCreationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAnyDestinationAvailableInDestinations:(id)a0 usingCache:(id)a1;
+ (long long)idsServiceAvailabilityForDestination:(id)a0 usingCache:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (void)dealloc;
- (id)initWithQueryController:(id)a0;
- (void)cancelQueries;
- (BOOL)isFaceTimeVideoAvailableForAnyDestinationInDestinations:(id)a0;
- (BOOL)isFaceTimeAudioAvailableForAnyDestinationInDestinations:(id)a0;
- (BOOL)isFaceTimeMultiwayAvailableForAnyDestinationInDestinations:(id)a0;
- (void)beginQueryWithDestination:(id)a0 onService:(id)a1;
- (void)handleIDSQueryResultWithDestinationStatus:(id)a0 onService:(id)a1;
- (void)beginCachedQueryWithDestinations:(id)a0 onService:(id)a1;
- (void)postStatusChangedNotification;
- (void)filteredDestinationForMultiway:(id)a0 completionBlock:(id /* block */)a1;
- (void)queryHasEndpointWithCapabilities:(id)a0 forMultiwayDestinations:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)isFaceTimeVideoAvailableForItem:(id)a0;
- (BOOL)isFaceTimeAudioAvailableForItem:(id)a0;
- (BOOL)isFaceTimeMultiwayAvailableForItem:(id)a0;
- (long long)faceTimeAudioAvailabilityForDestination:(id)a0;
- (long long)faceTimeVideoAvailabilityForDestination:(id)a0;
- (long long)faceTimeMultiwayAvailabilityForDestination:(id)a0;
- (BOOL)isModernFaceTimeAvailableForDestination:(id)a0;
- (BOOL)isWebCapableFaceTimeAvailableForDestination:(id)a0;
- (void)beginQueryWithDestinations:(id)a0;
- (void)beginBatchQueryWithDestinations:(id)a0;
- (void)beginCachedQueryWithDestinations:(id)a0;
- (void)queryHasWebOnlyEndpointsForDestinations:(id)a0 completionBlock:(id /* block */)a1;

@end
