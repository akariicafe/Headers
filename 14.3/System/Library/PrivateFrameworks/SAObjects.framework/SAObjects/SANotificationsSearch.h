@class NSString, NSNumber;

@interface SANotificationsSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *afterNotificationId;
@property (copy, nonatomic) NSString *priority;
@property (copy, nonatomic) NSString *sourceAppId;
@property (copy, nonatomic) NSNumber *supportsSpokenNotifications;

+ (id)notificationsSearch;
+ (id)notificationsSearchWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
