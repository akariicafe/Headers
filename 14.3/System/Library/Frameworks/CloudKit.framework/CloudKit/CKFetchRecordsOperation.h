@class NSMutableDictionary, NSDictionary, NSMutableSet, CKFetchRecordsOperationInfo, NSArray;
@protocol CKFetchRecordsOperationCallbacks;

@interface CKFetchRecordsOperation : CKDatabaseOperation <CKFetchRecordsOperationCallbacks, CKOperationInMemoryAssets>

@property (retain, nonatomic) NSMutableSet *packagesToDestroy;
@property (readonly, nonatomic) id<CKFetchRecordsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchRecordsOperationInfo *operationInfo;
@property (retain, nonatomic) NSMutableDictionary *recordErrors;
@property (nonatomic) BOOL isFetchCurrentUserOperation;
@property (retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (nonatomic) BOOL shouldFetchAssetContentInMemory;
@property (nonatomic) BOOL dropInMemoryAssetContentASAP;
@property (copy, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (retain, nonatomic) NSMutableDictionary *recordIDsToRecords;
@property (copy, nonatomic) NSDictionary *desiredPackageFileIndices;
@property (copy, nonatomic) NSDictionary *recordIDsToETags;
@property (copy, nonatomic) NSDictionary *recordIDsToVersionETags;
@property (copy, nonatomic) NSArray *recordIDs;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) id /* block */ perRecordProgressBlock;
@property (copy, nonatomic) id /* block */ perRecordCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchRecordsCompletionBlock;
@property (retain, nonatomic) NSMutableDictionary *assetInfoByArrayIndexByRecordKeyByRecordID;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (id)fetchCurrentUserRecordOperation;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)performCKOperation;
- (id)initWithRecordIDs:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)handleAssetDataForRecordID:(id)a0 recordKey:(id)a1 arrayIndex:(long long)a2 data:(id)a3 offset:(unsigned long long)a4;
- (void)handleFetchForRecordID:(id)a0 record:(id)a1 error:(id)a2;
- (BOOL)claimPackagesInRecord:(id)a0 error:(id *)a1;
- (void)handleFetchForRecordID:(id)a0 didProgress:(double)a1;
- (void)fillOutOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;

@end
