@class NSString, NSNumber;

@interface SANotificationsSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *afterNotificationId;
@property (copy, nonatomic) NSNumber *isOnDeviceSearch;
@property (copy, nonatomic) NSString *priority;
@property (copy, nonatomic) NSString *sourceAppId;
@property (copy, nonatomic) NSNumber *supportsSpokenNotifications;

+ (id)notificationsSearch;
+ (id)notificationsSearchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
