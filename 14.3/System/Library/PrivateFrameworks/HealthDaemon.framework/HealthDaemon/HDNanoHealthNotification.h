@class HDNotificationManager;

@interface HDNanoHealthNotification : NSObject {
    HDNotificationManager *_notificationManager;
}

+ (id)category;

- (id)body;
- (unsigned long long)destinations;
- (void).cxx_destruct;
- (id)title;
- (void)triggerNotification;
- (id)_notificationContentWithTitle:(id)a0 body:(id)a1;
- (id)initWithNotificationManager:(id)a0;

@end
