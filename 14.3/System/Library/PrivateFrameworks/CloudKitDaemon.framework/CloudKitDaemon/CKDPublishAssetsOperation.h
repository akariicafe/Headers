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

- (void)cancel;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void).cxx_destruct;
- (id)nameForState:(unsigned long long)a0;
- (BOOL)makeStateTransition;
- (void)main;
- (void)_fetchRecords;
- (void)_fetchPCSForRecords;
- (void)_dispatchAssetURLsForRecord:(id)a0 recordID:(id)a1 pcs:(struct _OpaquePCSShareProtection { } *)a2 error:(id)a3;

@end
