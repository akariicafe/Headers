@class WebNotificationPrivate;

@interface WebNotification : NSObject {
    WebNotificationPrivate *_private;
}

- (id)dir;
- (unsigned long long)notificationID;
- (id)lang;
- (id)tag;
- (id)title;
- (void)finalize;
- (id)origin;
- (id)iconURL;
- (id)init;
- (id)body;
- (void)dealloc;
- (void)dispatchShowEvent;
- (void)dispatchCloseEvent;
- (void)dispatchClickEvent;
- (void)dispatchErrorEvent;

@end
