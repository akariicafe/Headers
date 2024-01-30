@class NSArray, CKDRecordCache, NSMutableDictionary, NSSet, NSDictionary, NSObject, CKDDecryptRecordsOperation, NSMutableArray, NSMapTable;
@protocol OS_dispatch_group, CKFetchRecordsOperationCallbacks;

@interface CKDFetchRecordsOperation : CKDDatabaseOperation {
    CKDDecryptRecordsOperation *_decryptOperation;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *recordIDsToFetch;
@property (retain, nonatomic) NSMutableDictionary *cachedRecords;
@property (retain, nonatomic) NSSet *desiredKeySet;
@property (retain, nonatomic) NSDictionary *recordIDsToETags;
@property (retain, nonatomic) NSDictionary *recordIDsToVersionETags;
@property (retain, nonatomic) NSDictionary *desiredPackageFileIndices;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup;
@property (retain, nonatomic) NSMutableDictionary *errorsByRecordID;
@property (retain, nonatomic) NSMapTable *downloadTasksByRecordID;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (nonatomic) BOOL shouldFetchAssetContentInMemory;
@property (retain, nonatomic) NSSet *assetFieldNamesToPublishURLs;
@property (nonatomic) unsigned long long requestedTTL;
@property (nonatomic) unsigned long long URLOptions;
@property (retain, nonatomic) CKDRecordCache *cache;
@property (readonly, nonatomic) CKDDecryptRecordsOperation *recordDecryptOperation;
@property (readonly, nonatomic) BOOL hasRecordDecryptOperation;
@property (retain, nonatomic) NSMutableArray *recordIDsToRefetch;
@property (retain, nonatomic) NSMutableDictionary *keyOrErrorForHostname;
@property (retain, nonatomic) NSMutableDictionary *shareRecordsToUpdateByRecordID;
@property (retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID;
@property (nonatomic) BOOL shouldRollSharePCSOnFetch;
@property (retain, nonatomic) id<CKFetchRecordsOperationCallbacks> clientOperationCallbackProxy;
@property (nonatomic) BOOL useCachedEtags;
@property (nonatomic) BOOL useRecordCache;
@property (nonatomic) BOOL forcePCSDecrypt;
@property (nonatomic) BOOL skipDecryption;
@property (retain, nonatomic) NSArray *fullRecordsToFetch;
@property (copy, nonatomic) id /* block */ recordFetchProgressBlock;
@property (copy, nonatomic) id /* block */ recordFetchCommandBlock;
@property (copy, nonatomic) id /* block */ recordFetchCompletionBlock;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)nameForState:(unsigned long long)a0;
- (BOOL)makeStateTransition;
- (void)main;
- (void)_downloadAssets;
- (int)operationType;
- (BOOL)supportsClearAssetEncryption;
- (id)desiredIndexedListKeys;
- (void)fetchRecordsWithIDs:(id)a0 andFullRecords:(id)a1;
- (void)_fetchCloudCerts;
- (void)_saveUpdatedShareRecords;
- (void)_continueHandleFetchedRecord:(id)a0 recordID:(id)a1;
- (void)_findSpecialParticipantsOnShare:(id)a0 identityDelegate:(id)a1;
- (void)_handleRecordFetch:(id)a0 recordID:(id)a1 etagMatched:(BOOL)a2 responseCode:(id)a3;
- (id)errorForRecordID:(id)a0;
- (void)_addDownloadTaskForRecord:(id)a0 completionBlock:(id /* block */)a1;
- (void)setError:(id)a0 forRecordID:(id)a1;
- (void)_handleSharePCSPrepForShare:(id)a0 recordID:(id)a1;
- (void)_decryptPropertiesIfNeededForRecord:(id)a0 record:(id)a1;
- (void)_decryptPropertiesOnRecord:(id)a0 recordID:(id)a1;
- (int)_prepareAsset:(id)a0 record:(id)a1 recordKey:(id)a2 assetTransferOptions:(id)a3;
- (void)_finishAllDownloadTasksWithError:(id)a0;
- (void)_didDownloadAssetsWithError:(id)a0;

@end
