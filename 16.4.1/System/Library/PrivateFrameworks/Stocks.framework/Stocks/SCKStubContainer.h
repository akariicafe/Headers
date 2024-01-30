@class NSArray, NSMutableDictionary;

@interface SCKStubContainer : NSObject <SCKContainerProxying>

@property (retain, nonatomic) NSMutableDictionary *zoneContentsByZoneID;
@property (nonatomic) long long modifyZonesErrorMode;
@property (readonly, nonatomic) unsigned long long modifyZonesOperationCount;
@property (readonly, copy, nonatomic) NSArray *modifyZonesSavedZones;
@property (nonatomic) long long zoneChangesErrorMode;
@property (copy, nonatomic) id /* block */ willFinishZoneChanges;
@property (readonly, nonatomic) unsigned long long zoneChangesOperationCount;
@property (nonatomic) long long modifyRecordsErrorMode;
@property (copy, nonatomic) id /* block */ willModifyRecords;
@property (readonly, nonatomic) unsigned long long modifyRecordsOperationCount;
@property (readonly, copy, nonatomic) NSArray *modifyRecordsSavedRecords;
@property (readonly, nonatomic) unsigned long long modifySubscriptionsOperationCount;
@property (readonly, copy, nonatomic) NSArray *modifySubscriptionsSavedSubscriptions;
@property (readonly, nonatomic) unsigned long long databaseChangesOperationCount;
@property (copy, nonatomic) NSArray *databaseChangesOperationChangedZoneIDs;
@property (nonatomic) BOOL accountInfoSupportsDeviceToDeviceEncryption;
@property (nonatomic) long long accountInfoErrorMode;

- (id)init;
- (void).cxx_destruct;
- (void)accountInfoWithCompletionHandler:(id /* block */)a0;
- (id)contentsOfZone:(id)a0;
- (long long)_ckErrorCodeForErrorMode:(long long)a0;
- (id)_errorForErrorMode:(long long)a0;
- (id)_errorForErrorMode:(long long)a0 itemIDs:(id)a1;
- (void)addDatabaseOperation:(id)a0;
- (id)contentsOfZone:(id)a0 withType:(id)a1;
- (id)recordWithName:(id)a0 inZone:(id)a1;
- (void)setContentsOfZone:(id)a0 toRecords:(id)a1;

@end
