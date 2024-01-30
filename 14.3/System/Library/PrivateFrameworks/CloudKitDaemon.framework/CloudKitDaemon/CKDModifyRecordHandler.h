@class CKDSharePCSData, NSMutableDictionary, NSObject, NSDictionary, CKDModifyRecordsOperation, CKDZonePCSData, NSString, CKRecordID, CKDPCSManager, CKRecord, CKDPCSCache, CKDRecordPCSData, CKDProgressTracker, NSError;
@protocol OS_dispatch_group;

@interface CKDModifyRecordHandler : NSObject

@property (retain, nonatomic) CKRecord *record;
@property (retain, nonatomic) CKRecordID *recordID;
@property (nonatomic) BOOL isDelete;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *pcsGroup;
@property (readonly, nonatomic) CKDPCSManager *pcsManager;
@property (readonly, nonatomic) CKDPCSCache *pcsCache;
@property (nonatomic) BOOL didRollRecordPCSMasterKey;
@property (weak, nonatomic) CKDModifyRecordsOperation *operation;
@property (retain, nonatomic) CKDRecordPCSData *recordPCSData;
@property (retain, nonatomic) CKDSharePCSData *sharePCSData;
@property (retain, nonatomic) CKRecord *serverRecord;
@property (retain, nonatomic) NSString *etag;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableDictionary *rereferencedAssetArrayByFieldname;
@property (retain, nonatomic) CKDProgressTracker *progressTracker;
@property (nonatomic) long long batchRank;
@property (nonatomic) int saveAttempts;
@property (nonatomic) BOOL saveCompletionBlockCalled;
@property (readonly, nonatomic) BOOL isShare;
@property (nonatomic) BOOL needsRefetch;
@property (retain, nonatomic) CKDZonePCSData *sharedZonePCSData;
@property (nonatomic) BOOL didAttemptZoneWideShareKeyRoll;
@property (copy, nonatomic) NSDictionary *assetUUIDToExpectedProperties;

+ (id)_stringForState:(unsigned long long)a0;
+ (id)modifyHandlerWithRecord:(id)a0 operation:(id)a1;
+ (id)modifyHandlerForDeleteWithRecordID:(id)a0 operation:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)_initWithRecord:(id)a0 operation:(id)a1;
- (id)_initForDeleteWithRecordID:(id)a0 operation:(id)a1;
- (void)prepareForSave;
- (void)clearProtectionDataForRecord;
- (void)savePCSDataToCache;
- (id)sideEffectRecordIDs;
- (void)noteSideEffectRecordPendingModify:(id)a0;
- (void)noteSideEffectRecordAbsent:(id)a0;
- (void)noteSideEffectRecordPendingDelete:(id)a0;
- (void)fetchSharePCSData;
- (id)_initCommonWithOperation:(id)a0;
- (void)_loadPCSData;
- (void)_fetchPCSData;
- (void)_unwrapRecordPCSForZone;
- (void)_unwrapRecordPCSWithShareID:(id)a0;
- (void)_unwrapRecordPCSForParent;
- (void)_addShareToPCSData:(id)a0 withError:(id)a1;
- (BOOL)_useZoneishPCS;
- (void)_reallyFetchPCSDataWithOptions:(unsigned long long)a0;
- (void)_createAndSavePCS;
- (void)_keyRollIfNeededForRecordPCSData:(id)a0 withError:(id)a1;
- (void)_reallyAddShareToPCSData:(id)a0 withError:(id)a1;
- (void)_fetchSharePCSForID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_fetchParentPCSForData:(id)a0 withError:(id)a1;
- (id)_addParentPCS:(id)a0 toRecordPCS:(id)a1;
- (void)_handlePCSData:(id)a0 withError:(id)a1;
- (void)_continueCreateAndSavePCSWithZonePCS:(id)a0 sharePCS:(id)a1;
- (BOOL)_canSetPreviousProtectionEtag;
- (void)_fetchExistingPCSForProvidedPCSData:(id)a0;
- (void)_fetchParentPCSForID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_clearRecordProtectionDataForRecord;
- (BOOL)_createPublicSharingKeyWithError:(id *)a0;
- (BOOL)_prepareAsset:(id)a0 recordKey:(id)a1 record:(id)a2 error:(id *)a3;
- (void)prepareStreamingAsset:(id)a0 forUploadWithRecord:(id)a1;
- (BOOL)_wrapEncryptedDataOnRecord:(id)a0;
- (BOOL)_wrapEncryptedData:(id)a0 withPCS:(struct _OpaquePCSShareProtection { } *)a1 forField:(id)a2 recordID:(id)a3;
- (void)_pretendToWrapEncryptedDataForRecordValueStore:(id)a0;
- (BOOL)_wrapEncryptedDataForRecordValueStore:(id)a0 withPCS:(struct _OpaquePCSShareProtection { } *)a1;
- (void)fetchRecordPCSData;
- (id)assetsWhichNeedRecordFetch;
- (id)prepareAssetsForUploadWithError:(id *)a0;

@end
