@class HDNotificationManager;

@interface HDNanoHealthNotification : NSObject {
    HDNotificationManager *_notificationManager;
}

+ (id)category;

- (unsigned long long)destinations;
- (id)body;
- (id)title;
- (void).cxx_destruct;
- (id)initWithNotificationManager:(id)a0;
- (void)triggerNotification;

@end
