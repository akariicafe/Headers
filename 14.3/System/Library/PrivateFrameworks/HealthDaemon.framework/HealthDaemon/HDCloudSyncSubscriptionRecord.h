@interface HDCloudSyncSubscriptionRecord : HDCloudSyncRecord

+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (BOOL)hasFutureSchema:(id)a0;
+ (id)recordIDWithZoneID:(id)a0;
+ (id)recordForZoneID:(id)a0;
+ (id)recordIDsWithZoneID:(id)a0;
+ (BOOL)isSubscriptionRecord:(id)a0;

- (id)description;
- (id)storeRecordID;

@end
