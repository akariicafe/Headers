@class NSString, NSMutableDictionary, GEOObserverHashTable, IDSBatchIDQueryController, NSMutableSet, NSTimer;

@interface MSPSharedTripCapabilityLevelFetcher : NSObject <IDSBatchIDQueryControllerDelegate> {
    GEOObserverHashTable *_observers;
    NSMutableDictionary *_identifierToShareETAStatus;
    NSMutableDictionary *_identifierToMessagesStatus;
    IDSBatchIDQueryController *_messagesBatchController;
    IDSBatchIDQueryController *_etaBatchController;
    NSMutableSet *_etaFetchQueue;
    NSMutableSet *_messagesFetchQueue;
    NSTimer *_retryAfterBackoffTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedFetcher;

- (void)notifyObservers;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (void)cancelCapabilityLevelRequestForContact:(id)a0;
- (unsigned long long)capabilityLevelForContact:(id)a0;
- (void)fetchCapabilityLevelForContact:(id)a0 timeout:(double)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)fetchQueueDidUpdate;
- (BOOL)processEtaDictionary:(id)a0;
- (BOOL)processMessagesDictionary:(id)a0;
- (void)requestCapabilityLevelsForContacts:(id)a0;

@end
