@class NSArray, CKRecordZone, NSMutableDictionary, NSError, CKRecordZoneID, CKDPCSKeySyncCoreAnalytics;

@interface CKDAggregateZonePCSOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *sourceZoneIDs;
@property (retain, nonatomic) CKRecordZone *targetZone;
@property (retain, nonatomic) NSMutableDictionary *zonePCSDataByZoneID;
@property BOOL isHandlingRetryableError;
@property (retain) NSError *currentError;
@property (nonatomic) long long numZoneSaveAttempts;
@property (nonatomic) long long maxZoneSaveAttempts;
@property (retain, nonatomic) CKRecordZoneID *zoneWaitingOnKeyRegistrySync;
@property (retain, nonatomic) CKDPCSKeySyncCoreAnalytics *keySyncAnalytics;

- (id)activityCreate;
- (id)relevantZoneIDs;
- (id)nameForState:(unsigned long long)a0;
- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)_sendCoreAnalyticsEventForKeySync;
- (void)_sychronizeUserKeyRegistryIfNeeded;
- (int)operationType;
- (void)main;
- (void).cxx_destruct;
- (void)_fetchZonePCS;
- (void)_prepareTargetZonePCS;
- (BOOL)_saveTargetZone;
- (void)_setPermanentFailure;
- (void)_fetchPCSDataForZoneID:(id)a0;
- (void)_handleZoneSavedWithID:(id)a0 responseCode:(id)a1;

@end
