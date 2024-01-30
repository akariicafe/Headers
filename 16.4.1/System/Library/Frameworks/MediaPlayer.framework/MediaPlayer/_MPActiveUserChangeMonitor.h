@class NSSet, NSMutableSet, NSObject;
@protocol OS_dispatch_source, _MPActiveUserChangeMonitorDelegate;

@interface _MPActiveUserChangeMonitor : NSObject

@property (readonly, nonatomic) NSSet *expectedNotifications;
@property (retain, nonatomic) NSMutableSet *receivedNotifications;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *notificationTimer;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } stateLock;
@property (weak, nonatomic) id<_MPActiveUserChangeMonitorDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_cancelNotificationTimerWithReason:(id)a0;
- (void)_startNotificationTimerWithEventHandler:(id /* block */)a0;
- (void)ingestNotificationName:(id)a0;

@end
