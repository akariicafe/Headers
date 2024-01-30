@class NSSet;

@interface HDCloudSyncMasterRecord : HDCloudSyncRecord

@property (retain, nonatomic) NSSet *disabledOwnerIdentifiers;

+ (BOOL)isMasterRecord:(id)a0;
+ (id)recordIDWithZoneID:(id)a0;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (BOOL)isMasterRecordID:(id)a0;
+ (id)fieldsForUnprotectedSerialization;
+ (id)recordType;
+ (BOOL)hasFutureSchema:(id)a0;

- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)description;
- (id)printDescription;
- (void).cxx_destruct;
- (id)serializeUnderlyingMessage;
- (id)initInZone:(id)a0 disabledOwnerIdentifiers:(id)a1;
- (id)initInSyncCircle:(id)a0 disabledOwnerIdentifiers:(id)a1;

@end
