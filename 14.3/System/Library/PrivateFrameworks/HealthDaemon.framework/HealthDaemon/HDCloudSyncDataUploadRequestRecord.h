@interface HDCloudSyncDataUploadRequestRecord : HDCloudSyncSubscriptionRecord

+ (id)recordType;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (BOOL)requiresUnderlyingMessage;
+ (id)recordIDWithZoneID:(id)a0;
+ (id)recordForZoneID:(id)a0;
+ (BOOL)isDataUploadRequestRecord:(id)a0;

- (id)serializeUnderlyingMessage;

@end
