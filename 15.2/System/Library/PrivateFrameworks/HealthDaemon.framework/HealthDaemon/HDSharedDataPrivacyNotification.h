@class NSString;

@interface HDSharedDataPrivacyNotification : HDNanoHealthNotification {
    NSString *_firstName;
    NSString *_lastName;
}

+ (id)category;

- (id)title;
- (void).cxx_destruct;
- (id)body;
- (id)initWithNotificationManager:(id)a0 guardianFirstName:(id)a1 lastName:(id)a2;

@end
