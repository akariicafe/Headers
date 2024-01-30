@class NSArray, NSMutableDictionary, CKDPCSKeySyncCoreAnalytics, NSMutableArray;
@protocol CKModifyRecordZonesOperationCallbacks;

@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *recordZonesToSave;
@property (retain, nonatomic) NSArray *recordZoneIDsToDelete;
@property (retain, nonatomic) NSMutableDictionary *recordZonesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *retryableErrorsByZoneID;
@property (nonatomic) BOOL allowDefaultZoneSave;
@property (nonatomic) BOOL markZonesAsUserPurged;
@property (nonatomic) int numZoneSaveAttempts;
@property (nonatomic) long long maxZoneSaveAttempts;
@property (nonatomic) BOOL dontFetchFromServer;
@property (nonatomic) BOOL didSynchronizeUserKeyRegistry;
@property (retain, nonatomic) NSMutableArray *zonesWaitingOnKeyRegistrySync;
@property (retain, nonatomic) CKDPCSKeySyncCoreAnalytics *keySyncAnalytics;
@property (retain, nonatomic) id<CKModifyRecordZonesOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ saveCompletionBlock;
@property (copy, nonatomic) id /* block */ deleteCompletionBlock;

+ (long long)isPredominatelyDownload;

- (id)activityCreate;
- (BOOL)isOperationType:(int)a0;
- (id)relevantZoneIDs;
- (id)nameForState:(unsigned long long)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)supportsClearAssetEncryption;
- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)_handleRecordZoneDeleted:(id)a0 responseCode:(id)a1;
- (void)_sendCoreAnalyticsEventForKeySync;
- (void)_sychronizeUserKeyRegistryIfNeeded;
- (void)_fetchPCSDataForZone:(id)a0 fromServer:(BOOL)a1;
- (BOOL)_saveZonesToServer;
- (void)_checkAndPrepareZones;
- (int)operationType;
- (void)_fetchPCSDataForZonesFromServer:(BOOL)a0;
- (void)_createNewPCSForZone:(id)a0 completionHandler:(id /* block */)a1;
- (void)main;
- (void).cxx_destruct;
- (void)_handleRecordZoneSaved:(id)a0 responseCode:(id)a1 serverCapabilities:(unsigned long long)a2;
- (void)_sendErrorForFailedZones;

@end
