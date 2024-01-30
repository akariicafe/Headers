@class NSArray, CKRecordZone, NSMutableDictionary;

@interface CKDAggregateZonePCSOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *sourceZoneIDs;
@property (retain, nonatomic) CKRecordZone *targetZone;
@property (retain, nonatomic) NSMutableDictionary *zonePCSDataByZoneID;
@property BOOL isHandlingPCSOplockFailure;
@property (nonatomic) long long numZoneSaveAttempts;
@property (nonatomic) long long maxZoneSaveAttempts;

- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void).cxx_destruct;
- (id)nameForState:(unsigned long long)a0;
- (BOOL)makeStateTransition;
- (void)main;
- (id)relevantZoneIDs;
- (int)operationType;
- (void)_fetchZonePCS;
- (void)_prepareTargetZonePCS;
- (BOOL)_saveTargetZone;
- (void)_setPermanentOplockFailure;
- (void)_fetchPCSDataForZoneID:(id)a0;
- (void)_handleZoneSavedWithID:(id)a0 responseCode:(id)a1;

@end
