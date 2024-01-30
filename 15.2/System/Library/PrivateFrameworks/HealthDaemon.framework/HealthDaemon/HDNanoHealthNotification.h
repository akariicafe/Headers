@class HDNotificationManager;

@interface HDNanoHealthNotification : NSObject {
    HDNotificationManager *_notificationManager;
}

+ (id)category;

- (unsigned long long)destinations;
- (id)title;
- (void).cxx_destruct;
- (id)body;
- (void)triggerNotification;
- (id)initWithNotificationManager:(id)a0;

@end
