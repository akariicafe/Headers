@interface HDCloudSyncDataUploadRequestRecord : HDCloudSyncSubscriptionRecord

+ (id)recordForZoneID:(id)a0;
+ (id)recordIDWithZoneID:(id)a0;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (BOOL)requiresUnderlyingMessage;
+ (BOOL)isDataUploadRequestRecord:(id)a0;
+ (id)recordType;

- (id)description;
- (id)printDescription;
- (id)serializeUnderlyingMessage;

@end
