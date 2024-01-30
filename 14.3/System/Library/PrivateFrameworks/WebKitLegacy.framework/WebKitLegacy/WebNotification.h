@class WebNotificationPrivate;

@interface WebNotification : NSObject {
    WebNotificationPrivate *_private;
}

- (id)dir;
- (id)body;
- (id)iconURL;
- (id)lang;
- (id)init;
- (id)origin;
- (void)dealloc;
- (id)tag;
- (void)finalize;
- (id)title;
- (unsigned long long)notificationID;
- (void)dispatchShowEvent;
- (void)dispatchCloseEvent;
- (void)dispatchClickEvent;
- (void)dispatchErrorEvent;

@end
