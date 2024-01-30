@class NSString, NSNotificationCenter, NSObject;
@protocol OS_dispatch_queue;

@interface AEDNotificationObservation : NSObject <AEDObservation> {
    NSString *_notificationName;
    NSNotificationCenter *_notificationCenter;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject *_object;
    id /* block */ _notificationHandler;
}

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)notificationDidFire:(id)a0;

@end
