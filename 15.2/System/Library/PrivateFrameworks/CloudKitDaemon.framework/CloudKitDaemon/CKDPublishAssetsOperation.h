@class NSArray, NSDictionary, NSMutableDictionary, NSOperation;
@protocol CKPublishAssetsOperationCallbacks;

@interface CKDPublishAssetsOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSDictionary *fileNamesByAssetFieldNames;
@property (nonatomic) unsigned long long requestedTTL;
@property (nonatomic) unsigned long long URLOptions;
@property (retain) NSOperation *fetchRecordsOperation;
@property (retain, nonatomic) NSMutableDictionary *fetchedRecordsByID;
@property (copy, nonatomic) id /* block */ assetPublishedBlock;
@property (retain, nonatomic) id<CKPublishAssetsOperationCallbacks> clientOperationCallbackProxy;

- (id)activityCreate;
- (id)nameForState:(unsigned long long)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (void)_fetchRecords;
- (void)_fetchPCSForRecords;
- (void)_dispatchAssetURLsForRecord:(id)a0 recordID:(id)a1 pcs:(struct _OpaquePCSShareProtection { } *)a2 error:(id)a3;

@end
