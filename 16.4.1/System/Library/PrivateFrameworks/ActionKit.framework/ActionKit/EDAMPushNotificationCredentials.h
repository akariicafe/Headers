@class NSData, NSString;

@interface EDAMPushNotificationCredentials : FATObject

@property (retain, nonatomic) NSData *iosDeviceToken;
@property (retain, nonatomic) NSString *gcmRegistrationId;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
