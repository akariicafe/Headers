@class NSString, NSMutableDictionary, IDSBatchIDQueryController, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PXIDSAddressQueryController : NSObject <IDSBatchIDQueryControllerDelegate> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_queries;
    NSMutableDictionary *_queryStateForAddress;
    IDSBatchIDQueryController *_idsBatchIDQueryController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (void)_callResultsHandlerForQueries:(id)a0;
- (void)_idStatusUpdatedForDestinations:(id)a0 service:(id)a1;
- (void)_performBatchQueryForAddresses:(id)a0 resultHandler:(id /* block */)a1;
- (void)performBatchQueryForAddresses:(id)a0 resultHandler:(id /* block */)a1;

@end
