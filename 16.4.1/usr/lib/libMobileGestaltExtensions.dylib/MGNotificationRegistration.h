@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MGNotificationRegistration : NSObject {
    NSMutableDictionary *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
    BOOL _deliverNotifications;
    NSMutableDictionary *_requestedRegistrations;
}

- (BOOL)registerForNotification:(int)a0 argument:(const char *)a1 question:(id)a2;
- (void)cancel;
- (void)dealloc;
- (BOOL)start;
- (id)initWithQueue:(id)a0 block:(id /* block */)a1;

@end
