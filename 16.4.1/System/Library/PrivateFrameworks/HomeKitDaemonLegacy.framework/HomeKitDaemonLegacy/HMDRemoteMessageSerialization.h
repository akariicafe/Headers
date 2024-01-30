@interface HMDRemoteMessageSerialization : HMFObject

+ (id)dictionaryForMessage:(id)a0 error:(id *)a1;
+ (BOOL)legacyNotificationMessage:(id)a0;
+ (id)logSessionContextFromData:(id)a0;
+ (id)remoteMessageWithDictionary:(id)a0 error:(id *)a1;

@end
