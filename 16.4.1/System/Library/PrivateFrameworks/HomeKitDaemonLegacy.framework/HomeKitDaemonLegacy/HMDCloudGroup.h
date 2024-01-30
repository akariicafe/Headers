@class NSUUID, NSString, CKRecordID, HMDCloudRecord, HMDCloudZone, NSMutableDictionary, HMDBackingStoreCacheGroup, HMDCloudCache;

@interface HMDCloudGroup : HMFObject <HMFLogging> {
    BOOL _doRecordsExistInCache;
}

@property (readonly, nonatomic) NSString *rootRecordName;
@property (retain, nonatomic) HMDBackingStoreCacheGroup *backingStoreGroup;
@property (readonly, nonatomic) NSUUID *parentIdentifier;
@property (readonly, nonatomic) NSUUID *rootRecordObjectID;
@property (readonly, nonatomic) NSMutableDictionary *objectIDToRecordNameMap;
@property (readonly, nonatomic) HMDCloudRecord *rootRecord;
@property (weak, nonatomic) HMDCloudCache *cache;
@property (weak, nonatomic) HMDCloudZone *cloudZone;
@property (readonly, nonatomic) CKRecordID *privateZoneRootRecordID;
@property (readonly, nonatomic) NSUUID *ownerID;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly) BOOL doRecordsExistInCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;
+ (void)createGroupWithRootRecordName:(id)a0 owner:(id)a1 subscriptionName:(id)a2 cloudZone:(id)a3 completion:(id /* block */)a4;

- (id)logIdentifier;
- (id)shortDescription;
- (id)init;
- (void).cxx_destruct;
- (void)addCloudRecord:(id)a0;
- (id)__cloudRecordWithObjectID:(id)a0;
- (void)_cloudRecordsForParentIDs:(id)a0 recursive:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)allDescendentsCloudRecordsForParentID:(id)a0 completionHandler:(id /* block */)a1;
- (id)cloudRecordWithName:(id)a0;
- (void)cloudRecordWithName:(id)a0 completionHandler:(id /* block */)a1;
- (void)cloudRecordWithNames:(id)a0 completionHandler:(id /* block */)a1;
- (id)cloudRecordWithObjectID:(id)a0;
- (void)cloudRecordWithObjectID:(id)a0 completionHandler:(id /* block */)a1;
- (void)cloudRecordWithObjectIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)cloudRecordsForParentID:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteCloudRecord:(id)a0;
- (void)deleteCloudRecordNames:(id)a0;
- (void)fetchCloudRecordMap:(id /* block */)a0;
- (id)initWithBackingStoreCacheGroup:(id)a0 cloudZone:(id)a1;
- (BOOL)isRootRecord:(id)a0;
- (BOOL)isRootRecordName:(id)a0;
- (void)rootRecordCompletionHandler:(id /* block */)a0;
- (id)rootRecordModelObject;
- (void)updateCloudRecord:(id)a0;
- (void)updateCloudRecord:(id)a0 completionHandler:(id /* block */)a1;

@end
