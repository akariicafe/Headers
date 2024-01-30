@class NSString, NSNotificationCenter, NSObject;
@protocol OS_dispatch_queue;

@interface AEDNotificationObservation : NSObject <AEDObservation> {
    NSString *_notificationName;
    NSNotificationCenter *_notificationCenter;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject *_object;
    id /* block */ _notificationHandler;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)notificationDidFire:(id)a0;

@end
