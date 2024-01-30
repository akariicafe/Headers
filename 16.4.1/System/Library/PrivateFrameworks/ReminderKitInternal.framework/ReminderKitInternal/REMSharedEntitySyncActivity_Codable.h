@interface REMSharedEntitySyncActivity_Codable : REMSharedEntitySyncActivity

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithAccountIdentifier:(id)a0 activityDate:(id)a1 activityType:(long long)a2 authorUserRecordIDString:(id)a3 ckParentCloudObjectEntityName:(id)a4 ckParentCloudObjectIdentifier:(id)a5 ckIdentifier:(id)a6 sharedEntityName:(id)a7 uuidForChangeTracking:(id)a8;

@end
