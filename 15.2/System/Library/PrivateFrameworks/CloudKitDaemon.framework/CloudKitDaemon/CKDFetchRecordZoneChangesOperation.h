@class CKServerChangeToken, NSData;

@interface CKDFetchRecordZoneChangesOperation : CKDFetchBatchedRecordsOperation

@property (nonatomic) long long changeTypes;
@property (nonatomic) BOOL clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
@property (retain, nonatomic) CKServerChangeToken *resultServerChangeToken;
@property (retain, nonatomic) NSData *resultClientChangeTokenData;
@property (nonatomic) long long resultStatus;
@property (copy, nonatomic) id /* block */ recordChangedBlock;
@property (copy, nonatomic) id /* block */ recordDeletedBlock;
@property (copy, nonatomic) id /* block */ serverChangeTokenUpdatedBlock;

- (id)pipeliningDescription;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)analyticsPayload;
- (void)_noteDeletedRecordWithID:(id)a0 recordType:(id)a1;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)_createAndConfigureURLRequestForZoneIDs:(id)a0 optionsByZoneID:(id)a1;
- (void)_noteChangedRecordWithID:(id)a0 record:(id)a1 error:(id)a2;
- (int)operationType;
- (void)_noteOperationBeginning;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)a0;
- (void)_noteOperationEnding;
- (void).cxx_destruct;
- (void)_noteOperationFinishedBlockEnd;
- (void)_noteCompletedURLRequest:(id)a0 withSchedulerInfo:(id)a1;

@end
