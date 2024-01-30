@class NSString, NSArray, NSSet, CKDRecordCache, NSDictionary, NSObject, NSMutableArray, CKDRecordFetchAggregator;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CKDFetchBatchedRecordsOperation : CKDDatabaseOperation <CKDOperationPipelining>

@property (retain, nonatomic) NSArray *recordZoneIDs;
@property (retain, nonatomic) NSDictionary *configurationsByRecordZoneID;
@property (nonatomic) unsigned long long numRequestsSent;
@property (retain, nonatomic) CKDRecordFetchAggregator *recordFetcher;
@property (retain, nonatomic) NSMutableArray *requestInfos;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) BOOL forcePCSDecryptionAttempt;
@property (nonatomic) BOOL shouldReportAllPerItemFailures;
@property (readonly, nonatomic) CKDRecordCache *recordCache;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup;
@property (nonatomic) BOOL shouldFetchAssetContents;
@property (nonatomic) BOOL fetchAllChanges;
@property (retain, nonatomic) NSSet *desiredAssetKeys;
@property (readonly, nonatomic) NSString *pipeliningDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void).cxx_destruct;
- (void)main;
- (id)relevantZoneIDs;
- (BOOL)supportsClearAssetEncryption;
- (void)_noteCompletedURLRequest:(id)a0 withSchedulerInfo:(id)a1;
- (void)_noteChangedRecordWithID:(id)a0 record:(id)a1 error:(id)a2;
- (id)_possiblyWrapError:(id)a0 forRecordWithID:(id)a1 withCode:(long long)a2 format:(id)a3;
- (void)_noteDeletedRecordWithID:(id)a0 recordType:(id)a1;
- (id)_createAndConfigureURLRequestForZoneIDs:(id)a0 optionsByZoneID:(id)a1;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)a0;
- (void)_sendFetchChangesRequestForZoneIDs:(id)a0 withOptions:(id)a1 previousRequestSchedulerInfo:(id)a2;
- (void)_handleFetchChangesRequestFinishedWithSchedulerInfo:(id)a0;
- (void)_noteOperationBeginning;
- (void)_noteOperationFinishedBlockEnd;
- (void)_handleChangedRecords:(id)a0 perRequestSchedulerInfo:(id)a1;
- (void)_handleRecordDelete:(id)a0 recordType:(id)a1 perRequestSchedulerInfo:(id)a2;
- (void)_noteOperationEnding;

@end
