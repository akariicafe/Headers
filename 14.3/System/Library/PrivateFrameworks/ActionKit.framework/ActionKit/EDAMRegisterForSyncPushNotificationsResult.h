@class NSData;

@interface EDAMRegisterForSyncPushNotificationsResult : FATObject

@property (retain, nonatomic) NSData *sharedSecret;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
