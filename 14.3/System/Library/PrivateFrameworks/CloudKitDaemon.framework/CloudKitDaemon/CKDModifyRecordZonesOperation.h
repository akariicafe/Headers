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
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)_handleRecordZoneDeleted:(id)a0 responseCode:(id)a1;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void).cxx_destruct;
- (void)_sychronizeUserKeyRegistryIfNeeded;
- (id)nameForState:(unsigned long long)a0;
- (BOOL)makeStateTransition;
- (void)main;
- (void)_sendErrorForFailedZones;
- (void)_createNewPCSForZone:(id)a0 completionHandler:(id /* block */)a1;
- (id)relevantZoneIDs;
- (void)_checkAndPrepareZones;
- (void)_fetchPCSDataForZone:(id)a0 fromServer:(BOOL)a1;
- (BOOL)_saveZonesToServer;
- (void)_sendCoreAnalyticsEventForKeySync;
- (int)operationType;
- (void)_fetchPCSDataForZonesFromServer:(BOOL)a0;
- (void)_handleRecordZoneSaved:(id)a0 responseCode:(id)a1 serverCapabilities:(unsigned long long)a2;

@end
