@class NSObject;
@protocol OS_dispatch_queue;

@interface MTLSharedEventListenerInternal : MTLSharedEventListener {
    struct IONotificationPort { } *_notificationPort;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (id)init;
- (void)_notifyEventPort:(unsigned int)a0 event:(id)a1 atValue:(unsigned long long)a2 block:(id /* block */)a3;
- (id)initWithDispatchQueue:(id)a0;
- (void)dealloc;
- (id)dispatchQueue;

@end
