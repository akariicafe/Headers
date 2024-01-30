@class NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, TUIDSIDQueryController, TUIDSBatchIDQueryController;

@interface TUIDSLookupManager : NSObject <IDSBatchIDQueryControllerDelegate>

@property (class, readonly, nonatomic) TUIDSLookupManager *sharedManager;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<TUIDSIDQueryController> queryController;
@property (readonly, nonatomic) NSMutableDictionary *idsFaceTimeVideoStatuses;
@property (readonly, nonatomic) NSMutableDictionary *idsFaceTimeAudioStatuses;
@property (readonly, nonatomic) NSMutableDictionary *idsFaceTimeMultiwayStatuses;
@property (retain, nonatomic) id<TUIDSBatchIDQueryController> batchQuerySearchVideoController;
@property (retain, nonatomic) id<TUIDSBatchIDQueryController> batchQuerySearchAudioController;
@property (retain, nonatomic) id<TUIDSBatchIDQueryController> batchQuerySearchMultiwayController;
@property (copy, nonatomic) id /* block */ batchQueryControllerCreationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAnyDestinationAvailableInDestinations:(id)a0 usingCache:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (id)initWithQueryController:(id)a0;
- (void)cancelQueries;
- (BOOL)isFaceTimeVideoAvailableForAnyDestinationInDestinations:(id)a0;
- (BOOL)isFaceTimeAudioAvailableForAnyDestinationInDestinations:(id)a0;
- (BOOL)isFaceTimeMultiwayAvailableForAnyDestinationInDestinations:(id)a0;
- (BOOL)isFaceTimeVideoAvailableForItem:(id)a0;
- (BOOL)isFaceTimeAudioAvailableForItem:(id)a0;
- (BOOL)isFaceTimeMultiwayAvailableForItem:(id)a0;
- (void)beginQueryWithDestinations:(id)a0;

@end
