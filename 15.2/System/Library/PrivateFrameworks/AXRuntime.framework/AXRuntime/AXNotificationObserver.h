@class NSArray;
@protocol AXNotificationObserverDelegate;

@interface AXNotificationObserver : NSObject {
    struct __AXObserver { } *_observer;
}

@property (retain, nonatomic) NSArray *notifications;
@property (weak, nonatomic) id<AXNotificationObserverDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNotifications:(id)a0;
- (void)_registerForAXNotifications:(BOOL)a0;
- (void)_didObserveNotification:(int)a0 notificationData:(void *)a1;

@end
