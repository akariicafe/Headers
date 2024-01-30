@class NSString;

@interface HDSharedDataOptInNotification : HDNanoHealthNotification {
    NSString *_guardianDisplayName;
}

+ (id)category;

- (unsigned long long)destinations;
- (id)title;
- (void).cxx_destruct;
- (id)body;
- (id)initWithNotificationManager:(id)a0 guardianDisplayName:(id)a1;

@end
