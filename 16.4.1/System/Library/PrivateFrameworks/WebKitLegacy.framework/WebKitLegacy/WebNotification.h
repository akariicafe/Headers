@class WebNotificationPrivate;

@interface WebNotification : NSObject {
    WebNotificationPrivate *_private;
}

- (id)iconURL;
- (id)body;
- (void)finalize;
- (id)origin;
- (id)tag;
- (id)notificationID;
- (void)dealloc;
- (id)init;
- (id)title;
- (id)lang;
- (id)dir;
- (void)dispatchClickEvent;
- (void)dispatchCloseEvent;
- (void)dispatchErrorEvent;
- (void)dispatchShowEvent;
- (id)initWithCoreNotification:(void *)a0;

@end
