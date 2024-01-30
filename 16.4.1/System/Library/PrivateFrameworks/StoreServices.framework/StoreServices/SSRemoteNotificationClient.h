@class NSObject;
@protocol OS_dispatch_queue;

@interface SSRemoteNotificationClient : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    int _notifyToken;
}

+ (id)sharedClient;

- (void)dealloc;
- (id)init;
- (void)registerForRemoteNotifications;
- (void)unregisterForRemoteNotifications;
- (id)popQueuedNotifications;

@end
