@class NSSet;

@interface HDCloudSyncMasterRecord : HDCloudSyncRecord

@property (retain, nonatomic) NSSet *disabledOwnerIdentifiers;

+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (BOOL)hasFutureSchema:(id)a0;
+ (id)recordIDWithZoneID:(id)a0;
+ (BOOL)isMasterRecord:(id)a0;
+ (BOOL)isMasterRecordID:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)serializeUnderlyingMessage;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)initInZone:(id)a0 disabledOwnerIdentifiers:(id)a1;
- (id)initWithCKRecord:(id)a0 disabledOwnerIdentifiers:(id)a1 schemaVersion:(long long)a2;
- (id)initInSyncCircle:(id)a0 disabledOwnerIdentifiers:(id)a1;

@end
