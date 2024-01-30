@class NSString, NSObject;
@protocol OS_dispatch_group, NSObject;

@interface FCOperationNotificationRetrySignal : NSObject <FCOperationRetrySignal> {
    NSObject<OS_dispatch_group> *_group;
    unsigned long long _timeoutTime;
    id<NSObject> _notificationObserver;
    NSString *_notificationName;
    double _timeout;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)onQueue:(id)a0 signal:(id /* block */)a1;
- (id)initWithNotificationName:(id)a0 timeout:(double)a1;

@end
