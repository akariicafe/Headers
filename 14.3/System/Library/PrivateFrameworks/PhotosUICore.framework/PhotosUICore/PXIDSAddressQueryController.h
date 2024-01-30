@class NSString, NSMutableDictionary, IDSBatchIDQueryController, NSMutableArray;

@interface PXIDSAddressQueryController : NSObject <IDSBatchIDQueryControllerDelegate> {
    NSMutableDictionary *_queryStateForAddress;
    NSMutableArray *_queries;
    IDSBatchIDQueryController *_idsBatchIDQueryController;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (void)performBatchQueryForAddresses:(id)a0 resultHandler:(id /* block */)a1;
- (void)_idStatusUpdatedForDestinations:(id)a0 service:(id)a1;

@end
