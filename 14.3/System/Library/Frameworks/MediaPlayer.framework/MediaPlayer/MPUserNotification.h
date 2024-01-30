@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MPUserNotification : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackInvocationQueue;
    id /* block */ _willShowNotificationHandler;
    id strongSelf;
    BOOL _isShowing;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSMutableArray *_showingCompletionHandlers;
}

@property (readonly, nonatomic) struct __CFUserNotification { } *cfUserNotification;
@property (copy, nonatomic) id /* block */ willShowNotificationHandler;

+ (id)_userNotificationForCFUserNotification:(struct __CFUserNotification { } *)a0;
+ (void)_setUserNotification:(id)a0 forCFUserNotification:(struct __CFUserNotification { } *)a1;
+ (id)_userNotificationConversionAccessQueue;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCFUserNotification:(struct __CFUserNotification { } *)a0;
- (void)_cancelSynchronously:(BOOL)a0;
- (void)showWithCompletionHandler:(id /* block */)a0;
- (void)_didReceiveResponseWithFlags:(unsigned long long)a0;

@end
