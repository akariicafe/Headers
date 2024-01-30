@class HMDCloudGroup, NSString, CKRecordID, CKServerChangeToken, CKRecordZoneSubscription, HMDCloudCache, HMDBackingStoreCacheZone, CKRecordZone;

@interface HMDCloudZone : HMFObject

@property (retain, nonatomic) HMDBackingStoreCacheZone *backingStoreZone;
@property (weak, nonatomic) HMDCloudCache *cache;
@property (readonly, nonatomic) NSString *zoneRootRecordName;
@property (retain, nonatomic) CKRecordZone *zone;
@property (retain, nonatomic) HMDCloudGroup *rootGroup;
@property (readonly, nonatomic) CKRecordID *privateZoneRootRecordID;
@property (readonly, nonatomic, getter=doesProcessChangeEvenIfDecryptionFails) BOOL processChangeEvenIfDecryptionFails;
@property (nonatomic, getter=hasRecordsAvaliable) BOOL recordsAvailable;
@property (readonly, nonatomic, getter=hasServerTokenAvaliable) BOOL serverTokenAvaliable;
@property (nonatomic, getter=hasDecrypted) BOOL decrypted;
@property (readonly, nonatomic) NSString *owner;
@property (retain, nonatomic) NSString *subscriptionName;
@property (retain, nonatomic) CKRecordZoneSubscription *subscription;
@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;

+ (id)shortDescription;
+ (id)zoneRootRecordName;
+ (id)zoneSubscriptionName:(id)a0;
+ (void)createZoneWithName:(id)a0 rootRecordName:(id)a1 subscriptionName:(id)a2 owner:(id)a3 cacheZone:(id)a4 cloudCache:(id)a5 completion:(id /* block */)a6;

- (id)shortDescription;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)cloudRecordWithObjectID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchMigratedObjects:(id /* block */)a0;
- (void)markMigratedObjectsAsMigrated;
- (void)updateCloudRecord:(id)a0;
- (id)cloudRecordWithObjectID:(id)a0;
- (id)cloudRecordWithName:(id)a0;
- (BOOL)isRootRecord:(id)a0;
- (void)deleteCloudRecord:(id)a0;
- (void)cloudRecordWithObjectIDs:(id)a0 completionHandler:(id /* block */)a1;
- (id)createCloudRecordWithObjectID:(id)a0 recordName:(id)a1;
- (id)initWithBackingStoreCacheZone:(id)a0 cloudCache:(id)a1;
- (void)cloudRecordWithNames:(id)a0 completionHandler:(id /* block */)a1;
- (void)cloudRecordWithName:(id)a0 completionHandler:(id /* block */)a1;
- (id)createCloudRecordWithFetchResult:(id)a0;
- (id)__cloudRecordWithObjectID:(id)a0;
- (void)cloudRecordsForParentID:(id)a0 completionHandler:(id /* block */)a1;
- (void)allDescendentsCloudRecordsForParentID:(id)a0 completionHandler:(id /* block */)a1;
- (void)addCloudRecord:(id)a0 ownerID:(id)a1;
- (BOOL)isRootCloudRecord:(id)a0;
- (void)updateCloudRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteCloudRecordNames:(id)a0;
- (id)createCloudZoneChangeTemporaryCache:(BOOL)a0;
- (void)_initializeSubscription:(id)a0;
- (void)_initializeServerChangeToken:(id)a0;
- (void)deleteZone;
- (void)updateCurrentServerChangeToken;
- (void)updateServerChangeToken:(id)a0;

@end
