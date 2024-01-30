@class NSObject, NSMapTable;
@protocol OS_dispatch_queue;

@interface ICUserNotificationManager : NSObject {
    NSMapTable *_contextForUserNotification;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (class, readonly) ICUserNotificationManager *sharedManager;

- (void)displayUserNotification:(struct __CFUserNotification { } *)a0 withCompletionHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_handleCallbackForUserNotification:(struct __CFUserNotification { } *)a0 responseFlags:(unsigned long long)a1;

@end
