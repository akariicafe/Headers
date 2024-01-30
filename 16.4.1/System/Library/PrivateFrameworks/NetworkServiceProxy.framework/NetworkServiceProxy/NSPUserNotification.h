@class NSObject;
@protocol OS_dispatch_queue;

@interface NSPUserNotification : NSObject {
    id _notification;
    id _notificationSource;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id /* block */ _callback;
}

- (void).cxx_destruct;

@end
