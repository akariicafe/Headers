@class CKQueryCursor, NSString, NSSet, NSDictionary, NSMutableArray, CKRecordZoneID, NSObject, CKDRecordFetchAggregator, CKQuery;
@protocol OS_dispatch_group, CKQueryOperationCallbacks, OS_dispatch_queue;

@interface CKDQueryOperation : CKDDatabaseOperation <CKDOperationPipelining>

@property (retain, nonatomic) NSSet *desiredKeySet;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKDRecordFetchAggregator *recordFetcher;
@property (retain, nonatomic) CKQueryCursor *resultsCursor;
@property (nonatomic) BOOL fetchAllResults;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup;
@property (nonatomic) unsigned long long numRequestsSent;
@property (retain, nonatomic) NSMutableArray *requestInfos;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByKey;
@property (nonatomic) BOOL hasCalledQueryCursorUpdatedBlock;
@property (retain, nonatomic) id<CKQueryOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKQuery *query;
@property (readonly, nonatomic) CKQueryCursor *cursor;
@property (readonly, nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) id /* block */ recordFetchCompletionBlock;
@property (copy, nonatomic) id /* block */ queryCursorUpdatedBlock;
@property (readonly, nonatomic) NSString *pipeliningDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityCreate;
- (id)relevantZoneIDs;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)_sendQueryRequestWithCursor:(id)a0 previousRequestSchedulerInfo:(id)a1;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (void)_handleQueryRequestFinishedWithSchedulerInfo:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (void)_handleRecordResponses:(id)a0 perRequestSchedulerInfo:(id)a1;
- (id)_wrapError:(id)a0 format:(id)a1;

@end
