@class NSString, NSMutableDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WBSKeychainCredentialNotificationMonitor : NSObject <WBSKeychainCredentialNotificationMonitor> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_observers;
    int _keychainChangedNotificationToken;
    double _coalescingInterval;
    NSDate *_lastNotificationTime;
    NSObject<OS_dispatch_source> *_coalescingTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserverForToken:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_notifyObservers;
- (void)notifyModernKeychainUpdated;
- (id)initWithCoalescingInterval:(double)a0;
- (void)_cancelCoalescingTimer;
- (void)_notifyKeychainUpdated;
- (id)addObserverWithBlock:(id /* block */)a0;
- (void)triggerExternalNotification;

@end
