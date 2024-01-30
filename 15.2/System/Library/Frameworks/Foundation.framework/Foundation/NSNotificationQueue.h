@interface NSNotificationQueue : NSObject {
    id _notificationCenter;
    id _asapQueue;
    id _asapObs;
    id _idleQueue;
    id _idleObs;
}

@property (class, readonly) NSNotificationQueue *defaultQueue;

- (void)_flushNotificationQueue;
- (void)enqueueNotification:(id)a0 postingStyle:(unsigned long long)a1;
- (id)initWithNotificationCenter:(id)a0;
- (id)init;
- (void)dequeueNotificationsMatching:(id)a0 coalesceMask:(unsigned long long)a1;
- (void)dealloc;
- (void)enqueueNotification:(id)a0 postingStyle:(unsigned long long)a1 coalesceMask:(unsigned long long)a2 forModes:(id)a3;

@end
