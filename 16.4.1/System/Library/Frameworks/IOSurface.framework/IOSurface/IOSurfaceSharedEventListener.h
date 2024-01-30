@class NSObject;
@protocol OS_dispatch_queue;

@interface IOSurfaceSharedEventListener : NSObject {
    struct IONotificationPort { } *_notificationPort;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void)dealloc;
- (id)init;
- (id)initWithDispatchQueue:(id)a0;

@end
