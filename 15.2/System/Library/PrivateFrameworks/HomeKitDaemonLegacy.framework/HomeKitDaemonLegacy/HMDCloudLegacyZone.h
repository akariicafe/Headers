@class NSUUID, CKRecordID;

@interface HMDCloudLegacyZone : HMDCloudZone

@property (readonly, nonatomic) NSUUID *metadataObjectID;
@property (readonly, nonatomic) CKRecordID *metadataRecordID;
@property (readonly, nonatomic, getter=isMetadataRecordAvailable) BOOL metadataRecordAvailable;
@property (readonly, nonatomic) NSUUID *homeDataObjectID;
@property (readonly, nonatomic) CKRecordID *homeDataRecordID;
@property (readonly, nonatomic, getter=isHomeDataRecordAvailable) BOOL homeDataRecordAvailable;
@property (readonly, nonatomic) NSUUID *homeDataV3ObjectID;
@property (readonly, nonatomic) CKRecordID *homeDataV3RecordID;
@property (readonly, nonatomic, getter=isHomeDataV3RecordAvailable) BOOL homeDataV3RecordAvailable;

+ (id)zoneRootRecordName;
+ (id)zoneSubscriptionName:(id)a0;
+ (void)createLegacyZoneWithName:(id)a0 owner:(id)a1 cacheZone:(id)a2 cloudCache:(id)a3 completion:(id /* block */)a4;

- (void).cxx_destruct;
- (void)setServerChangeToken:(id)a0;
- (id)createCloudRecordWithObjectID:(id)a0 recordName:(id)a1;
- (BOOL)doesProcessChangeEvenIfDecryptionFails;
- (id)createCloudZoneChangeTemporaryCache:(BOOL)a0;
- (id)metadataModelWithPushDataPush:(id)a0;
- (id)homeDataModelWithPushDataPush:(id)a0;
- (id)homeDataV3ModelWithPushDataPush:(id)a0;
- (void)dropCachedRecords;

@end
