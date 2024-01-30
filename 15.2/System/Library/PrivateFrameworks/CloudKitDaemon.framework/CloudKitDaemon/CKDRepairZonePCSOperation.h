@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol CKRepairZonePCSOperationCallbacks;

@interface CKDRepairZonePCSOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSMutableArray *fetchedZones;
@property (retain, nonatomic) NSMutableArray *fixedZones;
@property (retain, nonatomic) NSMutableDictionary *pcsInfoByZoneID;
@property (retain, nonatomic) id<CKRepairZonePCSOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ zonePCSRepairProgressBlock;

- (id)activityCreate;
- (id)nameForState:(unsigned long long)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (void)_fetchZones;
- (void)_checkZonePCS;
- (void)_uploadRepairedZones;
- (id)_checkPCSDataForZone:(id)a0;

@end
