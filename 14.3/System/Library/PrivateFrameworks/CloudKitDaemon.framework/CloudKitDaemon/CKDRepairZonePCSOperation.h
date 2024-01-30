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
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void).cxx_destruct;
- (id)nameForState:(unsigned long long)a0;
- (BOOL)makeStateTransition;
- (void)main;
- (void)_fetchZones;
- (void)_checkZonePCS;
- (void)_uploadRepairedZones;
- (id)_checkPCSDataForZone:(id)a0;

@end
