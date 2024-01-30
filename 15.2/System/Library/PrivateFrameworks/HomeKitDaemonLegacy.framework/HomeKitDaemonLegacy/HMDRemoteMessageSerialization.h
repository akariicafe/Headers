@interface HMDRemoteMessageSerialization : HMFObject

+ (id)dictionaryForMessage:(id)a0 error:(id *)a1;
+ (id)remoteMessageWithDictonary:(id)a0 error:(id *)a1;
+ (id)logSessionContextFromData:(id)a0;
+ (BOOL)legacyNotificationMessage:(id)a0;

@end
