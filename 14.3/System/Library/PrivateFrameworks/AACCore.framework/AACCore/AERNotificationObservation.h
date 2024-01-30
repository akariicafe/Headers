@class NSString, NSNotificationCenter, NSObject;

@interface AERNotificationObservation : NSObject <AERObservation> {
    NSString *_notificationName;
    NSNotificationCenter *_notificationCenter;
    NSObject *_object;
    id /* block */ _notificationHandler;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (void)notificationDidFire:(id)a0;

@end
