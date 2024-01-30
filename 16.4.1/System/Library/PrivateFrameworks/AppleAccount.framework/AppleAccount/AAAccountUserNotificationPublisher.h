@class AAAccountUserNotificationDaemonConnection;

@interface AAAccountUserNotificationPublisher : NSObject {
    AAAccountUserNotificationDaemonConnection *_daemonConnection;
}

- (id)initWithDaemonXPCEndpoint:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)postAccountUserNotificationWith:(id)a0 completion:(id /* block */)a1;

@end
