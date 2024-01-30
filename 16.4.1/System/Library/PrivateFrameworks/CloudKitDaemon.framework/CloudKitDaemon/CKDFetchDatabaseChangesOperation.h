@class CKServerChangeToken, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_group, CKFetchDatabaseChangesOperationCallbacks, OS_dispatch_queue;

@interface CKDFetchDatabaseChangesOperation : CKDDatabaseOperation <CKDOperationPipelining>

@property (retain, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) BOOL fetchAllChanges;
@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property (nonatomic) long long status;
@property (nonatomic) unsigned long long numRequestsSent;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchZonesGroup;
@property (retain, nonatomic) NSMutableArray *requestInfos;
@property (retain, nonatomic) id<CKFetchDatabaseChangesOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ recordZoneWithIDChangedBlock;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasDeletedBlock;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasPurgedBlock;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasDeletedDueToEncryptedDataResetBlock;
@property (copy, nonatomic) id /* block */ serverChangeTokenUpdatedBlock;
@property (readonly, nonatomic) NSString *pipeliningDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_finishOnCallbackQueueWithError:(id)a0;
- (int)operationType;
- (id)analyticsPayload;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)_handleFetchDatabaseChangesRequestFinishedWithSchedulerInfo:(id)a0;
- (void)main;
- (void)_handleAnonymousZoneDataObjects:(id)a0 schedulerInfo:(id)a1;
- (BOOL)shouldReturnServerChangeTokensToAdopter;
- (void)_sendFetchDatabaseChangesRequestWithChangeToken:(id)a0 previousRequestSchedulerInfo:(id)a1;
- (void).cxx_destruct;

@end
