@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AEConcreteSystemNotificationObservation : NSObject <AEObservation> {
    NSString *_notificationName;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _notificationHandler;
}

- (void)invalidate;
- (void).cxx_destruct;

@end
