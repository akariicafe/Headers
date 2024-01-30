@class HKDevice, NSString, NSUUID, HKTaskServerProxyProvider, HKHealthStore, HKRetryableOperation, NSMutableDictionary, NSObject, NSMutableArray, HKQuantityType, HKDataCollectorCollectionConfiguration;
@protocol OS_dispatch_queue, HKDataCollectorDelegate, OS_dispatch_source;

@interface HKDataCollector : NSObject <_HKXPCExportable, HKDataCollectorClientInterface> {
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
    HKHealthStore *_healthStore;
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    HKRetryableOperation *_retryableOperation;
    long long _totalDatumCount;
    BOOL _delegateRespondsToFlushRequest;
    NSUUID *_registrationUUID;
    HKDataCollectorCollectionConfiguration *_collectionConfiguration;
    double _unitTest_maxDatumAgeOverride;
    double _unitTest_clientFlushRequestTimeoutOverride;
    id /* block */ _unitTest_registrationCompleteHandler;
    BOOL _shouldFlushAll;
    NSMutableArray *_flushRequests;
    NSMutableArray *_pendingBatches;
    NSMutableDictionary *_unconfirmedBatchesByUUID;
    NSMutableDictionary *_unpersistedBatchesByUUID;
    NSObject<OS_dispatch_source> *_reconsiderationSource;
    BOOL _requiresRegistration;
    BOOL _hasResumed;
    BOOL _invalidated;
    id /* block */ _resumeCompletion;
    id /* block */ _finishCompletion;
}

@property (readonly, copy) HKQuantityType *quantityType;
@property (readonly, copy) HKDevice *device;
@property (readonly, copy) NSString *bundleIdentifier;
@property (weak, nonatomic) id<HKDataCollectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;

- (void)connectionInvalidated;
- (void)clientRemote_synchronizeWithCompletion:(id /* block */)a0;
- (void)_queue_sendBatch:(id)a0;
- (void)clientRemote_beginCollectionWithConfiguration:(id)a0 lastPersistedDatum:(id)a1 registrationUUID:(id)a2;
- (void).cxx_destruct;
- (BOOL)_datumsInDateOrder:(id)a0 secondDatum:(id)a1;
- (id)remoteInterface;
- (id)unitTest_unpersistedBatches;
- (void)connectionInterrupted;
- (void)_queue_pruneOldDatums;
- (void)_queue_insertBatchForDatums:(id)a0 device:(id)a1 metadata:(id)a2 completion:(id /* block */)a3;
- (id /* block */)_combineCompletion:(id /* block */)a0 withCompletion:(id /* block */)a1;
- (id)initWithHealthStore:(id)a0 bundleIdentifier:(id)a1 quantityType:(id)a2;
- (void)insertDatums:(id)a0 device:(id)a1 metadata:(id)a2 completion:(id /* block */)a3;
- (void)finishWithCompletion:(id /* block */)a0;
- (id)unitTest_unconfirmedBatches;
- (void)_queue_considerSendingBatches;
- (id)exportedInterface;
- (void)clientRemote_collectThroughDate:(id)a0 completion:(id /* block */)a1;
- (void)clientRemote_collectionConfigurationDidChange:(id)a0;
- (void)clientRemote_receivedBatch:(id)a0 error:(id)a1;
- (id)_prunedBatch:(id)a0 maximumLength:(long long)a1;
- (void)_requestRegistration;
- (void)unitTest_setMaxDatumAgeOverride:(double)a0;
- (void)_queue_considerCompletingFlushRequests;
- (void)unitTest_setClientFlushRequestTimeoutOverride:(double)a0;
- (void)_queue_checkForFinish;
- (void)_queue_updateReconsiderationTimer;
- (void)clientRemote_finishedPersistenceForBatch:(id)a0 error:(id)a1;
- (void)_queue_taskServer_insertDatums:(id)a0 device:(id)a1 metadata:(id)a2 batchUUID:(id)a3 completion:(id /* block */)a4;
- (void)unitTest_setRegistrationCompleteHandler:(id /* block */)a0;
- (BOOL)_validateDatums:(id)a0 error:(out id *)a1;
- (void)resumeWithCompletion:(id /* block */)a0;
- (id)_timerForClientFlushRequest:(id)a0;
- (id)unitTest_pendingBatches;
- (void)_removeBatch:(id)a0;
- (void)_queue_requestRegistration;

@end
