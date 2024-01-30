@class NSString;

@interface SAUIPlayNotificationSound : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *notificationId;
@property (copy, nonatomic) NSString *notificationType;

+ (id)playNotificationSound;
+ (id)playNotificationSoundWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
